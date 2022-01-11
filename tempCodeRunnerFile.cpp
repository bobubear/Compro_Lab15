void findLocalMax(const double A[][N], bool B[][N]){
	for(int i = 0; i < N; i++){
		for(int j = 0; i < N; j++){
			if(i == N-1 || i == 0 || j == N-1 || j == 0)
				B[i][j] = 0;
			else if(A[i+1][j+1] >= A[i+1][j] && A[i+1][j+1] >= A[i][j+1] && A[i+1][j+1] >= A[i+2][j+1] && A[i+1][j+1] >= A[i+1][j+2])
				B[i+1][j+1] = 1;
			else
				B[i+1][j+1] = 0;
		}
	}
}
