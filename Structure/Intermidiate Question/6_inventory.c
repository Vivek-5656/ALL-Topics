#include<stdio.h>
#include<string.h>
typedef struct inventory
{
    char item_name[100];
    int code;
    int price;
}items;
void input(items it[],int s){
  
    for(int i=0;i<s;i++){
        printf("--------Item -- %d---------\n",i+1);
        printf("Enter Item Name:- ");
        scanf("%s",it[i].item_name);
        printf("Enter Item Code:- ");
        scanf("%d",&it[i].code);
        printf("Enter Item Price:- ");
        scanf("%d",&it[i].price);
    }
}
void output(items it[],int s){
    int max=0,a;
   for(int i=0;i<s;i++){
    for(int j=i+1;j<s;j++){
        if(it[i].price > it[j].price){
            max=it[i].price;
            a=i;
        }
    }
   }  
   printf("Expensive Item: Name:- %s Code:- %d Price:- %d",it[a].item_name,it[a].code,it[a].price); 

//    for(int i=0;i<s;i++){
//         if(it[i] == it[a]){

//         } 
//    }
    
}


int main(){
    int s;
    printf("Enter Number of Item's:- ");
    scanf("%d",&s);
    items itm[s];
    input(itm,s);
    output(itm,s);

    return 0;
}