#include<stdio.h>
int factorial(int n);
int factorial(int n){
    if(n<0)
        return -1;
    if(n==0||n==1){
        return 1;
    }
    else 
    return (n*factorial(n-1));
}
int main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    int result=factorial(a);
    if(result==-1)
        printf("Please enter a positive number");
    else
        printf("The factorial of the number is%d",result);
    return 0;
}