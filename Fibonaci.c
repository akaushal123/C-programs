int fibonacci(int);
main()
{
    int num, i;
    printf("Enter a no for Fibonacci Series you want to see: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        printf("%d  ",fibonacci(i));

}

int fibonacci(int x)
{
    if (x==1||x==2)
        return 1;
    return(fibonacci(x-1) + fibonacci(x-2));



}
