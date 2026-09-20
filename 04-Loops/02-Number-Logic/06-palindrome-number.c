#include<stdio.h>
int main(){
    int n,digit,p=0,original;
    printf("Enter the number:");
    scanf("%d",&n);
    original=n;
    for(;n!=0;){
        digit=n%10;
        p=p*10+digit;
        n=n/10;
    }
    if(p==original){
    printf(" palindrome number is:%d",p);
    }else{
        printf("not palindrome:%d",p);
    }
    return 0;
}
