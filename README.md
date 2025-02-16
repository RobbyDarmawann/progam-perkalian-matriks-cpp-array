# Program Perkalian Matriks

Program C++ ini mengalikan dua matriks \( A \) dan \( B \) berdasarkan dimensi dan nilai yang ditentukan oleh pengguna, dengan memastikan bahwa jumlah kolom pada matriks \( A \) sama dengan jumlah baris pada matriks \( B \).

## Fitur
- Mendukung input dinamis untuk dimensi dan nilai matriks.
- Memastikan aturan perkalian matriks (kolom \( A \) = baris \( B \)).
- Menghitung dan menampilkan hasil matriks \( C \).

## Persyaratan
- Kompiler C++ (contoh: `g++`)

## Cara Menjalankan Program
1. Clone repository atau salin programnya.
    ```bash
    https://github.com/RobbyDarmawann/progam-perkalian-matriks-cpp-array.git
    ```
2. Kompilasi program.
    ```bash
    g++ main.cpp -o main
    ```
3. Jalankan program yang sudah dikompilasi.
    ```bash
    ./main
    ```

## Input
1. Jumlah baris dan kolom untuk matriks \( A \).
2. Jumlah kolom untuk matriks \( B \) (baris matriks \( B \) akan otomatis diatur sesuai dengan kolom matriks \( A \)).
3. Nilai untuk matriks \( A \) dan matriks \( B \).

## Contoh

Untuk input berikut:
```
Baris Matriks A: 2
Kolom Matriks A: 3
Kolom Matriks B: 2

Input Matriks A:
1 2 3
4 5 6

Input Matriks B:
7 8
9 10
11 12
```

Maka outputnya adalah:
```
Hasil perkalian Matriks:
58 64
139 154
```

## Kode Program

```cpp
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
```
