#include <iostream>
using namespace std;

void Cau_1(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100;
	}
}

void Cau_2(int a[], int& n) {
	for (int i = 0; i < n;i++) {
		a[i] = (rand() % 50) * 2;
	}
}

void Cau_3(int a[], int& n, int x) {
	int find = -1;
	for (int i = 0; i < n;i++) {
		if (a[i] == x) {
			find = i;
		}
	}
	if (find != -1) {
		cout << "x o vi tri: " << find;
	}
	else {
		cout << "x khong co trong mang";
	}
}

void Cau_4(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n;j++) {
			if (a[i] < a[j]) {
				swap(a[j], a[i]);
			}
		}
	}
}

void Cau_5(int a[], int& n, int x) {
	int left = 0;
	int right = n - 1;
	int find = -1;
	for (int i = left; i <= right; i++) {
		int mid = (left + right) / 2;
		if (a[mid] == x) {
			find = mid;
			break;
		}
		else if (a[mid] > x) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	if (find != -1) {
		cout << "x o vi tri thu: " << find << endl;
	}
	else {
		cout << "x khong co trong mang " << endl;
	}
}

void Xuatmang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Cac phan tu trong mang la: " << a[i] << endl;
	}
}

int partition(int arr[], int low, int high)
{


	int pivot = arr[high];


	int i = (low - 1);

	for (int j = low;j <= high - 1;j++)
	{

		if (arr[j] < pivot)
		{

			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

void Cau_7(int arr[], int low, int high)
{

	if (low < high)
	{

		int pi = partition(arr, low, high);


		Cau_7(arr, low, pi - 1);
		Cau_7(arr, pi + 1, high);
	}
}

void Cau_6(int a[], int& n) {
	for (int i = 0; i < n - 1; i++) {
		int minPosition = i;
		for (int j = i + 1; j < n; j++) {
			if (a[minPosition] > a[j]) {
				minPosition = j;
			}
		}
		swap(a[i], a[minPosition]);
	}
}

int main() {
	int n;
	int a[100];
	cout << "Nhap so luong: ";
	cin >> n;
	Cau_1(a, n);
	Xuatmang(a, n);
	Cau_7(a, 0, n - 1);
	cout << "Mang sau khi sap xep la" << endl;
	Xuatmang(a, n);
	//Cau_4(a, n);
	//cout << "Mang sau khi da sap xep" << endl;
	//Xuatmang(a, n);
	//Cau_5(a, n, 24);
	//cout << "Mang sau khi sap xep la" << endl;
	//Xuatmang(a, n);
	return 0;
}