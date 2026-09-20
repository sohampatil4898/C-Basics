#include<stdio.h>
int main(){
    int n,digit,product=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(;n!=0;){
        digit=n%10;
        product=product*digit;
        n=n/10;
    }
    printf("product of digit:%d",product);
    return 0;
}
