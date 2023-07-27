import objc

# Import necessary macOS frameworks
objc.loadBundle('CoreAudio', bundle_path='/System/Library/Frameworks/CoreAudio.framework', module_globals=globals())
objc.loadBundle('CoreFoundation', bundle_path='/System/Library/Frameworks/CoreFoundation.framework', module_globals=globals())

def set_audio_balance(left_balance, right_balance):
    try:
        # Get the default output device
        default_output = AudioHardwareService.DefaultOutputDevice()

        # Get the master channel number for the default output device
        _, _, master_channel = AudioDeviceGetProperty(default_output, 0, 0, kAudioObjectPropertyElementMaster)

        # Set the audio balance for left and right channels
        left_balance = float(left_balance)
        right_balance = float(right_balance)
        balance_values = [left_balance, right_balance]
        balance_struct = AudioValueRange(minimum=-1.0, maximum=1.0, mDefault=0.0)
        AudioDeviceSetProperty(
            default_output,
            AudioObjectPropertyAddress(
                mSelector=kAudioDevicePropertyStereoPan,
                mScope=kAudioObjectPropertyScopeOutput,
                mElement=master_channel
            ),
            0,
            None,
            balance_struct,
            len(balance_values),
            balance_values
        )

        print("Audio balance set successfully!")
    except Exception as e:
        print("Error occurred:", str(e))


if __name__ == "__main__":
    # Set your desired audio balance (between -1.0 to 1.0)
    # -1.0 is full left, 0.0 is center, 1.0 is full right
    left_balance_value = 0.0
    right_balance_value = 0.0

    set_audio_balance(left_balance_value, right_balance_value)
