#include <stdio.h>
#include <string.h>
int main(){
    char name1[200];
    char name2[200];
    printf("ENTER YOUR NAME HERE \n");
    printf("USE CAPS ONLY!!! \n")
    printf("AVOID WHITE SPACES \n");
    scanf("%s",&name1);
    scanf("%s",&name2);
    int comm=0;
    int x=strlen(name1);
    int y=strlen(name2);
    char c;
    char d;
    for(int i=1;x;i++){
        c=name1[i];
        for(int j=1;y;){
            d=name2[j];
            if(c==d){
                comm+=1;
                printf(c);
            }
            else j++;
        }


    }
    printf("COMMON LETTERS ARE %d",comm);
    return 0;
}
