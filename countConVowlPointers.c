#include <stdio.h>
int main(){
    char word[100];
    char *pointer;
    int con = 0 , vow = 0;
    printf("Enter the word : ");
    scanf("%s" , word);
    pointer = word;
    int i = 0;
    while(*pointer != '\0'){
        if(*pointer == 'A' || *pointer == 'a' || *pointer == 'E' || *pointer == 'e' || *pointer == 'I' || *pointer == 'i' || *pointer == 'O' || *pointer == 'o' || *pointer == 'U' || *pointer == 'u' ){
            vow++;
        }
        else{
            con++;
        }
        *pointer++;
    }
    printf("No of Consoant : %d\n",con );
    printf("No of Vowels : %d\n",vow );
    return 0;

}