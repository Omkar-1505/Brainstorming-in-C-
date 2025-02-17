#include <stdio.h>
void main() {
	int r,d;
	printf("ENTER THE RESPECTIVE ROW AND COLUMN NUMBER:");
	scanf_s("%d %d", &r &d);
	int matrix[r][d];
	printf("please enter the values");
	for (int i = 0;i < r;i++) {
		for (int j = 0;j < d;j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("hence the given matrix is as follows");
	for (int i = 0;i < r;i++) {
		for (int j = 0;j < d;j++) {
			printf("%d", matrix[i][j]);
		}
	}

}
