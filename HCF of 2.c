#include<stdio.h>
//largest=o,smallest=l
void main(){
    int o,t,l;
    int hcf=1;
    printf("PLS ENTER THE TWO NATURAL VALUES RESPECTIVELY\n");
    scanf("%d %d",&o,&t);
    //check
    if(o<t){
        l=o;
        o=t;
    }
    else l=t;
    for(int i=0;i<(l/2)+1;){
       if(l%i==0 && o%i==0){
            hcf=i;
            printf("FACTORS ARE=%d",i);
            i++;
        }
        else i++;
    }
    printf("HENCE THE HCF BETWEEN THE TWO NUMBER SYSTEM IS=%d",hcf);
}
