#include<stdio.h>
int main(){
    int n,largest=0,digit;
    printf("Enter the number:");
    scanf("%d",&n);
    for(;n!=0;){
        digit=n%10;
        if(digit>largest){
        largest=digit;
        }
        n=n/10;
}
printf("largest digit:%d\n",largest);
return 0;
}
