#include<stdio.h>
 int main(){
   int n;
   int count=0;
   printf("Enter the number:");
   scanf("%d",&n);
   for(int i=1;n!=0;i++){
    n=n/10;
    count=count+1;
    }
    printf("count of digit:%d\n",count);
   return 0;
}
