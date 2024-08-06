#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void chenChuoi(char* str, size_t sizeStr, char* strInsert, int vt) {
    int lenStr = strlen(str);
    int lenStrInsert = strlen(strInsert);

    char strKetQua[200]; 

    
    strncpy_s(strKetQua, sizeof(strKetQua), str, vt);
    strKetQua[vt] = '\0';

    
    strcat_s(strKetQua, sizeof(strKetQua), strInsert);
    strcat_s(strKetQua, sizeof(strKetQua), str + vt);

    
    strcpy_s(str, sizeStr, strKetQua);
}

int main() {
    char str[100], strInsert[100];
    int vt;

    printf("Nhap chuoi str: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
    }

    printf("Nhap chuoi can chen strInsert: ");
    if (fgets(strInsert, sizeof(strInsert), stdin) != NULL) {
        size_t len = strlen(strInsert);
        if (len > 0 && strInsert[len - 1] == '\n') {
            strInsert[len - 1] = '\0';
        }
    }

    printf("Nhap vi tri can chen vt: ");
    scanf_s("%d", &vt);

    if (vt < 0 || vt > strlen(str)) {
        printf("Vi tri can chen khong hop le.\n");
    }
    else {
        chenChuoi(str, sizeof(str), strInsert, vt);
        printf("Chuoi sau khi chen: %s\n", str);
    }

    system("pause");
    return 0;
}
