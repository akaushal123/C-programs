main()
{
int i;
char a[50];
printf("Enter a string: ");
gets(a);

for(i=0;a[i]!='\0';i++);

printf("%d\n",i);

}
