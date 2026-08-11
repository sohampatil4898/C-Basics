#include<stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a>=1){
        printf("The given number is positive");
    }else{
        printf("The given number is negative");
    }
    return 0;   
}
