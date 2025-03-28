#include<stdio.h>
#include<string.h>
struct node
{
    int data;
    struct node *next;
};

int main(){
    struct node s1,s2,s3,s4;
    s1.data;
    printf("Enter s1:- ");
    scanf("%d",&s1.data);
    s1.next=NULL;
    s2.data;
    printf("Enter s2:- ");
    scanf("%d",&s2.data);
    s2.next=NULL;
    s1.next=&s2;
    s3.data;
    printf("Enter s3:- ");
    scanf("%d",&s3.data);
    s3.next=NULL;
    s2.next = &s3;
    s4.data;
    printf("Enter s4:- ");
    scanf("%d",&s4.data);
    s4.next=NULL;
    s3.next=&s4;

    struct node *ptr=&s1;
    // printf("S1:- %d -> ",ptr->data);
    // ptr=s1.next;
    // printf("S2:- %d -> ",ptr->data);
    // ptr=s2.next;
    // printf("S3:- %d -> ",ptr->data);
    // ptr=s3.next;
    // printf("S4:- %d -> ",ptr->data);

    while (ptr!=NULL)
    {
        printf(" %d ->",ptr->data);
        ptr=ptr->next;
    }
    

    return 0;
}