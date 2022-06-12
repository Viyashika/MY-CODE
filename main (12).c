
//3.
// Convert the given input string into lowercase then Remove the duplicate character and print the remaining characters in the given string
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    char str[30];
    int i,j,k;
    printf("Enter a string:");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        for(j=i+1;j<strlen(str);j++)
        {
            if(str[i]==str[j])
            {
                for(k=j;k<strlen(str);k++)
                {
                    str[k]=str[k+1];
                }
            }
        }
    }
        for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>=65&&str[i]<=90)
        str[i]=str[i]+32;
    }
    for(i=0;i<strlen(str);i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[j]==str[i])
            {
                for(k=j;str[k]!='\0';k++)
                {
                    str[k]=str[k+1];
                }
            }
        }
    }
    

    printf("%s",str);
    return 0;
}
//result:
//I have Converted the given input string into lowercase then I have Removed the duplicate character then I have print the remaining characters in the given string






