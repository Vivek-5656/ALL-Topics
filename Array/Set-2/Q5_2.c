// #include<stdio.h>
// int main(){
//     int arr[10]={3,0,4,6,3,8,2,1};
//     int c;
    
//     for(int i=0;i<10;i++){
//         c=0;
//         for(int j=i+1;j<10;j++){
//             if(arr[i]==arr[j]){
//                 c++;
                
//             }
//         }
//     }
//     if()
     
//     return 0;
// }
#include<stdio.h>
int main(){
    int arr[5]={2,5,4,3,6};
    int pos=2;
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    for(int i=pos-1;i<5;i++){
        arr[i]=arr[i+1];
    }
    printf("\n After delete\n");
    for(int i=0;i<5-1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}