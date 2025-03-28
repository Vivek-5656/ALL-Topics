#include<stdio.h>

int main(){

    int month;
    printf("Enter month number:- ");
    scanf("%d",&month);

    if(month == 1){
        printf("Jan , 31 Day's");
    } else{
        if(month == 2){
            printf("Feb, 28 or 29 Day's");
        } else{
            if(month == 3){
                printf("March, 31 Day's");
            } else{
                if(month == 4){
                    printf("April, 30 Day's");
                } else{
                    if(month == 5){
                        printf("May, 31 Day's");
                    } else{
                        if(month == 6){
                            printf("June, 30 Day's");
                        } else{
                            if(month == 7){
                                printf("July, 31 Day's");
                            } else{
                                if(month == 8){
                                    printf("Aug, 30 Day's");
                                } else{
                                    if(month == 9){
                                        printf("Sep, 31 Day's");
                                    } else{
                                    if(month == 10){
                                        printf("Oct, 30 Day's");
                                    } else{
                                    if(month == 11){
                                        printf("Nov, 31 Day's");
                                    } else{
                                    if(month == 12){
                                        printf("Dec, 30 Day's");
                                    } else{
                                        printf("Enter valid number of month!");
                                    }
                                }
                                }
                                }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
   

    return 0;
}