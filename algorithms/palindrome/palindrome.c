#include <stdio.h>

int main() {
    char text[] = "abcba";
    int begin, middel, end, length = 0;

    while (text[length] != '\0')
    length++;

    end = length - 1;
    middel = length/2;

    for (begin = 0; begin < middel; begin++) {
        if (text[begin] != text[end]) {
            printf("Not a palindrome.\n");
            break;
        }
        end--;
    }

    if (begin == middel)
        printf("Palindrome.\n");
    
    return 0;
}