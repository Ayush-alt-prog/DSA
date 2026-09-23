#include<stdio.h>
void display(int array[],int size);
void mergesort(int arr[],int low,int high);
void merge(int arr[],int low,int mid,int high);
void input(int array[],int size);
void merge(int arr[],int low,int mid,int high){
    int n1=mid-low+1;
    int n2=high-mid;
    int L[n1];
    int N[n2];
    for(int i=0;i<n1;i++){
        L[i]=arr[low+i];
    }
    for(int j=0;j<n2;j++){
        N[j]=arr[mid+1+j];
    }
    int i = 0, j = 0;
    int K=low;
    while(i<n1&&j<n2){
        if(L[i]<=N[j]){
            arr[K]=L[i];
            i++;
        }
        else{
            arr[K]=N[j];
            j++;
        }
        K++;
    }
    while(i<n1){
        arr[K]=L[i];
        K++;
        i++;
    }
    while (j<n2){
        arr[K]=N[j];
        K++;
        j++;

    }

}
void mergesort(int arr[],int low,int high){
    if(low<high){
        int mid=low+(high-low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
void input(int array[],int size){
    printf("Enter the members of the array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
}
void display(int array[],int size){
    printf("the sorted elements are\n");
    for(int i=0;i<size;i++){
        printf("%d\n",array[i]);
    }
}
int main(){
    int a[10];
    int size=10;
    input(a,size);
    mergesort(a,0,size-1);
    display(a,size);
    return 0;
}
