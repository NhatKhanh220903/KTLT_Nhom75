#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int timViTriChuoi(char s1[], char s2[]) {
	char* pos = strstr(s1, s2); 
	if (pos != NULL) {
		return pos - s1; 
	}
	return -1; 
}

int main() {
    char s1[200], s2[100];

    printf("Nhap vao chuoi s1: ");
    if (fgets(s1, sizeof(s1), stdin) != NULL) {
        size_t len = strlen(s1);
        if (len > 0 && s1[len - 1] == '\n') {
            s1[len - 1] = '\0';
        }
    }

    printf("Nhap vao chuoi s2: ");
    if (fgets(s2, sizeof(s2), stdin) != NULL) {
        size_t len = strlen(s2);
        if (len > 0 && s2[len - 1] == '\n') {
            s2[len - 1] = '\0';
        }
    }

    int viTri = timViTriChuoi(s1, s2);

    if (viTri != -1) {
        printf("Chuoi s2 xuat hien tai vi tri %d trong chuoi s1.\n", viTri);
    }
    else {
        printf("Chuoi s2 khong xuat hien trong chuoi s1.\n");

        strcat_s(s1, s2);
        printf("Chuoi s1 sau khi noi s2 vao cuoi: %s\n", s1);
    }

    system("pause");
    return 0;
}