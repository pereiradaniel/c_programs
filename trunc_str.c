#include <stdio.h>

// when an array is passed to a function, it is passed a pointer!
// the pointer stores the memory address of the FIRST element of
// the array!
void tr_str(char string[], int n) {
    string[n] = '\0';
};

int main(int argc, char* argv[]) {

    char string[] = "abcdefg"; // there is a null terminator added to the char array!

    printf("%s\n", string);

    char quote[] = "abc def ghi jkl mno";

    printf("quote before: %s\n", quote);
    tr_str(quote, 10);
    printf("quote after: %s\n", quote);

    return 0;
}