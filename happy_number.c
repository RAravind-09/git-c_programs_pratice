#include <stdio.h>
int happyNumber(int num){
    int sum = 0;    
    while (num > 0)
    {
        int rem = num % 10;
        sum = sum + rem * rem;
        num = num/10;
    }
    if(sum == 1){
        return 1;
    }
    else if(sum == 4){
        return 0;
    }
    else{
        happyNumber(sum);
    }
    
}
int main(){
    int num;
    printf("Enter the input number : ");
    scanf("%d",&num);
    int returnNumber = happyNumber(num);
    if(returnNumber == 1){
        printf("Given Number is Happy Number\n");
    }
    else{
        printf("Given Number is not Happy Number\n");
    }
    return 0;
}