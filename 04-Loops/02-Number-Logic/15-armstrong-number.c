#include<stdio.h>
int main(){
    int n,digit,original,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    original=n;
    for(; n!=0;){
        digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if(original==sum){
        printf("Armstrong number");
    }else{
        printf("Not armstrong number");
    }
    return 0;
    
}
