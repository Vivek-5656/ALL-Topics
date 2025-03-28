#include <stdio.h>
// --------------------------------------------- Palindrom Number ----------------------------------
void palindrom(int num) {
    int temp = num;
    int rem;
    int rev=0;
    while (num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    // int a=num;

    if(temp == rev){
        printf("%d is Palindrome Number.",rev);
    } else{
        printf("%d is Not Palindrome.",rev);
    }

}

int main(){
    int number;
    printf("Enter a number :- ");
    scanf("%d",&number);

    palindrom(number);
    return 0;
}