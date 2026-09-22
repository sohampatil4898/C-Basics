#include<stdio.h>
int main(){
    int n,smallest=9,digit;
    printf("Enter the number:");
    scanf("%d",&n);
    for(;n!=0;){
        digit=n%10;
        if(digit<smallest){
        smallest=digit;
        }
        n=n/10;
}
printf("smallest digit:%d\n",smallest);
return 0;
}
