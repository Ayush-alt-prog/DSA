#include<stdio.h>
int main(){
    int n;
    printf("1.Array\n");
    printf("2.Linked list\n");
    printf("3.Graph\n");
    printf("4.Tree\n");
    printf("Enter your choice");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("Non primitive, Linear, Static data structure");
        break;
        case 2:
        printf("Non primitive, Linear, Dynamic data structure");
        break;
        case 3:
        printf("Non primitive, Non linear, data structure");
        break;
        case 4:
        printf("Non primitive, Non linear, data structure");
        break;
        default:
        printf("Invalid input");
    }
    return 0;

}