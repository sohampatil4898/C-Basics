#include<stdio.h>
int main(){
    int n,digit,reverse=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(;n!=0;){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    printf("reverse number is:%d",reverse);
    return 0;
}
