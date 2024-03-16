#include <stdio.h>

int main() {
    int year;
    char input[5];

    while (1) {
        printf("Masukkan tahun yang ingin di cek : ");
        scanf("%s", input);

        // Mengecek panjang input
        int length = 0;
        while (input[length] != '\0') {
            length++;
        }

        // Jika panjang input tidak tepat 4 digit
        if (length != 4) {
            printf("Tahun harus terdiri dari 4 angka. Mohon masukkan tahun yang valid.\n");
            continue;
        }

        // Mengecek apakah semua karakter merupakan digit
        int isValid = 1;
        for (int i = 0; i < length; i++) {
            if (input[i] < '0' || input[i] > '9') {
                isValid = 0;
                break;
            }
        }

        if (!isValid) {
            printf("Input bukan bilangan. Mohon masukkan tahun yang valid.\n");
            continue;
        }

        // Mengonversi input ke integer
        sscanf(input, "%d", &year);

        // Jika tahun kabisat
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d adalah tahun kabisat.\n", year);
        } else {
            printf("%d bukan tahun kabisat.\n", year);
        }

        break;
    }

    return 0;
}
