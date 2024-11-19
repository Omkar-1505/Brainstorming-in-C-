#include<stdio.h>
int main(){
    printf('ENTER YOUR YEAR OF BIRTH IN YYYY FORMAT');
    int yob,age,d,pyear;
    scanf('%d',&yob);
    printf('ENTER PRESENT YEAR');
    scanf('%d',&pyear);
    age=pyear-yob;


    if(age>18) printf('THANKS FOR THE INPUT YOU CAN CAST YOUR VOTE');
    else if(age<18){
        d=18-age;
        printf('SORRY YOU ARE UNDER AGE BUT YOU CAN CAST YOUR VOTE AFTER %d years',d);
    }
    else printf("INVALID INPUT");
}

