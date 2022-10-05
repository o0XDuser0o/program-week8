#include<stdio.h>
int main() {
    int num,result;
    printf("enter number:");
    scanf("%d",&num);
    result = ((num-1)*((num-2)+2))/2;
    printf("%d",result);
}