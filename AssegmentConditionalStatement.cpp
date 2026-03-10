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

//Function to determine BMI status
string statusBMI(float bmi) {
    if (bmi < 18.5) {
        return "Berat Badan Kurang";
    }
    else if (bmi < 25) {
        return "Berat Badan Normal";
    }
    else if (bmi < 30) {
        return "Berat Badan Kelebihan";
    } 
    else {
        return "Obesitas";
    }
}

//Procedur for output data
int main() {
    float berat, tinggi, bmi;

    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    
    inputData(berat, tinggi);

    bmi = hitungBMI(berat, tinggi);

    cout << "\n--- Hasil ---" << endl;
    cout << "BMI Anda : " << bmi << endl;
    cout << "Status   : " << statusBMI(bmi) << endl;

    return 0;
}
