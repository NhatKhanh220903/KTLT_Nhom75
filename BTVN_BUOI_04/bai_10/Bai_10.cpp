#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void xoaKyTu(char* str, char c) {
    int len = strlen(str);
    int j = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
}

int main() {
    char str[100], kyTuXoa;

    
    printf("Nhap chuoi bat ky: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
    }

    
    printf("Nhap ky tu muon xoa: ");
    scanf_s(" %c", &kyTuXoa); 

    
    xoaKyTu(str, kyTuXoa);

    
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", kyTuXoa, str);

    system("pause");
    return 0;
}
