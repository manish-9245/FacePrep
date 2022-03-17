//1. Write a C program to remove all the characters from the given string that are not alphabet.
#include<stdio.h> 
int main()
{
    //Initializing variable.
    char str[100];
    int i, j;
    
     //Accepting input.
    printf(" Enter a string : ");
    gets(str);

     //Iterating each character and removing non alphabetical characters.
    for(i = 0; str[i] != '\0'; ++i)
    {
        while (!( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0') )
        {
            for(j = i; str[j] != '\0'; ++j)
            {
                str[j] = str[j+1];
            }
            str[j] = '\0'; 
        }
    }
     //Printing output.
    printf(" After removing non alphabetical characters the string is :");
    puts(str);
    return 0;
}