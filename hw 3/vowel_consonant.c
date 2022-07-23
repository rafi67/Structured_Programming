#include <stdio.h>

int main() {

    char c;
    printf("Enter a alphabet:\n");
    scanf("%d", &c);

    if(c>='A' && c<='Z') c = 'a'+(c-'A');

    switch(c) {
        case 'a':
            printf("This letter is a vowel\n");
            break;

        case 'e':
            printf("This letter is a vowel\n");
            break;

        case 'i':
            printf("This letter is a vowel\n");
            break;

        case 'o':
            printf("This letter is a vowel\n");
            break;

        case 'u':
            printf("This letter is a vowel\n");
            break;

        default:
            printf("This letter is a consonant\n");
    }

    return 0;

}