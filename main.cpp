#include <iostream>
using namespace std;

int main(){
    int barisA, kolmA, barisB, kolmB;

    cout<< "Berapa jumlah baris Matriks A? "; cin>> barisA;
    cout<< "Berapa jumlah kolom Matriks A? " ;cin>> kolmA;
    cout<< "(Kolom Matriks A = Baris Matrik B)" << endl;
    cout<< "Berapa jumlah kolom Matriks B? "; cin>> kolmB;
    barisB = kolmA;

    int A[barisA][kolmA], B[barisB][kolmB], C[barisA][kolmB];

    cout<< "Masukkan Nilai Matriks A!" << endl;
    for (int b = 0; b < barisA; b++){
        for (int k = 0; k < kolmA; k++){
            cout<< "Matriks A (" << b+1 << "," << k+1 << ") = "; cin>> A[b][k];
        }
    }
    cout<< "Masukkan Nilai Matriks B!" << endl;
    for (int b = 0; b < barisB; b++) {
        for (int k = 0; k < kolmB; k++) {
            cout<< "Matriks B(" << b+1 << "," << k+1 << ") = "; cin>> B[b][k];
        }
    }
    for (int b = 0; b < barisA; b++) {
        for (int k = 0; k < kolmB; k++) {
            C[b][k] = 0;
        }
    }
    for (int b = 0; b < barisA; b++) {
        for (int k = 0; k < kolmB; k++) {
            for (int h = 0; h < kolmA; h++) {
                C[b][k] += A[b][h] * B[h][k];
            }
        }
    }
    cout<< "Hasil perkalian Matriks:" << endl;
    for (int b = 0; b < barisA; b++) {
        for (int k = 0; k < kolmB; k++){
            cout<< C[b][k] << " ";
        }
        cout<< endl;
    }
    return 0;
}