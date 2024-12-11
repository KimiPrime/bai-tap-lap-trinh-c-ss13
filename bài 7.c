#include <stdio.h>

void creatAndPrint();

int main(){
	int n,m;
	printf("vui long nhap so hang: ");
	scanf("%d",&n);
	printf("vui long nhap so cot: ");
	scanf("%d",&m);
	creatAndPrint(n,m);
	return 0;
}

void creatAndPrint(int row,int col){
	int i=0,j,arr[row][col];
	while(i<row){
		j=0;
		while(j<col){
			printf("vui long nhap gia tri vi tri [%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
			j++;
		}
		i++;
	}
	i=0;
	while(i<row){
		j=0;
		while(j<col){
			printf("%d ",arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
