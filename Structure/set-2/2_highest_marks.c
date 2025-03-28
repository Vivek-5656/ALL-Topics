#include<stdio.h>
#include<string.h>
struct highest_marks
{
    char name[20];
    int roll;
    float marks;
};
// Find the Student with the Highest Marks
int main(){
    int size;
    printf("Enter Size:- ");
    scanf("%d",&size);
    struct highest_marks dtt[size];
    printf("------------------Enter Details-----------------\n");
    for(int i=0;i<size;i++){
        printf("Enter Name:- ");
        // scanf("%s",&dtt[i].name);
        fgets(dtt[i].name,sizeof(dtt[i].name),stdin);
        printf("Enter Roll Number:- ");
        scanf("%d",&dtt[i].roll);
        printf("Enter Marks:- ");
        scanf("%f",&dtt[i].marks);
        getchar();
    }

    struct highest_marks store;
    int s=0;
    for(int i=0;i<size;i++){
        if(s<dtt[i].marks){
            s=dtt[i].marks;
            store=dtt[i];
        }
       
    }
    printf("Name:- %s Roll %d Marks:- %f",store.name,store.roll,store.marks);

    return 0;
}















// if(dtt[i].marks > dtt[i+1].marks && dtt[i].marks > dtt[i+2].marks){
//     printf("Name:- %s Roll %d Marks:- %.02f",dtt[i].name,dtt[i].roll,dtt[i].marks);
//     break;
// } 
// else{
//     if(dtt[i+1].marks > dtt[i].marks && dtt[i+1].marks > dtt[i+2].marks){
//         printf("Name:- %s Roll %d Marks:- %.02f",dtt[i+1].name,dtt[i+1].roll,dtt[i+1].marks);
//         break;
//     } else{
//         if(dtt[i+2].marks > dtt[i].marks && dtt[i+2].marks > dtt[i+1].marks){
//             printf("Name:- %s Roll %d Marks:- %.02f",dtt[i+2].name,dtt[i+2].roll,dtt[i+2].marks);
//             break; 
//         }
//     }
// }
// }