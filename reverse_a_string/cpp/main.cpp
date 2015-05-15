#include <iostream>
#include <string>

int
main(int argc, char *argv[])
{
    // 1 determine the number of command line arguments
    if (argc != 2) {
        std::cout << "error: command line argument missing" << std::endl;
        return -1;
    }

    // 2 create a string from the argument
    std::string arg(argv[1]);

    // 3 print the string in reverse
    for (int i = arg.length(); i > -1; i--) {
        std::cout << arg[i];
    }
    std::cout << std::endl;

    // 4 return 0 indicating success
    return 0;
}
