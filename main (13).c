
//4.
//Finding the frequency of the unique character in the given string
#include <stdio.h>
#include <string.h>

int main()
{
 char s[100]; 
 int i,j,k,count=0,n;
 printf("Enter the string : ");
gets(s);
 for(j=0;s[j];j++);
n=j; 
 printf(" frequency count character in string:\n");
 for(i=0;i<n;i++) 
 {
 count=1;
 if(s[i])
 {
 for(j=i+1;j<n;j++) 
 { 
 
 if(s[i]==s[j])
 {
 count++;
 s[j]='\0';
 }
 } 
 printf("Character '%c' = %d \n",s[i],count);
 }
 
 } 
return 0;
}
//RESULT:I have found the frequency of the unique character in the given string
//Application: It used in finding the frequency of individual character and the character used by majority of people.





