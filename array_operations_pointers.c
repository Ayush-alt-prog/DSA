#include<stdio.h>
void traverse(int *arr,int n);
void access(int arr[],int n);
void access(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
}
void traverse(int *arr,int n){
    int i;
    printf("Array Elements\n");
    for(int i=0;i<n;i++){
        printf("%d\n",*(arr+i));      
    }
}
int main(){
    int a[10];
    printf("Enter less than 10 elements");
    access(a,10);
    traverse(&a,10);
    return 0;
}