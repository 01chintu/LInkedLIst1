#include <iostream>
using namespace std;

void printArray(int arr[][4], int row, int col){
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void colwiseprint(int arr[][4], int row, int col) {
	for(int i=0; i<col; i++) {
		for(int j=0; j<row; j++) {
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
}

bool findTarget(int arr[][4], int row, int col, int target) {
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			if(arr[i][j] == target) {
				return true;
			}
		} 
    }
    return false;
}

int rowSum(int arr[][4], int row, int col) {
	for(int i=0; i<row; i++) {
		int sum = 0;
		for(int j=0; j<col; j++) {
			sum = sum + arr[i][j];
		}
		cout << sum << endl;
	}
}

int findMaxele(int arr[][4], int row, int col) {
	int maxAns = INT_MIN;
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			if(arr[i][j] > maxAns) {
				maxAns = arr[i][j];
			}
		}
	}
	return maxAns;
}

void Transpose(int arr[][4], int row, int col) {
	for(int i=0; i<row; i++) {
		for(int j=i; j<col; j++) {
			swap(arr[i][j], arr[j][i]);
		}
	}
}
int main() {
	
	int arr[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	
	int row = 4;
	int col = 4;
	//rowSum(arr, row, col);
	cout << endl << "Print before Transpose " << endl;
	printArray(arr, row, col);
	cout << endl << "Doing Transpose " << endl;
	Transpose(arr, row, col);
	cout << endl << "Print After Transpose " << endl;
	printArray(arr, row, col);
//	int target = 17;
//	printArray(arr, row, col);
//	cout << endl;
//	colwiseprint(arr, row, col);
//    cout << "find '1' or not find ele '0' " << findTarget(arr, row, col, target) << endl;
//    cout << "Max ele " << findMaxele(arr, row, col) << endl;
	return 0;
}
