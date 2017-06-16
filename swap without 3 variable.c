/*swapping without using 3 variable*/
main()
{
int a,b;
printf("Enter two Numbers: ");
scanf("%d %d",&a,&b);
b=b-a;
a=a+b;
b=a-b;
printf("\nSwapped No. are a=%d & b=%d",a,b);}
