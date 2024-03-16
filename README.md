Tugas Pemograman soal 1 : Melakukan Konversi Bilangan
    
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

Output dari kode program diatas adalah untuk menghitung konversi dari :
a. Bilangan Desimal ke Biner 
b. Bilangan Biner ke Desimal
c. Bilangan Desimal ke Octal
d. Bilangan Octal ke Desimal

Berikut penjelasan program tersebut :
    
    #include <stdio.h>
    int main() {
    int pilih, biner = 0, octal = 0, desimal = 0, pangkat = 1;
Ini adalah fungsi main() yang merupakan titik masuk utama untuk program C. Variabel pilih digunakan untuk menyimpan pilihan pengguna, sementara biner, octal, dan desimal adalah variabel untuk menyimpan bilangan dalam format biner, oktal, dan desimal. Variabel pangkat digunakan dalam proses konversi.

      printf("Pilih operasi:\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Octal\n");
    printf("4. Bilangan Octal ke Desimal\n");
    printf("Masukkan pilihan anda: ");
    scanf("%d", &pilih);
Program mencetak menu operasi yang tersedia dan meminta pengguna untuk memilih satu. Pilihan tersebut disimpan dalam variabel pilih menggunakan scanf.

        switch (pilih) {
Ini adalah awal dari struktur pengkondisian switch-case. Program akan melakukan operasi sesuai dengan nilai yang dimasukkan oleh pengguna.

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
Jika pengguna memilih 1, program akan meminta input bilangan desimal, kemudian melakukan konversi dari desimal ke biner menggunakan proses pembagian dan modulo.
Saat program dimulai, pengguna diminta untuk memasukkan bilangan desimal. Setelah bilangan dimasukkan, program memulai proses konversi.
Pertama, program menggunakan sebuah loop untuk membagi bilangan desimal dengan 2 dan menyimpan sisa pembagian (1 atau 0) sebagai digit biner. Ini dilakukan sampai bilangan desimal menjadi 0. Setiap sisa pembagian tersebut kemudian dicetak satu per satu ke layar sebagai representasi biner.
Selama proses tersebut, sebuah variabel penampung 'pangkat' digunakan untuk menentukan posisi digit biner yang benar. Setiap digit biner yang dihasilkan ditempatkan di posisi yang tepat menggunakan pengalian 'pangkat' dengan 10.
Misalnya, jika pengguna memasukkan bilangan desimal 13, prosesnya adalah sebagai berikut:
13 dibagi dengan 2, hasilnya adalah 6 dengan sisa 1 (digit terakhir).
Digit terakhir, yaitu 1, dicetak.
6 dibagi dengan 2, hasilnya adalah 3 dengan sisa 0 (digit kedua dari kanan).
Digit kedua, yaitu 0, dicetak.
3 dibagi dengan 2, hasilnya adalah 1 dengan sisa 1 (digit ketiga dari kanan).
Digit ketiga, yaitu 1, dicetak.
1 dibagi dengan 2, hasilnya adalah 0 dengan sisa 1 (digit paling kiri).
Digit paling kiri, yaitu 1, dicetak.
Setelah selesai, program mencetak karakter baru untuk memisahkan output dari pesan input dan memastikan tampilan yang rapi. Kemudian program berakhir.

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
Setelah pengguna memasukkan bilangan biner, program memulai proses konversi.
Proses konversi dimulai dengan menginisialisasi variabel desimal dan pangkat. Variabel desimal akan menyimpan hasil konversi akhir ke dalam bentuk bilangan desimal, sementara variabel pangkat akan digunakan untuk menentukan pangkat dari bilangan biner yang sedang diolah.
Program menggunakan sebuah loop while untuk melakukan konversi. Selama iterasi loop, program mengambil digit terakhir dari bilangan biner menggunakan operasi modulo dengan basis 10 (biner % 10). Digit tersebut kemudian dikalikan dengan pangkat dan ditambahkan ke dalam variabel desimal. Setelah itu, digit terakhir tersebut dihapus dari bilangan biner dengan membagi biner dengan 10. pangkat juga diperbarui untuk mengalikan dengan 2 di setiap iterasi.
Proses ini berulang sampai semua digit biner telah diolah (sampai biner menjadi 0). Setelah selesai, program mencetak hasil konversi bilangan biner ke bilangan desimal dengan menggunakan pernyataan printf.
Sebagai contoh, jika pengguna memasukkan bilangan biner 1011, proses konversinya adalah sebagai berikut:
pertama: digit terakhir adalah 1, dijumlahkan ke desimal (sekarang 1), kemudian biner dibagi 10 (hasilnya 101), dan pangkat menjadi 2.
kedua: digit terakhir adalah 1, dijumlahkan ke desimal (sekarang 3), kemudian biner dibagi 10 (hasilnya 10), dan pangkat menjadi 4.
ketiga: digit terakhir adalah 0, tidak ada yang ditambahkan ke desimal, biner dibagi 10 (hasilnya 1), dan pangkat menjadi 8.
keempat: digit terakhir adalah 1, dijumlahkan ke desimal (sekarang 11), kemudian biner dibagi 10 (hasilnya 0), dan pangkat menjadi 16.
Setelah loop selesai, program mencetak hasil konversi, yaitu "Desimal: 11"

              case 3:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &desimal);

            // desimal ke octal
            pangkat = 1;
            while (desimal > 0) {
                octal += desimal % 8 * pangkat;
                desimal /= 8;
                pangkat *= 10;
            }

            printf("Octal: %d\n", octal);
            break;
program akan meminta input bilangan desimal. Setelah pengguna memasukkan bilangan desimal, program akan memulai proses konversi.
Proses konversi dimulai dengan menginisialisasi variabel octal dan pangkat. Variabel octal akan menyimpan hasil konversi akhir ke dalam bentuk bilangan oktal, sementara variabel pangkat akan digunakan untuk menentukan pangkat dari bilangan oktal yang sedang diolah.
Program menggunakan sebuah loop while untuk melakukan konversi. Selama iterasi loop, program mengambil digit terakhir dari bilangan desimal menggunakan operasi modulo dengan basis 8 (desimal % 8). Digit tersebut kemudian dikalikan dengan pangkat dan ditambahkan ke dalam variabel octal. Setelah itu, digit terakhir tersebut dihapus dari bilangan desimal dengan membagi desimal dengan 8. pangkat juga diperbarui untuk mengalikan dengan 10 di setiap iterasi.
Proses ini berulang sampai semua digit desimal telah diolah (sampai desimal menjadi 0). Setelah selesai, program mencetak hasil konversi bilangan desimal ke bilangan oktal dengan menggunakan pernyataan printf.
Sebagai contoh, jika pengguna memasukkan bilangan desimal 45, proses konversinya adalah sebagai berikut:
pertama: digit terakhir adalah 5, dikalikan dengan 1 (pangkat awal), dan ditambahkan ke octal (sekarang 5).
kedua: digit berikutnya adalah 4, dikalikan dengan 10 (pangkat menjadi 10), dan ditambahkan ke octal (sekarang 45).
Karena tidak ada digit lagi, loop berakhir.
Hasil konversi, yaitu 45 dalam oktal, dicetak ke layar sebagai "Octal: 55".

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
program akan meminta input bilangan oktal. Setelah pengguna memasukkan bilangan oktal, program akan memulai proses konversi.
Proses konversi dimulai dengan menginisialisasi variabel desimal dan pangkat. Variabel desimal akan menyimpan hasil konversi akhir ke dalam bentuk bilangan desimal, sementara variabel pangkat akan digunakan untuk menentukan pangkat dari bilangan oktal yang sedang diolah.
Program menggunakan sebuah loop while untuk melakukan konversi. Selama iterasi loop, program mengambil digit terakhir dari bilangan oktal menggunakan operasi modulo dengan basis 10 (octal % 10). Digit tersebut kemudian dikalikan dengan pangkat dan ditambahkan ke dalam variabel desimal. Setelah itu, digit terakhir tersebut dihapus dari bilangan oktal dengan membagi octal dengan 10. pangkat juga diperbarui untuk mengalikan dengan 8 di setiap iterasi.
Proses ini berulang sampai semua digit oktal telah diolah (sampai octal menjadi 0). Setelah selesai, program mencetak hasil konversi bilangan oktal ke bilangan desimal dengan menggunakan pernyataan printf.
Sebagai contoh, jika pengguna memasukkan bilangan oktal 55, proses konversinya adalah sebagai berikut:
pertama: digit terakhir adalah 5, dikalikan dengan 1 (pangkat awal), dan ditambahkan ke desimal (sekarang 5).
kedua: digit berikutnya adalah 5, dikalikan dengan 8 (pangkat menjadi 8), dan ditambahkan ke desimal (sekarang 45).
Karena tidak ada digit lagi, loop berakhir.
Hasil konversi, yaitu 55 dalam desimal, dicetak ke layar sebagai "Desimal: 45".

            default:
            printf("Invalid pilih! Mohon masukan pilihan yang benar");
            break;
Jika pengguna memasukkan pilihan yang tidak valid, program akan mencetak pesan kesalahan.

Secara singkat berikut cara kerja program ini :
Program dimulai dengan mendeklarasikan variabel pilih untuk menyimpan pilihan operasi yang dimasukkan oleh user, serta variabel-variabel lain yang diperlukan untuk menyimpan bilangan biner, oktal, dan desimal, serta variabel pangkat yang digunakan dalam proses konversi.
Program menampilkan menu operasi kepada user dan meminta user untuk memasukkan pilihan operasi.
Setelah user memasukkan pilihan, program menggunakan switch case untuk mengeksekusi kode sesuai dengan pilihan pengguna.
Bergantung pada pilihan yang dimasukkan user, program meminta input yang sesuai (bilangan desimal, biner, atau oktal).
Program kemudian menjalankan algoritma konversi yang sesuai, menggunakan loop while untuk melakukan konversi secara iteratif.
Setelah konversi selesai dilakukan, program mencetak hasil konversi sesuai dengan jenis operasi yang dipilih.
Jika pengguna memasukkan pilihan yang tidak valid, program akan mencetak pesan kesalahan.

#Tugas Pemograman soal 2 : Mengecek Tahun Kabisat

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
    
kode tersebut ketika di jalankan akan mencari tau apakah suatu tahun merupakan tahun kabisat atau bukan dengan memperhatikan syarat yaitu :
a. Jika inputan user hanya terdiri dari 3 angka, maka program akan meminta user untuk menginput kembali tahunnya.
b. Jika inputan user lebih dari 4 angka, maka program juga akan meminta user untuk menginput kembali tahunnya.
c. Jika inputan user bukan bilangan, maka program akan meminta user untuk menginput kembali tahunnya. (Manfaatkan standard-library function)
d. Jadi, hanya 4 angka saja yang boleh menjadi inputan.

    #include <stdio.h>
    int main() {
    int year;
    char input[5];
Fungsi main() dimulai. Dua variabel dideklarasikan di sini: year untuk menyimpan tahun yang akan diperiksa, dan input untuk menyimpan input dari pengguna dalam bentuk string.

    while (1) {
Program menggunakan loop while yang akan berjalan selama kondisinya benar. Kondisi while (1) berarti loop akan berjalan selamanya, kecuali jika ada perintah break di dalamnya yang menghentikan loop.

        printf("Masukkan tahun yang ingin dicek : ");
    scanf("%s", input);
Di dalam loop, program mencetak pesan untuk meminta pengguna memasukkan tahun yang ingin diperiksa, kemudian menggunakan scanf() untuk membaca input dari pengguna dan menyimpannya dalam variabel input sebagai string.

        int length = 0;
    while (input[length] != '\0') {
        length++;
    }
Program menghitung panjang string yang dimasukkan oleh pengguna dengan mengiterasi setiap karakter dalam string hingga menemukan karakter null ('\0') yang menandakan akhir dari string.

        if (length != 4) {
        printf("Tahun harus terdiri dari 4 angka. Mohon masukkan tahun yang valid.\n");
        continue;
    }
Jika panjang input yang dimasukkan oleh pengguna bukan 4 karakter, program akan mencetak pesan kesalahan dan kembali ke awal loop menggunakan pernyataan continue.

        int isValid = 1;
    for (int i = 0; i < length; i++) {
        if (input[i] < '0' || input[i] > '9') {
            isValid = 0;
            break;
        }
    }

Program memeriksa apakah semua karakter dalam string adalah digit (angka). Jika ada karakter yang bukan digit, variabel isValid akan diubah menjadi 0, menunjukkan bahwa input tidak valid.

    if (!isValid) {
        printf("Input bukan bilangan. Mohon masukkan tahun yang valid.\n");
        continue;
    }
Jika input tidak valid (berisi karakter selain digit), program akan mencetak pesan kesalahan dan kembali ke awal loop menggunakan continue.

        sscanf(input, "%d", &year);
Jika input valid, program akan menggunakan fungsi sscanf() untuk mengonversi string input menjadi bilangan integer dan menyimpannya dalam variabel year.

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
       printf("%d adalah tahun kabisat.\n", year);
     } else {
       printf("%d bukan tahun kabisat.\n", year);
     }
    break;
    return 0;
    }

  Program memeriksa apakah tahun yang dimasukkan adalah tahun kabisat atau bukan berdasarkan aturan kalender Gregorian. Jika tahun dapat dibagi habis oleh 4 tetapi tidak habis dibagi 100 atau habis dibagi 400, maka itu adalah tahun kabisat. Hasil pemeriksaan kemudian dicetak.



