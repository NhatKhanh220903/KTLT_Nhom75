#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


void xuatKyTu(const char* str) {
	const char* ptr = str;
	while (*ptr != '\0') {
		printf("%c ", *ptr);
		ptr++;
	}
	printf("\n");
}


void chuyenChuHoa(char* str) {
	char* ptr = str;
	while (*ptr != '\0') {
		*ptr = toupper(*ptr);
		ptr++;
	}
}


void chuyenKyTuDauChuHoa(char* str) {
	char* ptr = str;
	int isStartOfWord = 1;

	while (*ptr != '\0') {
		if (isStartOfWord && isalpha(*ptr)) {
			*ptr = toupper(*ptr);
			isStartOfWord = 0;
		}
		else if (isspace(*ptr)) {
			isStartOfWord = 1;
		}
		ptr++;
	}
}

int main() {
	char st[100];

	
	printf("Nhap chuoi: ");
	fgets(st, sizeof(st), stdin);

	
	st[strcspn(st, "\n")] = 0;

	
	printf("\nGia tri tung ky tu cua chuoi: ");
	xuatKyTu(st);

	
	chuyenChuHoa(st);
	printf("\nChuoi sau khi chuyen thanh chu hoa: %s\n", st);

	
	fgets(st, sizeof(st), stdin);
	st[strcspn(st, "\n")] = 0;

	
	chuyenKyTuDauChuHoa(st);
	printf("\nChuoi sau khi chuyen ky tu dau moi tu thanh chu hoa: %s\n", st);

		

	return 0;
}