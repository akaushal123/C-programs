/*swapping of two numbers*/
#include<stdio.h>
main()
{
int a,b,temp;
printf("Enter two Numbers: ");
scanf("%d %d",&a,&b);
printf("a= %d\nb=%d",a,b);
temp=a;
a=b;
b=temp;
printf("\nSwapped No. are a= %d and b=%d",a,b);
getch();
}
