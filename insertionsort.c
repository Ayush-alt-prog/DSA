#include<stdio.h>
void insertionsort(int array[],int size);
void input(int array[],int size);
void display(int array[],int size);
void insertionsort(int array[],int size){
    for(int step=1;step<size;step++){
        int key = array[step];
        int j=step-1;
        while(j>=0&&key<array[j]){
            array[j+1]=array[j];
            --j;
        }
        array[j+1]=key;
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
    input(a,10);
    insertionsort(a,10);
    display(a,10);
    return 0;
}