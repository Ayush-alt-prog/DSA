#include<stdio.h>
int main(){
    int fact=1;
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        fact=fact*i;
    }
    printf("The factorial is:%d",fact);
    return 0;
}