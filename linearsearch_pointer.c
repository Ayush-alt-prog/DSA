#include<stdio.h>
void input(int arr[],int size);
int linearsearch(int *arr,int key,int size);
int linearsearch(int *arr,int key, int size){
    for(int i=0;i<size;i++){
        if (*(arr+i)==key)
        return i;
    }
    return -1;
}
void input(int arr[],int size){
    printf("Enter the elements of the array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}
int main(){
    int a[5];
    int key;
    input(a,5);
    printf("Enter the number to be searched\n");
    scanf("%d",&key);
    int result = linearsearch(a,key,5);
    if(result==-1)
        printf("number not found\n");
    else
        printf("The number was found at index %d",result);
    return 0;

}