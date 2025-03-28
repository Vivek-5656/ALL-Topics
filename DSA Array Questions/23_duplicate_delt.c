#include<stdio.h>
void input(int arr[],int s){
    printf("Enter Elements:- \n");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
}
void output(int arr[],int s){
    int c=0;
    int st;
    int so;
    int t=0;
    for(int i=0;i<s;i++){
       if(arr[i]==2){
        st=arr[i];
        c++;
       }
       if(arr[i]==7){
        so=arr[i];
        t++;
       }
    }
    printf("C = %d s= %d\nt = %d so = %d",c,st,t,so);

}
int main(){
    int s;
    printf("Enter size:- ");
    scanf("%d",&s);
    int arr[s];
    input(arr,s);
    output(arr,s);
    return 0;
}