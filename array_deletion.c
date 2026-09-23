#include<stdio.h>
void print_array(int array[],int size);
void delete(int array[],int *size, int position);
void print_array(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d\n",array[i]);        
    }
}
void delete(int array[],int *size, int position){
    int index=position-1;
    for(int i=index;i<*size-1;i++){
        array[i]=array[i+1];
    }
    *size=*size-1;
}
int main(){
    int a[10]={10,20,30,40,50};
    int size=5;
    int position = 3;
    printf("Original array\n");
    print_array(a,size);
    delete(a,&size,position);
    printf("Array after insertion\n");
    print_array(a,size);
    return 0;
}