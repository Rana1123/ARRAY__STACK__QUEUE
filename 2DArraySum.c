//Sum of TwoDimensional Array

#include<stdio.h>

void main()
{

    int a[10][10];

    int i,j,rows, columns,sum=0;

    printf("Enter the rows number how many you want \n");

    scanf("%d", &rows);//Have taken total rows number.

    printf("Enter the columns number how many you want \n");

    scanf("%d", &columns);//Have taken total columns number

    printf("Enter your all Element one by one \n");

      for(i=0;i<rows;i++)
      {

          for(j=0;j<columns;j++)
          {

          scanf("%d", &a[i][j]);//Have taken total rows & columns from user.

          }

}
    printf("your array \n");

    for(i=0;i<rows;i++){

        for(j=0;j<columns;j++)
        {

            sum = sum+a[i][j];//Adding all element which taken from user.

            printf("%d ", a[i][j]);//Shown all element which taken from user.

        }
    printf("\n");
}

    printf("\nSum of your Two dimension array = %d\n",sum);//Shown the sum after adding all element.


}
