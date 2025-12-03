#include <iostream>
#include <iomanip>   
using namespace std;

int main() {
    string nama = "Muhammad Rizki Desca Firmansyah";
    string nim = "25104410041";
    string prodi = "Teknik Informatika-1B";
    string tugas = "Tugas Praktikum 4";

    cout << "\nNama  : " << nama << endl;
    cout << "NIM   : " << nim << endl;
    cout << "Prodi : " << prodi << endl;
    cout << "Tugas : " << tugas << endl << endl;

    cout << "\n=========================================\n";
    cout << "==== Program Perkalian Matriks 4 x 4 ====\n";
    cout << "=========================================\n";

    int A[4][4] = {
        {1, 0, 2, 0},
        {0, 1, 0, 1},
        {2, 0, 1, 0},
        {0, 2, 0, 1}
    };

    int B[4][4] = {
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {2, 2, 2, 2}
    };

    int C[4][4];

    cout << "\nMatriks A:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << setw(4) << A[i][j];  
        }
        cout << endl;
    }

    cout << "\nMatriks B:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << setw(4) << B[i][j];  
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\n=========================================\n";
    cout << "Matriks Hasil Perkalian (A x B):\n";

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << setw(4) << C[i][j];   
        }
        cout << endl;
    }

    return 0;
}