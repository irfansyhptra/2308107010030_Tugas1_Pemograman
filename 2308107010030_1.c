#include <stdio.h>

int main() {
    int pilih, biner = 0, octal = 0, desimal = 0, pangkat = 1;

    printf("Pilih operasi:\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Octal\n");
    printf("4. Bilangan Octal ke Desimal\n");
    printf("Masukkan pilihan anda: ");
    scanf("%d", &pilih);

    switch (pilih) {
        case 1:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &desimal);
            printf("Bilangan biner: ");
            while (desimal > 0) {
                biner = desimal % 2;
                printf("%d", biner);
                desimal /= 2;
                pangkat *= 10;
            }
            printf("\n");
            break;
        case 2:
            printf("Masukkan bilangan biner: ");
            scanf("%d", &biner);

            // biner ke desimal
            desimal = 0;
            pangkat = 1;
            while (biner > 0) {
                int angka = biner % 10;
                desimal += angka * pangkat;
                biner /= 10;
                pangkat *= 2;
            }

            printf("Desimal: %d\n", desimal);
            break;
        case 3:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &desimal);

            // desimal ke octal
            pangkat = 1;
            while (desimal > 0) {
                octal += desimal % 8* pangkat;
                desimal /= 8;
                pangkat *= 10;
            }

            printf("Octal: %d\n", octal);
            break;
        case 4:
            printf("Masukkan bilangan octal: ");
            scanf("%d", &octal);

            // octal ke desimal
            desimal = 0;
            pangkat = 1;
            while (octal > 0) {
                int angka = octal % 10;
                desimal += angka * pangkat;
                octal /= 10;
                pangkat *= 8;
            }

            printf("Desimal: %d\n", desimal);
            break;
        default:
            printf("Invalid pilih! Mohon masukan pilihan yang benar");
            break;
    }

    return 0;
}