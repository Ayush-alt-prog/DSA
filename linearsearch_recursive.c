#include<stdio.h>
void input(int arr[],int size);
int linearsearch(int arr[],int low,int key, int size);
int linearsearch(int arr[], int low, int key, int size){
	if(low<=size-1){
		if(arr[low]==key)
			return low;
		else{
			low++;
			return linearsearch(arr, low, key, size);
		}
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
    int result = linearsearch(a,0,key,5);
    if(result==-1)
    printf("number not found\n");
    else
    printf("The number was found at index %d",result);
    return 0;

}
