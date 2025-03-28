#include<stdio.h>
#include<string.h>
struct books
{
    char author[20];
    int book_Name[30];
    float price;
};
// Sort Books by Price in Ascending Order

int main(){
    int size;
    printf("Enter Book Details Size:- ");
    scanf("%d",&size);
    struct books sort[size];
    printf("---------Enter Details Of Books---------\n");
    for(int i=0;i<size;i++){
        printf("Enter Author Name:- ");
        scanf("%s",&sort[i].author);
        printf("Enter Book Name:- ");
        scanf("%s",&sort[i].book_Name);
        printf("Enter Price:- ");
        scanf("%f",&sort[i].price);
    }
    int p;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(sort[i].price > sort[j].price){
                p=sort[i].price;
                sort[i].price=sort[j].price;
                sort[j].price=p;
            }
           
        }
    }
    for(int i=0;i<size;i++){
        printf("Author Name:- %s Book Name:- %s Price:- %.02f\n",sort[i].author,sort[i].book_Name,sort[i].price);
    }

    return 0;
}