
import keyboard
import subprocess
import time
import os

runs = [

    # Run 1
    [ 65, 24, 80, 73, 51, ],

    # Run 2
    #[ 66, 38, 84, 69, 59, ],

    # Run 3
    #[ 72, 52, 81, 23, 53, ],

    # Run 4
    #[ 65, 28, 72, 63, 65, ],

    #Run 5
    #[ 65, 55, 75, 68, 62, ],

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

print("\n\nfinished")
