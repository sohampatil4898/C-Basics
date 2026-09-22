#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
        count=count+1;
        }
     }
    if(count==2){
        printf("Prime number");
    }else{
        printf("not a prime number");
    }
    
    return 0;
}
