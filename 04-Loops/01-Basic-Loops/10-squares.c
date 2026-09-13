#include<stdio.h>
 int main(){
    int n;
    int square=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        square=i*i; 
        printf("Square of number %d\n",square);
        }
        
    return 0;
 }
