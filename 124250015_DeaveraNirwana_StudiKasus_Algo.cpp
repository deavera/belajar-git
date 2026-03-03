#include <iostream>
using namespace std;

// BUBBLE SORT (Ascending)
void bubbleSort(string array[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				// Menukar posisi keduanya
				string temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				}
			}
		}
	} 


// QUICK SORT (Descending)
void quickSort(string array[], int awal, int akhir) {
	int low = awal, high = akhir;
	string pivot = array[(awal + akhir) / 2];
	
	do {
		while (array[low] > pivot)
		low++;
		
		while (array[high] < pivot)
		high--;
		
		if (low <= high) {
			swap(array[low], array[high]);
			low++;
			high--;
			}
		
		} while (low <= high);
		
		if (awal < high)
			quickSort(array, awal, high);
		if (low < akhir)
			quickSort(array, low, akhir);
	}
	
	

int main() {
	int n;
	
	cout << "===== Daftar Mahasiswa =====" << endl;
	cout << "\nJumlah mahasiswa: ";
	cin >> n;
	cin.ignore();
	
	string nama[n];
	
	cout << "\nMasukkan nama mahasiswa " << endl;
	for (int i = 0; i < n; i++) {
		cout << "Mahasiswa ke-" << i + 1 << ": ";
		getline(cin, nama[i]);
	}
	
	
	// Data sebelum urut
	cout << "\nData sebelum diurutkan: " << endl;
	for (int i = 0; i < n; i++) {
		cout << nama[i] << " " << endl;
	}
	
	// Array quick sort
	string namaQuick[n];
	for (int i = 0; i < n; i++) {
		namaQuick[i] = nama[i];
	}
	
	
	// BUBBLE SORT (Ascending)
	cout << "\n--------- Bubble Sort (Ascending) ---------" << endl;
	bubbleSort(nama, n);
	cout << "Data Bubble Sort (Ascending): " << endl;
	for (int i = 0; i < n; i++) {
		cout << nama[i] << " " << endl;
	}
	

	// QUICK SORT (Descending)
	cout << "\n--------- Quick Sort (Descending) ---------" << endl;
	quickSort(namaQuick, 0, n - 1);
	cout << "Data Quick Sort (Descending): " << endl;
	for (int i = 0; i < n; i++) {
		cout << namaQuick[i] << " " << endl;
	}
}
