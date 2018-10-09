//TwoDimensional Array

#include<stdio.h>

void main(){

int a[10][10];

int i,j,row, column;

printf("Enter the rows number how many you want \n");

scanf("%d", &row);//Have taken total rows number.

printf("Enter the columns number how many you want \n");

scanf("%d", &column);//Have taken total columns number

printf("Enter your all Element one by one \n");

for(i=0;i<row;i++){

    for(j=0;j<column;j++){

          scanf("%d", &a[i][j]);//Have taken total rows & columns from user.
    }

}
printf("your array \n");

for(i=0;i<row;i++){

    for(j=0;j<column;j++){

          printf("%d ", a[i][j]);//Shown all element which taken from user.
    }
    printf("\n");
}


}
