#include<stdio.h>
int main() {
    int num,result = 0;
    printf("enter number:");
    scanf("%d",&num);
    for(int i = 1;i < num;i++){
        result += i;
    }
    printf("%d",result);
}