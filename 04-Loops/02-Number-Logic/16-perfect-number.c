#include<stdio.h>
int main(){
    int n,sum=0,original;
    printf("Enter the number:");
    scanf("%d",&n);
    original=n;
    for(int i=1;i<n;i++){
        if(n%i==0){
        sum=sum+i;
        }
    }
    if(original==sum){
        printf("perfect number");
    }else{
        printf("Not perfect number");
    }
    
    return 0;
    
}
