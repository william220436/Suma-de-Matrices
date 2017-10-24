#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(){
	int A[3][3], B[3][3], C[3][3];
	printf("------------Matriz A------------\n");
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Dame un numero: ");
			scanf("%i", &A[i][j]);
		}
	}
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%i ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("------------Matriz B------------\n");
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Dame un numero: ");
			scanf("%i", &B[i][j]);
		}
	}	

	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%i ", B[i][j]);
		}
		printf("\n");
	}	
	printf("\n");
	printf("------------Matriz C-----------\n");
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			C[i][j]=A[i][j]+B[i][j];
		}
	}	

	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%i ", C[i][j]);
		}
		printf("\n");
	}	
	printf("\n");
	
	return 0;
}
