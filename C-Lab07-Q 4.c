#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charcter;

    printf("Enter a charcter");
    scanf("%c",&charcter);

    switch(charcter)
    {
        case 'A': printf(" A is a vowel. \n");break;
        case 'E': printf(" E is a vowel. \n");break;
        case 'I': printf(" I is a vowel. \n");break;
        case 'O': printf(" O is a vowel. \n");break;
        case 'U': printf(" U is a vowel. \n");break;
        case 'a': printf(" a is a vowel. \n");break;
        case 'e': printf(" e is a vowel. \n");break;
        case 'i': printf(" i is a vowel. \n");break;
        case 'o': printf(" o is a vowel. \n");break;
        case 'u': printf(" u is a vowel. \n");break;
        default : printf("%c is not vowel",charcter);break;

    }


    return 0;
}
