import applescript

def set_audio_balance(left_balance, right_balance):
    try:
        # Convert the balance values to integers (ranging from 0 to 100)
        left_balance_percent = int((left_balance + 1.0) * 50)
        right_balance_percent = int((right_balance + 1.0) * 50)

        # Build the AppleScript command to set the audio balance
        applescript_command = f"""
        set volume output volume 100
        set volume input volume 100
        set volume alert volume 100
        set volume output muted false
        set volume 1, output volume {left_balance_percent}
        set volume 2, output volume {right_balance_percent}
        """

        # Execute the AppleScript command using applescript library
        applescript.run(applescript_command)

        print("Audio balance set successfully!")
    except Exception as e:
        print("Error occurred:", str(e))

if __name__ == "__main__":
    # Set your desired audio balance (between -1.0 to 1.0)
    # -1.0 is full left, 0.0 is center, 1.0 is full right
    left_balance_value = 0.0
    right_balance_value = 0.0

    set_audio_balance(left_balance_value, right_balance_value)
