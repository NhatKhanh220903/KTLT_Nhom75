#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double Cau9_1_DQ(int n)
{
	if (n == 1) {
		return 1.0 / (1 * 2 * 3);
	}
	else {
		return 1.0 / (n * (n + 1) * (n + 2)) + Cau9_1_DQ(n - 1);
	}
}
double Cau9_1_KDQ(int n)
{
	double sum = 0.0;
	for (int i = 1; i <= n; i++) {
		sum += 1.0 / (i * (i + 1) * (i + 2));
	}
	return sum;
}
double Cau9_2_DQ(int n)
{
	if (n == 1) {
		return 1;
	}
	else {
		return n * n + Cau9_2_DQ(n - 1);
	}
}
double Cau9_2_KDQ(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i * i;
	}
	return sum;
}
double Cau9_3_DQ(int n)
{
	if (n == 1) {
		return 1;
	}
	else {
		int sum = n * (n + 1) / 2;
		return sum + Cau9_3_DQ(n - 1);
	}
}
double Cau9_3_KDQ(int n)
{
	int sum = 0;
	for (int k = 1; k <= n; k++) {
		sum += k * (k + 1) / 2;
	}
	return sum;
}
long long giaiThua(int x)
{
	if (x == 0 || x == 1) {
		return 1;
	}
	else {
		long long tich = 1;
		for (int i = 2; i <= x; i++) {
			tich *= i;
		}
		return tich;
	}
}
double Cau9_4_DQ(int n)
{
	if (n == 1) {
		return -((1.0 + 2.0) / giaiThua(2));
	}
	else {
		int coSo = (n % 2 == 0) ? 1 : -1;
		return coSo * ((2.0 * n - 1 + 2.0 * n) / giaiThua(2 * n)) + Cau9_4_DQ(n - 1);
	}
}
double Cau9_4_KDQ(int n)
{
	double sum = 0.0;
	for (int k = 1; k <= n; k++) {
		int coSo = (k % 2 == 0) ? 1 : -1;
		sum += coSo * ((2.0 * k - 1 + 2.0 * k) / giaiThua(2 * k));
	}
	return sum;
}
unsigned long long Fibonacci(int x)
{
	if (x == 0) return 0;
	if (x == 1) return 1;
	unsigned long long a = 0, b = 1, c;
	for (int i = 2; i <= x; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}
unsigned long long fibonacciThuX(int x) {
	if (x == 0) return 0;
	if (x == 1) return 1;
	return fibonacciThuX(x - 1) + fibonacciThuX(x - 2);
}

void cau10(int m, int n) {
	int i = 0;
	unsigned long long f;

	while (true) {
		f = Fibonacci(i);
		if (f >= m) break;
		i++;
	}
	while (f <= n) {
		printf("%llu ", f);
		i++;
		f = Fibonacci(i);
	}
	printf("\n");
}
unsigned long long Cau11_DQ (int n) {
	int i = 0;
	unsigned long long fib = fibonacciThuX(i);
	while (fib < n) {
		i++;
		fib = fibonacciThuX(i);
	}
	return fibonacciThuX(i - 1);
}
unsigned long long Cau11_KDQ(int n)
{
	if (n <= 1) return 0;
	unsigned long long a = 0, b = 1, c = 1;
	while (c < n) {
		a = b;
		b = c;
		c = a + b;
	}
	return b;
}
int Cau12_DayX(int n);
int Cau12_DayY(int n) {
	if (n == 0) return 0;
	return 3 * Cau12_DayX(n - 1) + 2 * Cau12_DayY(n - 1);
}

int Cau12_DayX(int n) {
	if (n == 0) return 1;
	return Cau12_DayX(n - 1) + Cau12_DayY(n - 1);
}
unsigned long long Cau13(int n, unsigned long long a, unsigned long long q) {
	if (n == 1) {
		return a;
	}
	else {
		return q * Cau13(n - 1, a, q);
	}
}
int Cau14(int n) {
	if (n < 6) {
		return n;
	}
	else {
		return Cau14(n - 5) + Cau14(n - 4) + Cau14(n - 3) + Cau14(n - 2) + Cau14(n - 1);
	}
}

int Cau15_PhanTong(int n) {
	if (n == 1) return 0;
	return Cau15(n - 1) + Cau15_PhanTong(n - 1);
}

int Cau15(int n) {
    if (n == 1) return 1;
    return n * Cau15_PhanTong(n);
}

int Cau16(int n) {
	if (n == 1) return 1;
	if (n == 2) return 2;
	if (n == 3) return 3;
	return Cau16(n - 1) + 2 * Cau16(n - 2) + 3 * Cau16(n - 3);
}

int Cau17(int n) {
	if (n == 1) return 1;
	if (n == 2) return 1;
	return Cau17(n - 1) + (n - 1) * Cau17(n - 2);
}

int Cau18(int n) {
	if (n == 0) return 1;
	if (n == 1) return 2;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (n - i) * Cau18(i);
	}
	return sum;
}

int Cau19(int n) {
	if (n == 1) return 1;

	if (n % 2 == 0) {
		int k = n / 2;
		return k + Cau19(k) + 2;
	}
	else {
		int k = (n - 1) / 2;
		return k * k + Cau19(k) * Cau19(k + 1) + 1;
	}
}
int main()
{
	/*int n;
	do {
		printf("Moi nhap so giai thua can tinh va lon hon 0: ");
		scanf("%d", &n);
	} while (n < 0);*/
	return 0;
}