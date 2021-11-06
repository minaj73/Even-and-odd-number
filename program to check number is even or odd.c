#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;
    Up:
    printf("\n enter number");
    scanf("%d",&no);
    if(no==0)
    {
        printf("\n %d is neutral",no);
       goto Up;
    }
    if(no%2==0)
    {
        printf("\n %d is even number",no);
    }
    else
    {
        printf("\n %d is odd number",no);
    }
    getch();
    return 0;

}
