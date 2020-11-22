#include <stdio.h>
#include <math.h>

int JacobiMethod(int n, double A[n][n], double b[n], int xi[n], double eps, int MaxIt){
	
	int i, j, k = 0;
	double xk[n];
	double err;

	while (k < MaxIt, k++){
		for (i = 0; i < n; i++){
			
			double sum, diff;
			
			sum = b[i];
			for (j = 0; j < n; j++){
				sum = sum - A[i][j]*xi[j];
			}
			
			sum = sum + A[i][i]*xi[i];
			xk[i] = sum/A[i][i];
			
			diff = xk[i] - xi[i];
			err = err + diff*diff;
		}
		
		if (err < eps){
			break;
			
		} else{
			xi[i] = xk[i];
			
		}
		
	}
	
	return k;
}

void MatrixMult(int n, double A[n][n], double arr[n]){
	
	int resu[n];
	int i, k, sum;
	for(i=0;i<n;i++){
		
		sum=0;
		for(k=0;k<n;k++){
			
			sum+=A[i][k]*arr[k];	
		}
		
		resu[i]=sum;
	}

}
