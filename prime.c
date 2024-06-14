#include <stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);
    int i = 1 ,count = 0;
    while(i <= num){
        if(num%i == 0){
             count = count + 1;
        }
        i++;
    }
    if(count == 2){
        printf("It is a prime number");
    }
    else{
        printf("Not a prime number ");
    }
    return 0;
}