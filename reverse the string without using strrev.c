#include<stdio.h>
int main()
{
    char temp,s[20];
    int i,l;
    printf("Enter a String: ");
    gets(s);
    for (l=0;s[l]!='\0';l++);
    for(i=0;i<l/2;i++)
    {
        temp=s[i];
        s[i]=s[(l-1)-i];
        s[(l-1)-i]=temp;
    }
    printf("Reverse is %s",s);
}
