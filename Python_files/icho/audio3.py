import ctypes

# Define CoreAudio constants
kAudioObjectPropertyScopeOutput = 2
kAudioDevicePropertyStereoPan = 19

def set_audio_balance(left_balance, right_balance):
    try:
        # Load CoreAudio framework using ctypes
        ca_framework = ctypes.CDLL('/System/Library/Frameworks/CoreAudio.framework/CoreAudio')

        # Get the default output device ID
        default_output_id = ctypes.c_uint32(0)
        size = ctypes.c_uint32(ctypes.sizeof(default_output_id))
        ca_framework.AudioObjectGetPropertyData(ctypes.c_uint32(0), ctypes.byref(ctypes.c_uint32(0)), ctypes.c_uint32(0),
                                                None, ctypes.byref(size), ctypes.byref(default_output_id))

        # Set the audio balance for left and right channels
        left_balance = float(left_balance)
        right_balance = float(right_balance)
        balance_values = (left_balance, right_balance)
        balance_values_ptr = (ctypes.c_float * len(balance_values))(*balance_values)
        ca_framework.AudioObjectSetPropertyData(default_output_id, ctypes.byref(ctypes.c_uint32(kAudioObjectPropertyScopeOutput)),
                                                ctypes.c_uint32(0), ctypes.c_uint32(0), size, balance_values_ptr)

        print("Audio balance set successfully!")
    except Exception as e:
        print("Error occurred:", str(e))


if __name__ == "__main__":
    # Set your desired audio balance (between -1.0 to 1.0)
    # -1.0 is full left, 0.0 is center, 1.0 is full right
    left_balance_value = 0.0
    right_balance_value = 0.0

    set_audio_balance(left_balance_value, right_balance_value)
