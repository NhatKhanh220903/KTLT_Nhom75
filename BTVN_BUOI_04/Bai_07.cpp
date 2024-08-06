#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


bool kiemTraDoiXung(char str[]) {
	int length = strlen(str);
	for (int i = 0; i < length / 2; i++) {
		if (str[i] != str[length - 1 - i]) {
			return false; 
		}
	}
	return true; 
}

int main() {
	char str[100];

	
	printf("Nhap vao chuoi can kiem tra: ");
	if (fgets(str, sizeof(str), stdin) != NULL) {
		
		size_t len = strlen(str);
		if (len > 0 && str[len - 1] == '\n') {
			str[len - 1] = '\0';
		}
	}

	if (kiemTraDoiXung(str)) {
		printf("Chuoi '%s' la chuoi doi xung.\n", str);
	}
	else {
		printf("Chuoi '%s' khong phai la chuoi doi xung.\n", str);
	}

	system("pause");
	return 0;
}