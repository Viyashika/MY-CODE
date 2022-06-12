
//5.
//Convert the given string into lowercase then count the frequency of individual character and print the frequency of each individual
#include <stdio.h>//this header file for printf() function usage in my code
#include <string.h>//this header file for tolower()and strlen()usage in my code
int main()
{
char s[30];//declare string with the size of 30elements at the maximumlimits
 int i,j,k,count=0,n;//Declaring i,j,kand count are used for my convinience in the loop
printf("Enter the string : ");//providing message to user as enter the string
 gets(s);//getting the input as string
for(i=0;i<strlen(s);i++)//i based for loop gets incremented only when the inner loops completed
 {
 s[i]=tolower(s[i]);// to convert the user input string into lowercase
 }
 for(j=0;s[j];j++);//j based for loops gets increases upon executing of its block statement
n=j; 
 for(i=0;i<n;i++) 
 {
 count=1;
 if(s[i])
 {
 for(j=i+1;j<n;j++) 
 { 
 
 if(s[i]==s[j])
 {
 count++;//adding the frequency of individual character 
 s[j]='\0';
 }
 } 
 printf("Charcter'%c' = %d \n",s[i],count);//displaying the frequency of the charcter in that string
 }
 
 } 
return 0;
}
//result:
 //here I have converted the given string into lowercase then count the frequency of individual character and i have printed the frequency of every individual character
//application:for assigning security code for computer,metallic boxes,for filling application purposes


