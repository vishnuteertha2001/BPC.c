#include<stdio.h>
void main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if(n%2==0){
        printf("Hello");
    }
        else if(n%3==0){
            printf("World");
        } 
    else(n%2==0 && n%3==0){
        printf("Hello World");
    }
}
