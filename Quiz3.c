// Soal 1,2,3,4,5,6,7,8,10 Tuntas //
// Soal 9 Setengah Tuntas Gak Sempet nomor 2 nya //

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int id;
    char nama[50];
    int harga;
    int stok;
} Produk;

Produk dataProduk[100];
int jumlahProduk = 0;

// Menu Void //
void tampilkanMenu();
void menuSequence();
void menuSelection();
void menuRepetition();
void menuFunction();
void menuProsedur();
void menuArray();
void menuMatrix();
void menuSorting();
void menuSearching();
void menuRecursive();

// Fungsi Tambahan//
int totalNilaiProduk(int harga, int stok);
void printDataProduk(int id, char nama[], int harga, int stok);
int hitungStokRekursif(int index);

// OPTION //
int main() {
    int pilihan;

    do {
        tampilkanMenu();
        printf("Pilih menu: ");
        scanf("%d", &pilihan);
        getchar();

        switch (pilihan) {
            case 1: menuSequence(); break;
            case 2: menuSelection(); break;
            case 3: menuRepetition(); break;
            case 4: menuFunction(); break;
            case 5: menuProsedur(); break;
            case 6: menuArray(); break;
            case 7: menuMatrix(); break;
            case 8: menuSorting(); break;
            case 9: menuSearching(); break;
            case 10: menuRecursive(); break;
            case 0: printf("Program selesai.\n"); break;
            default: printf("Menu tidak valid.\n");
        }

        if(pilihan != 0) {
            printf("\nTekan Enter untuk kembali ke menu.");
            while(getchar() != '\n');
        }

    } while (pilihan != 0);

    return 0;
}

// Void MENU //
void tampilkanMenu() {
    printf("\n=== MENU TOKO ===\n");
    printf("1. Sequence\n");
    printf("2. Selection\n");
    printf("3. Repetition\n");
    printf("4. Function\n");
    printf("5. Prosedur\n");
    printf("6. Array\n");
    printf("7. Matrix\n");
    printf("8. Sorting\n");
    printf("9. Searching\n");
    printf("10. Recursive\n");
    printf("0. Keluar\n");
}
// Sequence //
void menuSequence() {
    int id, harga, stok, total;
    char nama[50];

    printf("\n=== MENU SEQUENCE ===\n");
    printf("Input ID Produk   : "); scanf("%d", &id);
    getchar();
    printf("Input Nama Produk : "); scanf("%[^\n]s", nama);
    printf("Input Harga       : "); scanf("%d", &harga);
    printf("Input Stok        : "); scanf("%d", &stok);

    total = harga * stok;

    printf("\n=== HASIL ===\n");
    printf("ID          : %d\n", id);
    printf("Nama        : %s\n", nama);
    printf("Harga       : %d\n", harga);
    printf("Stok        : %d\n", stok);
    printf("Total nilai : %d\n", total);
}
// Selection //
void menuSelection() {
    int id, harga, stok;
    char nama[50];
    char status[20];

    printf("\n=== MENU SELECTION ===\n");
    printf("Input ID Produk   : "); scanf("%d", &id);
    getchar();
    printf("Input Nama Produk : "); scanf("%[^\n]s", nama);
    printf("Input Harga       : "); scanf("%d", &harga);
    printf("Input Stok        : "); scanf("%d", &stok);

    if (stok == 0) {
        strcpy(status, "HABIS");
    } else if (stok < 5) {
        strcpy(status, "MENIPIS");
    } else {
        strcpy(status, "AMAN");
    }
    printf("\n=== DATA ===\n");
    printf("ID     : %d\n", id);
    printf("Nama   : %s\n", nama);
    printf("Harga  : %d\n", harga);
    printf("Stok   : %d\n", stok);
    printf("Status : %s\n", status);
}
// Repetition //
void menuRepetition() {
    int n, i;
    int totalStokBatch = 0;
    long long totalNilaiBatch = 0;

    printf("\n=== MENU REPETITION ===\n");
    printf("Berapa produk yang ingin diinput? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nProduk %d\n", i + 1);
        printf("Input ID Produk   : "); scanf("%d", &dataProduk[jumlahProduk].id);
        getchar();
        printf("Input Nama Produk : "); scanf("%[^\n]s", 	dataProduk[jumlahProduk].nama);
        printf("Input Harga       : "); scanf("%d", &dataProduk[jumlahProduk].harga);
        printf("Input Stok        : "); scanf("%d", &dataProduk[jumlahProduk].stok);
        totalStokBatch += dataProduk[jumlahProduk].stok;
        totalNilaiBatch += (long long)dataProduk[jumlahProduk].harga * 	dataProduk[jumlahProduk].stok;
        jumlahProduk++;
    }
    printf("\n=== RINGKASAN ===\n");
    printf("Jumlah produk diinput : %d\n", n);
    printf("Total stok semua      : %d\n", totalStokBatch);
    printf("Total nilai semua     : %lld\n", totalNilaiBatch);
}
int totalNilaiProduk(int harga, int stok) {
    return harga * stok;
}
// Function //
void menuFunction() {
    int id, harga, stok, total;
    char nama[50];

    printf("\n=== MENU FUNCTION ===\n");
    printf("Input ID Produk   : "); scanf("%d", &id);
    getchar();
    printf("Input Nama Produk : "); scanf("%[^\n]s", nama);
    printf("Input Harga       : "); scanf("%d", &harga);
    printf("Input Stok        : "); scanf("%d", &stok);
    total = totalNilaiProduk(harga, stok);
    printf("Total Nilai Produk: %d\n", total);
}
// Output Prosedur //
void printDataProduk(int id, char nama[], int harga, int stok) {
    printf("\n=== OUTPUT PROSEDUR ===\n");
    printf("ID    : %d\n", id);
    printf("Nama  : %s\n", nama);
    printf("Harga : %d\n", harga);
    printf("Stok  : %d\n", stok);
}
// Prosedur //
void menuProsedur() {
    int id, harga, stok;
    char nama[50];
    printf("\n=== MENU PROSEDUR ===\n");
    printf("Input ID Produk   : "); scanf("%d", &id);
    getchar();
    printf("Input Nama Produk : "); scanf("%[^\n]s", nama);
    printf("Input Harga       : "); scanf("%d", &harga);
    printf("Input Stok        : "); scanf("%d", &stok);

    printDataProduk(id, nama, harga, stok);
}
// Array //
void menuArray() {
    int n;

    printf("\n=== MENU ARRAY ===\n");
    printf("Berapa produk yang ingin disimpan? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nProduk %d\n", i + 1);
        printf("ID    : "); scanf("%d", &dataProduk[jumlahProduk].id);
        getchar();
        printf("Nama  : "); scanf("%[^\n]s", dataProduk[jumlahProduk].nama);
        printf("Harga : "); scanf("%d", &dataProduk[jumlahProduk].harga);
        printf("Stok  : "); scanf("%d", &dataProduk[jumlahProduk].stok);
        jumlahProduk++;
    }

    printf("\nDATA PRODUK TERSIMPAN\n");
    printf("%-5s %-15s %-10s %-5s\n", "ID", "Nama", "Harga", "Stok");
    for (int i = 0; i < jumlahProduk; i++) {
        printf("%-5d %-15s %-10d %-5d\n",
            dataProduk[i].id,
            dataProduk[i].nama,
            dataProduk[i].harga,
            dataProduk[i].stok);
    }
}
// Matrix //
void menuMatrix() {
    int jumCabang, jumProdukMatrix;
    int stok[10][10];
    int totalStokPerProduk[10] = {0};
    printf("\n=== MENU MATRIX ===\n");
    printf("Berapa cabang? "); scanf("%d", &jumCabang);
    printf("Berapa produk per cabang? "); scanf("%d", &jumProdukMatrix);
    for(int c = 0; c < jumCabang; c++) {
        for(int p = 0; p < jumProdukMatrix; p++) {
            printf("Input stok Cabang %d Produk %d: ", c+1, p+1);
            scanf("%d", &stok[c][p]);
            totalStokPerProduk[p] += stok[c][p];
        }
    }
    printf("\nTotal stok per produk:\n");
    for(int p = 0; p < jumProdukMatrix; p++) {
        printf("Produk %d = %d\n", p+1, totalStokPerProduk[p]);
    }
}
// Sorting //
void menuSorting() {
    int subMenu;
    printf("\n=== MENU SORTING ===\n");
    printf("Pilih menu: 8\n");
    if (jumlahProduk == 0) {
        printf("Kerjain nomor 6 Dulu!\n");
        return;
    }
    printf("\n--- SUBMENU SORTING ---\n");
    printf("1. Sorting berdasarkan Harga (Naik)\n");
    printf("2. Sorting berdasarkan Nama (A-Z)\n");
    printf("Pilih: "); scanf("%d", &subMenu);
    for (int i = 0; i < jumlahProduk - 1; i++) {
        for (int j = 0; j < jumlahProduk - i - 1; j++) {
            int swap = 0;
            if (subMenu == 1) {
                if (dataProduk[j].harga > dataProduk[j+1].harga) swap = 1;
            } else if (subMenu == 2) {
                if (strcmp(dataProduk[j].nama, dataProduk[j+1].nama) > 0) swap = 1;
            }
            if (swap) {
                Produk temp = dataProduk[j];
                dataProduk[j] = dataProduk[j+1];
                dataProduk[j+1] = temp;
            }
        }
    }
    if (subMenu == 1) printf("\nData berhasil diurutkan berdasarkan HARGA (naik).\n");
    if (subMenu == 2) printf("\nData berhasil diurutkan berdasarkan NAMA (A-Z).\n");
    printf("\nDATA SETELAH SORTING\n");
    printf("%-5s %-15s %-10s %-5s\n", "ID", "Nama", "Harga", "Stok");
    for (int i = 0; i < jumlahProduk; i++) {
        printf("%-5d %-15s %-10d %-5d\n",
            dataProduk[i].id, dataProduk[i].nama, dataProduk[i].harga, dataProduk[i].stok);
    }
}
// Searching //
void menuSearching() {
    int subMenu,cariID, found = 0;
    char nama[50];
    printf("\n=== MENU SEARCHING ===\n");

    if (jumlahProduk == 0) {
        printf("Data kosong. Input data Pada nomor 6 terlebih dahulu.\n");
        return;
    }
    printf("\n--- SUBMENU SORTING ---\n");
    printf("1. Cari Berdasarkan ID\n");
    printf("2. Cari Berdasarkan Nama\n");
    printf("Pilih: "); scanf("%d", &subMenu);
    if (subMenu == 1) printf("Masukkan ID yang dicari: ");
    scanf("%d", &cariID);
    for (int i = 0; i < jumlahProduk; i++) {
        if (dataProduk[i].id == cariID) {
            printf("DITEMUKAN: %s | Harga: %d | Stok: %d\n",
                   dataProduk[i].nama, dataProduk[i].harga, dataProduk[i].stok);
            found = 1;
            break;
        }
    }
    if (subMenu == 2) printf("Masukan Nama yang dicari : ");
    if (!found) printf("Data dengan ID %d tidak ditemukan.\n", cariID);
}
// Hitung Stok //
int hitungStokRekursif(int index) {
    if (index < 0) return 0;
    return dataProduk[index].stok + hitungStokRekursif(index - 1);
}
// Recrusive //
void menuRecursive() {
    printf("\n=== MENU RECURSIVE ===\n");
    if (jumlahProduk == 0) {
        printf("Data kosong. Isi data di Menu 6.\n");
    } else {
        int total = hitungStokRekursif(jumlahProduk - 1);
        printf("Total seluruh stok dari data menu 6: %d\n", total);
    }
}

// kalo ada sungai bolehkah menumpang mandi, jika ada umur panjang bolehkah menumpang mandi //