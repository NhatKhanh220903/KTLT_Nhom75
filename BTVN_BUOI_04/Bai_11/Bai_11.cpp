#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

int chuoiToanSo(const char* chuoi) {
    for (int i = 0; i < strlen(chuoi); i++) {
        if (!isdigit(chuoi[i])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char mangChuoi[MAX_STRINGS][MAX_LENGTH];
    int soLuongChuoi;

    printf("Nhap so luong chuoi: ");
    scanf_s("%d", &soLuongChuoi);
    getchar();

    
    if (soLuongChuoi > MAX_STRINGS) {
        printf("So luong chuoi vuot qua gioi han cho phep.\n");
        return 1;
    }

    for (int i = 0; i < soLuongChuoi; i++) {
        printf("Nhap chuoi thu %d: ", i + 1);
        if (fgets(mangChuoi[i], MAX_LENGTH, stdin) != NULL) {
            
            mangChuoi[i][strcspn(mangChuoi[i], "\n")] = '\0';
        }
    }

    printf("Nhung chuoi chua toan ky tu so la:\n");
    for (int i = 0; i < soLuongChuoi; i++) {
        if (chuoiToanSo(mangChuoi[i])) {
            printf("%s\n", mangChuoi[i]);
        }
    }

    system("pause");
    return 0;
}
