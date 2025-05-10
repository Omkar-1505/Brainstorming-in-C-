#include<stdio.h>
int check( int r[2][2]){
    int s;
    for(int c=0; c<3 ; c++){
        char k = r[c][0];
        char p = r[c][1];
        char z = r[c][2];
        if( k==p && p==z && k==z){
            s=1;
            break;
        }
        else{
            s=0;
        }
    }
    for(int d=0; d<3 ; d++){
        char k = r[0][d];
        char p = r[1][d];
        char z = r[2][d];
        if( k==p && p==z && k==z){
            s=1;
            break;
        }
        else{
            s=0;
        }
    }
    


    
}
void main(){
    printf(" HELLO JI! \n WELCOME TO OUR TIC TAC TOE GAME!!! \n");
    int r[2][2];
    char x= 'x';
    char o = 'o';
    int k = check();

}