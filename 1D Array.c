//One Dimensional Array.

#include<stdio.h>

int main()
{

    int a[10],i,n;//Higest 10 number input.

    printf("Enter the element number \n");

    scanf("%d", &n);

    printf("Enter the element \n");


    for(i = 0; i<n; i++)
    {

        scanf("%d", &a[i]);//Have taken input.

    }

    printf("Your number is:\n");

    for(i = 0; i<n; i++)
    {

        printf("%d ", a[i]);//Given our output.

    }
}
