#include<stdio.h>
void main(){
    int l,sum;
    int arr[200];
    printf("ENTER THE LENGTH OF THE ARRAY \n");
    scanf("%d",&l);
    printf_s("ENTER THE VALUES IN THE LOOP\n");
    for(int i=0;i<l;i++){
        scanf("%d",&arr[i]);
    }
    for(int k=0;k<l;k++){
       sum=arr[k]+sum;
    }
    printf_s("%d",sum);
}
