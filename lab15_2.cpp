#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double a[][N]){
	for(int i = 0; i < N; i++){
		cout << "Row " << i+1 << ": ";
		for(int j = 0; j < N; j++){
			cin >> a[i][j];
		}
	}	
}

void findLocalMax(const double b[][N], bool c[][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
			if(i == N-1 || i == 0 || j == 0 || j == N-1)
				c[i][j] = 0;
			else if(b[i][j] >= b[i+1][j] && b[i][j] >= b[i-1][j] && b[i][j] >= b[i][j+1] && b[i][j] >= b[i][j-1])
				c[i][j] = 1;
			else
				c[i][j] = 0;
        }
    }
}

void showMatrix(const bool d[][N]){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cout << d[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}
