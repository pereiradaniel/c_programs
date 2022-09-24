#include <stdio.h>
int main(int argc, char* argv[]) {

    char string[] = "abcdefg"; // there is a null terminator added to the char array!

    printf("%s\n", string);
    string[5] = '\0'; // this will truncate the string!
    printf("%s\n", string);

    return 0;
}