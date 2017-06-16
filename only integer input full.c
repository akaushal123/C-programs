int getIntegerOnly();
main()
{
int x=0;
x=getIntegerOnly();
printf("\nYou have Entered: %d",x);
}
int getIntegerOnly()
{
int ch, num=0;
printf("Enter a No: ");
do{
        ch=getch();
if(ch>=48&&ch<=57)
{
printf("%c",ch);
num=num*10+(ch-48);
}

if(ch==13)
break;
}while(1);
return(num);

}
