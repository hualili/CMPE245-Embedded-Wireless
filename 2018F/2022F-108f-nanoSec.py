# This is a sample Python code for getting the timng information
# in nanoSecond range, you can use this code for LISA implementation
# on Nvidia Jetson Nano platform with fast enough speed to do
# over sampling.
# HL, 2022-10-14
def user_defined_moduleName(name): # name: parameter_passing_to_module
    print(f'Hi from my testing module - HL, {name}')  # Press Ctrl+F8 to toggle the breakpoint.
# main starts here
if __name__ == '__main__':
    user_defined_moduleName('nSec Testing')

# Python time.time_ns() method

import time

# Get the epoch
obj = time.gmtime(0)
epoch = time.asctime(obj)
print("epoch is:", epoch)

# Get the time in seconds since starting at the epoch time
time_sec = time.time()

# Get the time in nanoseconds since starting at the epoch
time_nanosec = time.time_ns()

print("Time in seconds since the epoch:", time_sec)
print("Time in nanoseconds since the epoch:", time_nanosec)