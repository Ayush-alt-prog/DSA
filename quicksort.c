#include<stdio.h>
void input(int array[], int size);
void quicksort(int array[],int low,int high);
int partition(int array[],int low,int high);
void display(int array[],int size);
void input(int array[],int size){
    printf("Enter the members of the array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
}
void quicksort(int array[],int low,int high){
    if(low<high){
        int pi=partition(array,low,high);
        quicksort(array,low,pi-1);
        quicksort(array,pi+1,high);
    }
}
int partition(int array[],int low,int high){
    int pivot=array[high];
    int i=(low-1);
    for(int j=low;j<high;j++){
        if(array[j]<pivot){
            i++;
            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
    int temp=array[i+1];
    array[i+1]=array[high];
    array[high]=temp;
    return (i+1);
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
    quicksort(a,0,size-1);
    display(a,size);
    return 0;                   
}