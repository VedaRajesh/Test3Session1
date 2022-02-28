#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
 printf("enter the first numerator\n");
    scanf("%d",num1);
    printf("enter the first dinominator");
        scanf("%d",den1);
    printf("enter the second numerator\n");
    scanf("%d",num2);
    printf("enter the second numerator\n");
    scanf("%d",den2);
}
void add(int num1,int den1, int num2, int den2, 
int *num3, int *den3)
{
    *num3/*den3=(num1/den1)+(num2/den2);
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
    printf("sum is %d/%d",num3,den3);
}
int main()
{
    int  num1,den1,num2,den2,num3,den3;
    input(&num1,&den1,&num2,&den2);
    add(num1,den1,num2,den2,&num3,&den3);
    output(num1,den1,num2,den2,num3,den3);
    return 0;
}