#include<stdio.h>

int main()
{
int a[10],i,n;

printf("Enter the element number \n");
scanf("%d", &n);

printf("Enter the element \n");


for(i = 0; i<n; i++)
{

scanf("%d", &a[i]);

}

printf("Your list number is:\n");

for(i = 0; i<n; i++)
{

printf("%d ", a[i]);

}
//return 1;
}
