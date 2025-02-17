#include<stdio.h>
void main(){
	int x,y;
	printf("ENTER THE VALUE UPTO WHICH YOU WANT row and column respectively\n");
	scanf("%d", &x);
	scanf("%d", &y);
	int a[x-1][y-1];
	for (int i = 0;i < x;i++) {
		for (int j = 0;j < y;j++) {
            printf("ENTER THE VALUES RESPECTIVELY a[%d][%d]",i,j);
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0;i < x;i++) {
		for (int j = 0;j < y;j++) {
            printf("HENCE THE CONTENTS OF THE ARRAY ARE a[%d][%d]=%d",i,j,a[i][j]);
		}
	}//printf(a);
	//gets(a);
}
