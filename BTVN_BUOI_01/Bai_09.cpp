#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void tinhToan(int* pa, int* pb, int* tong, int* hieu, int* tich, float* thuong) {
	*tong = *pa + *pb;
	*hieu = *pa - *pb;
	*tich = *pa * *pb;
	*thuong = (float)*pa / *pb;
}

int main() {
	int a, b;
	int tong, hieu, tich;
	float thuong;

	
	printf("Nhap so thu nhat (a): ");
	scanf_s("%d", &a);
	printf("Nhap so thu hai (b): ");
	scanf_s("%d", &b);

	
	int* pa = &a;
	int* pb = &b;

	
	tinhToan(pa, pb, &tong, &hieu, &tich, &thuong);

	
	printf("\nKet qua tinh toan:\n");
	printf("Tong: %d, dia chi: %p\n", tong, (void*)&tong);
	printf("Hieu: %d, dia chi: %p\n", hieu, (void*)&hieu);
	printf("Tich: %d, dia chi: %p\n", tich, (void*)&tich);
	printf("Thuong: %.2f, dia chi: %p\n", thuong, (void*)&thuong);

	return 0;
}