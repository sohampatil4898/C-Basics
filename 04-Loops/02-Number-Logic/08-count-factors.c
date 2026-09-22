#include<stdio.h>
int main(){
    int n,fact,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("factors are:%d\n",n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\n",i);
            count=count+1;
        }
    }
    printf("count of fact:%d\n",count);
    return 0;
}
