#include <stdio.h>
#include <stdlib.h>
#include "calcMatrix.h" 


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int A[ROWS][COLS] = {//더하기 대상 행렬
	{2, 3, 0},
	{8, 9, 1},
	{7, 0, 5}};
	int B[ROWS][COLS] = {//더하기 대상 행렬
	{1, 0, 0},
	{0, 1, 0},
	{0, 0, 1}};
	int C[ROWS][COLS];
	addMatrix(A, B, C);
	printMatrix(C);
	
	return 0;
}
	

