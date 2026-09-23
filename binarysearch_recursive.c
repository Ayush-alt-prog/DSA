#include<stdio.h>
void input(int array[],int size);
int binary_search(int array[],int key,int low,int high);
void input(int array[],int size){
    printf("Enter the members of the array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
}
int binary_search(int array[],int key,int low,int high){
    if(low<=high){
        int mid = low + (high-low)/2;
        if(array[mid]==key)
        return mid;
        if(array[mid]<key)
        return binary_search(array,key,mid+1,high);
        return binary_search(array,key,low,mid-1);
    }
    return -1;
}
int main(){
    int a[10];
    int size=10;
    input(a,size);
    int k;
    printf("enter the number to be searched\n");
    scanf("%d",&k);
    int result = binary_search(a,k,0,size-1);
    if(result==-1)
        printf("element not found\n");
    else
        printf("Element found at %d",result);

    return 0;

}