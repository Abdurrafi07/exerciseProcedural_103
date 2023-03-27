#include <iostream>
#include <string>
using namespace std;

void statusKandidat(string Nama, float Matematika, float BahasaInggris) {
	float avg = (Matematika + BahasaInggris) / 2.0;
	if (avg >= 80.0) {
		cout << Nama << " Diterima Dengan Rata-rata Nilai " << avg << endl;
	}
	else if (avg >= 70.0) {
		cout << Nama << " Diterima Dengan Rata-rata Nilai " << avg << endl;
	}
	else {
		cout << Nama << " Ditolak Dengan Rata-rata Nilai" << avg << endl;
	}
}

int main() {
	string Nama[20];
	float Matematika[20], BahasaInggris[20];
	int Diterima = 0, Ditolak = 0;

	for (int i = 0; i < 20; i++) {
		cout << "\nKandidat " << i + 1 << endl;
		cout << "Nama: ";
		cin >> Nama[i];
		cout << "Nilai Matematika: ";
		cin >> Matematika[i];
		cout << "Nilai BahasaInggris: ";
		cin >> BahasaInggris[i];
		cout << endl;

		statusKandidat(Nama[i], Matematika[i], BahasaInggris[i]);

		if ((Matematika[i] + BahasaInggris[i]) / 2.0 >= 80) {
			Diterima++;
		}
		else {
			Ditolak++;
		}
	}

	cout << endl << "Jumlah Kandidat Yang Diterima: " << Diterima << endl;
	cout << "Jumlah Kandidat Yang Ditolak: " << Ditolak << endl;

	return 0;

}