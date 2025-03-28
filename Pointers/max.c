 #include <stdio.h>
void max(int a,int b,int *s)
{
    *s = (a > b)?a:b;
   
}
int main() {
    int a,b;
    printf("Enter a:- ");
    scanf("%d",&a);
    printf("Enter b:- ");
    scanf("%d",&b);
    int s;
    max(a,b,&s);
    printf("Maximum is = [%d]",s);

    return 0;
}