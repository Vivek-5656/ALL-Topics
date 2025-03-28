// #include<stdio.h>
// Write a program to find the maximum number between two numbers using a pointer
// int maximum(int *num1,int *num2){
//     int s = (*num1 > *num2)? *num1:*num2;
//     return s;
// }
// int main(){
//     int num1,num2;
//     printf("Enter num1:- ");
//     scanf("%d",&num1);
//     printf("Enter num2:- ");
//     scanf("%d",&num2);
//     int result = maximum(&num1,&num2);
//     printf("The maximum value is = %d",result);

//     return 0;
// }
#include<stdio.h>
void res(int *n1,int *n2){
    if(*n1>*n2){
        printf("%d is max",*n1);
    } else{
        printf("%d is max",*n2);
    }
}
int main(){
    int n1,n2;
    printf("Enter num1:- ");
    scanf("%d",&n1);
    printf("Enter num2:- ");
    scanf("%d",&n2);
    res(&n1,&n2);
    return 0;

}