/*Write a program to input and print text using dynamic memory allocation*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *str,c;
    int i=0, j=0;
    str=(char*)malloc(sizeof(char));
    printf("Enter String: ");
    while (c!='\n')
    {
        c =getc(stdin);
        j++;
        str=(char*)realloc(str,j*sizeof(char));
        str[i]=c;
        i++;
    }
    str[i]='\0';
    printf("The entered String is: %s",str);
    free(str);
    return 0;
}