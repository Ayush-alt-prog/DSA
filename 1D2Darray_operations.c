#include<stdio.h>
int main(){
    //for 1D array
    int arr1[5]={1,2,3,4,5};
    printf("Accessing the third element directly:%d\n",arr1[2]);
    printf("Traversing the entire 1D array:\n");
    for(int i=0;i<5;i++){
        printf("Element at index %d =%d\n",i,arr1[i]);

    }
    //for 2D array
    int arr2[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    printf("Accessing element row 1 column2 directly:%d\n",arr2[1][2]);
    printf("Traversing the entire 2D array\n");
    for(int j=0;j<3;j++){
        for(int k=0;k<4;k++){
            printf("%d\t",arr2[j][k]);
        }
        printf("\n");
    }
    return 0;
}