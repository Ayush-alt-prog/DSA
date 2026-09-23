#include<stdio.h>
void selection_sort(int array[],int size);
void display(int array[], int size);
void input(int array[],int size);
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
void selection_sort(int array[],int size){
    for(int i=0;i<size-1;i++){
        int min_index=i;
        for(int j=i+1;j<size;j++){
            if(array[j]<array[min_index])
            min_index=j;
        }
        int temp=array[i];
        array[i]=array[min_index];
        array[min_index]=temp;
    }

}
int main(){
    int a[10];
    int size=10;
    input(a,size);
    selection_sort(a,size);
    display(a,size);
    return 0 ;
}