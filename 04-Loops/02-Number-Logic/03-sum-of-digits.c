#include<stdio.h>
int main(){
    int n,digit,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(;n!=0;){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("Sum of digit:%d",sum);
    return 0;
}
