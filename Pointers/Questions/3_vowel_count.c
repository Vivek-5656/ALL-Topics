#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter String:- ");
    fgets(str,sizeof(str),stdin);
    int vowel=0,cons=0,spcl=0;
    char *ptr=str;
    for(int i=0;*(ptr+i)!='\0';i++)
    {
        if(*(ptr+i) == 'a' || *(ptr+i) == 'A' || *(ptr+i) == 'e' || *(ptr+i) == 'E' || *(ptr+i) == 'i' || *(ptr+i) == 'I' || *(ptr+i) == 'o' || *(ptr+i) == 'O' || *(ptr+i) == 'u' || *(ptr+i) == 'U')
        {
            vowel++;
        } else
        {
            if((*(ptr+i) >= 'a' || *(ptr+i) >= 'A') && (*(ptr+i) <= 'z' || *(ptr+i) <= 'Z')){
                if(*(ptr+i) != 'a' || *(ptr+i) != 'A' || *(ptr+i) != 'e' || *(ptr+i) != 'E' || *(ptr+i) != 'i' || *(ptr+i) != 'I' ||                *(ptr+i) != 'o' || *(ptr+i) != 'O' || *(ptr+i) != 'u' || *(ptr+i) != 'U' )
                {
                    // printf("consonant");
                    cons++;
                } else
                {
                    printf("Special Character");
                    
                }
            }
        }
    }
    printf("Vowel = %d\nConsonant = %d",vowel,cons);

    return 0;
}