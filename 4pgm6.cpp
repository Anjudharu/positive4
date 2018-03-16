#include <stdio.h>
int main()
{
    char str[100];
    int cDigits,cAlphabet,cSpecialChar,cSpaces;
    int count;
     cDigits=cAlphabet=cSpecialChar=cSpaces=0;
     printf("Enter a string: ");
    gets(str);
     for(count=0;str[count]!=NULL;count++)
    {
         if(str[count]>='0' && str[count]<='9')
            cDigits++;
        else if((str[count]>='A' && str[count]<='Z')||(str[count]>='a' && str[count]<='z'))
            cAlphabet++;
        else if(str[count]==' ')
            cSpaces++;
        else
            cSpecialChar++;
    }
     printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",cDigits,
     cAlphabet,cSpaces,cSpecialChar);
     return 0;
}
