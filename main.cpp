#include <iostream>

using namespace std;

//essential codes for manipulating tables/ matrixes
int main(){

    int size = 0;
    int arr[size][size];

    // input values into table
    for(int i = 0; i < size; i++){
	for(int j = 0; j < size; j++){
	    cout << "enter value: ";
	    cin >> arr[i][j];
	}
    }

    // draw the table
    for(int i = 0; i < size; i++){
	for(int j = 0; j < size; j++){
	    cout << arr[i][j] << "\t";
	}
	cout << endl;
    }
    return 0;
}
