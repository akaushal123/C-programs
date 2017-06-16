main()
{
    char x;
    printf("Enter a no.: ");
    scanf("%c",&x);
    if(x>48 && x<57)
        printf("\nCorrect value\n");
    else
    {
        printf("Invalid Input Program will now terminate\n");
        getch();
        exit(1);
    }
getch();
}
