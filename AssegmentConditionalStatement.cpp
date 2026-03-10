#include <iostream>
using namespace std;

//procedur for input data
void inputData(float &berat, float &tinggi) {
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

//BMI calculating BMI
float hitungBMI(float berat, float tinggi) {
    return berat / (tinggi * tinggi);
}

