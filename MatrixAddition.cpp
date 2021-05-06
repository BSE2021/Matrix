// MatrixAddition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int i, j, a[2][2], b[2][2], c[2][2];//resultant matrix is stored in c

	//input for matrix A
	cout << "Please enter 4 integer values for matrix A \n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cin >> a[i][j];
		}
	}
	//input for matrix B
	cout << "Please enter 4 integer values for matrix B\n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cin >> b[i][j];
		}
	}

	//output for matrix A
	cout << "matrix A\n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << a[i][j] <<"\t";
		}
		cout << "\n";
	}
	//output for matrix B
	cout << "matrix B\n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << b[i][j] << "\t";
		}
		cout << "\n";
	}

	//Matrix Addition: Resultant Matrix C
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}		
	}

	//output matrix C
	cout << "Addition of matrices A & B is matrix C\n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << c[i][j] << "\t";
		}
		cout << "\n";
	}
}