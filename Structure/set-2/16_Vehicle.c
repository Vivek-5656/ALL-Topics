// Use a Union for Vehicle Types
// Create a Vehicle union that can store either a car model or a bike model but not both at the same time.
// Example Input:
// Vehicle: Car, Model: BMW
#include<stdio.h>
#include<string.h>
typedef union vehicle_Data
{
    char vh[100];
    char modal[100];
}vehicle;
 
int main(){
    vehicle st;
    printf("Enter Vehicle:- ");
    scanf("%s",&st.vh);
    printf("Enter Model:- ");
    scanf("%s",&st.modal);

    printf("Enter Vehicle:- ");
    scanf("%s",&st.vh);
    printf("Enter Model:- ");
    scanf("%s",&st.modal);

    
    printf("Vehicle:- %s Model:- %s\n",st.vh,st.modal);

    return 0;
}