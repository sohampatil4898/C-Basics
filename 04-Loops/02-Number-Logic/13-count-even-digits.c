#include<stdio.h>
int main(){
    int n,count=0,digit;
    printf("Enter the number:");
    scanf("%d",&n);
    for(;n!=0;){
        digit=n%10;
        if(digit%2==0){
        count++;
        }
        n=n/10;
}
printf("Even digits:%d\n",count);
return 0;
}
