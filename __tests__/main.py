
import keyboard
import subprocess
import time
import os

runs = [

    # Run 1
    [
        3, 4, 5,
        10, 14, 12,
        8, 7, 7,
        12, 14, 8,
        15, 8, 12,
    ]

]

# Give some time to focus on the console window
time.sleep(2)

# Get the parent directory
parent_dir = os.path.abspath(os.path.join(os.getcwd(), ".."))

for i, run in enumerate(runs):
    # print("\n\nRun " + str(i + 1))

   # Run the batch file asynchronously (non-blocking)
    subprocess.Popen(["run.bat"], shell=True, cwd=parent_dir)

    time.sleep(1)

    for inp in run:
        keyboard.write(str(inp) + "\n")
        # input()
        # you need this input() to open the cin stream in python if you dont do it in C++
        # If you dont have the cin stream open after the simulated keyboard input statements then the keystrokes will happen
        # after the print statements and not in the expected order.
        # I don't understand why this is the case but it is for some reason it is.
        time.sleep(0.5)
