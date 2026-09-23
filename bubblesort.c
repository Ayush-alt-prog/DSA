#include<stdio.h>
void input(int array[],int size);
void bubblesort(int array[],int size);
void display(int array[],int size);
void input(int array[],int size){
    printf("Enter the members of the array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
}
void bubblesort(int array[],int size){
    for(int step=0;step<size-1;++step){
        for(int i=0;i<size-step-1;++i){
            if(array[i]>array[i+1]){
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
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
    bubblesort(a,size);
    display(a,size);
    return 0;
}
