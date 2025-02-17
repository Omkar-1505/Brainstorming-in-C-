#include<stdio.h>
int main(){
    int k,l,m,max;
    printf_s("INPUT VALUES OF NUMBERS ACCORDINGLY\n");
    scanf("%d %d %d",&k,&l,&m);
    ((k > l) && (k > m)) ? max = k : ((l > m) ? max = l : max = k);
    printf("HENCE THE MAX AMONG THE 3 IS=%d",max);
    return 0;
}
