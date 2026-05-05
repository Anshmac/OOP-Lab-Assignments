#include <iostream>
using namespace std;

class Matrix {
    int mat[2][2];
public:
    Matrix() {
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                mat[i][j] = 0;
            }
        }
    }

    void setValues(int a, int b, int c, int d) {
        mat[0][0] = a;
        mat[0][1] = b;
        mat[1][0] = c;
        mat[1][1] = d;
    }

    void display() {
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend Matrix operator*(Matrix m1, Matrix m2);
};

Matrix operator*(Matrix m1, Matrix m2) {
    Matrix res;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                res.mat[i][j] += m1.mat[i][k] * m2.mat[k][j];
            }
        }
    }
    return res;
}

int main() {
    Matrix m1, m2, m3;
    
    m1.setValues(1, 2, 3, 4);
    m2.setValues(2, 0, 1, 2);
    
    m3 = m1 * m2;
    
    m3.display();
    
    return 0;
}