#include<stdio.h>
main()
{
char c;	
	printf("enter character ");
	scanf("%c",&c);
	  (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ?
        ((c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
          c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ?
            printf("It is a vowel.\n") :
            printf("It is a consonant.\n")) :
        printf("Invalid input. Please enter an alphabet.\n");
    }

	
