#include<stdio.h>
void print_array(int array[],int size);
void insert(int array[],int *size, int element, int position);
void print_array(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d\n",array[i]);        
    }
}
void insert(int array[],int *size, int element, int position){
    for(int i=*size-1;i>=position-1;i--){
        array[i+1]=array[i];
    }
    array[position-1]=element;
    *size=*size+1;
}
int main(){
    int a[10]={10,20,30,40};
    int size=4;
    int element=25;
    int position = 3;
    printf("Original array\n");
    print_array(a,size);
    insert(a,size,element,position);
    printf("Array after insertion\n");
    print_array(a,size);
    return 0;
}