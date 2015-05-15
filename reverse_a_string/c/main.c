#include <stdio.h>

int
main(int argc, char *argv[])
{
    // 1 make sure 2 command line arguments were provided
    if (argc != 2) {
        printf("error: no string provided\n");
        return -1;
    }

    // 2 get the length of the command line argument
    unsigned int length = 0;
    while (*(argv[1] + length) != '\0') {
        length++;
    }

    // 3 print the command line argument in reverse
    while (length != 0) {
        length--;
        printf("%c", *(argv[1] + length));
    }
    printf("\n");

    // 4 return 0 indicating success
    return 0;
}
