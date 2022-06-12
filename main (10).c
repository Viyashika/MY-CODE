
//1.
//Remove the duplicate character and print the remainning characters
#include <stdio.h>//This header file for printf() function usage in my code
#include <stdlib.h>

int main()
{ 
    char str[30];//declare string elements with size of 30 elements at the maximum limits
    int i,j,k;//declaring i,j,k are used for my convinience in the loop
    printf("Enter a string:");//providing message to user as enter a string
    gets(str);//getting the input
    for(i=0;i<strlen(str);i++)//i based for loop gets incremented only when innerloops completed
    {
        for(j=i+1;j<strlen(str);j++)//j based for loops gets increased upon execution of its block of statements
        {
            if(str[i]==str[j])
            {
                for(k=j;k<strlen(str);k++)
                {
                    str[k]=str[k+1];
                }
            }
            else 
            {
                j++;
            }
        }
    }
    

    printf("%s",str);
    return 0;
}

//result:
  //I have removed all the duplicate charcter from the given string and printed the remaining character in that string
  //application:for assigning for password,security code
  


