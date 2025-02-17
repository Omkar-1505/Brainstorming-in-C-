#include<stdio.h>
//under process
void main(){
    int l,count;
    int arr[200];
    printf_s("ENTER THE LENGTH OF THE ARRAY\n");
    scanf("%d",&l);
    for(int i=0;i<l;i++){
        printf("PLS ENTER THE VALUE IN %d INDEX=",i);
        scanf("%d",&arr[i]);
    }
    //count value is always increasing
    for(int k=0;k<l;k++){
        for(int j=0;j<1;){
            count=0;
            if (arr[k]==arr[j]){
                count+=1;
                j++;
            }
            else{
                count=1;
                j++;
            }
        }
        printf("THE %d VALUE IS=%d\n",arr[k],count);
    }
}


