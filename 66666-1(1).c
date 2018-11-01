#include "calcMatrix.h" 

	int C[ROWS][COLS]; //µ¡¼À °á°ú Çà·Ä 
	void printMatrix(int A[][COLS]) {
		int i, j;
		for (i=0; i<ROWS; i++){
			for (j=0; j<COLS; j++){
				printf("%d", A[i][j]);
			}
		printf("\n");
		}
		return;
}
	int addMatrix(int A[][COLS], int B[][COLS], int C[][COLS])
	{
		int i, j;
		
		for (i=0; i<ROWS; i++) {
			for (j=0; j<COLS; j++) {
				C[i][j] = A[i][j] + B[i][j];
			}
		}
	
	
	return 1;
}
