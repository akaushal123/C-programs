#include <stdio.h>

main()
{
    int num;
    printf("Enter a no.: ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Even");
    }
    else
        printf("Odd");

    printf("\n\nEnter another no.: ");
    scanf("%d",&num);

    if(num%2==0?printf("Even"):printf("Odd"))
{

}
getch();
}

