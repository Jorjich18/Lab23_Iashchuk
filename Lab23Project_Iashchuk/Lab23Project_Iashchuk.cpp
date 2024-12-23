#include "E:/Lab23_Iashchuk/Lab23LIB_Iashchuk/LIBHeader.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
using namespace Matrix;

int main() {
    // Выделение памяти
    matr a; vect x;
    MyMatrixFuncs::elem_Matr(&a);
    cout << "Matrix:\n" << fixed;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++)
            cout << setprecision(2) << a[i][j] << "\t";
        cout << endl;
    }
    MyMatrixFuncs::elem_Vect(&a, &x);
    cout << "\nVector:\n";
    for (int i = 0; i < n; i++)
        cout << setprecision(2) << x[i] << "\t";
    cout << endl;
    double result = MyMatrixFuncs::product(&a);
    cout << "\nProduct: " << result << endl;
    cin.get();
    return 0;
}