import sys

# make sure the user provided 2 command line arguments
if len(sys.argv) != 2:
    print("error: no command line argument provided")
    exit(-1)

i = len(sys.argv[1])

while i > 0:
    i -= 1
    sys.stdout.write(sys.argv[1][i])

sys.stdout.write('\n')
