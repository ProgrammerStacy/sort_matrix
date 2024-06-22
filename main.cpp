//#include <iostream>
#include "matrix.cpp"


int main()
{
    int n;
    cout << "\n Enter the number of rows and columns of the square matrix: ";
    cin >> n;
    Matrix m(n);
    m.inputmatr();
    cout << " Initial matrix:\n";
	m.outputmatr();
	m.sort_matr();
    m.obnulenie();
	cout << " Matrix with sorted rows:" << endl;
	m.outputmatr();
    return 0;

}