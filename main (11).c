
//2.
//Ascend the given string using the ascii value of individual character and remove the duplicate character and print the remainning character 

#include <string.h>
#include <ctype.h>
#include <stdio.h>
int main()
{
    char s[30],temp=1,c='*',chTemp;  
    int  i,j,k=0,n;
 
    printf("Enter  the sentence : ");
    gets(s); 
    for(i=0;s[i];i++)
    {
    	if(!(s[i]==c))
    	{
    		for(j=i+1;s[j];j++)
            {
            	if(s[i]==s[j])
            	   s[j]=c;
		    }
    		}
     	
    }
    for(i=0;s[i];i++)
    {
     	s[i]=s[i+k];
        if(s[i]==c)
     	{
		  k++;
		  i--;
	    }
     	
    }
    for(i=0; i<strlen(s); i++)
    {
        for(j=0; j<strlen(s)-1; j++)
        {
            if(s[j]>s[j+1])
            {
                chTemp = s[j];
                s[j] = s[j+1];
                s[j+1] = chTemp;
            }
        }
    }
    printf("expected output : ");
 	 printf("%s",s);
 	 return 0;
}
//Result:i have ascend the given string using the ascii value of individual character and i have removed the duplicate character and printed the remainning character 



