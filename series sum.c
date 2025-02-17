#include<stdio.h>
#include<math.h>
int fact(int k){
    int fact;
    for(int i=1;i<=k;i++){
        fact=i*fact;
    }
    return fact;
}
void main(){
    int n;
    char m[700000000];
    printf("ENTER THE VALUE UPTO WHICH YOU WANT TO PRINT THE SERIES");
    scanf("%d",&n);
    for(int i=0;i<n+1;i++){
        m=(xpow(i)/fact(i))+m;
        printf(m)
    }
}
