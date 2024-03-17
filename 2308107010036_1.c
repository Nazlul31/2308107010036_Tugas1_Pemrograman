#include<stdio.h>

int main(){
  char pilihan;
  printf("1. Bilangan Desimal ke Biner\n");
  printf("2. Bilangan Biner ke Desimal\n");
  printf("3. Bilangan Desimal ke Octal\n");
  printf("4. Bilangan Octal ke Desimal\n");

  printf("Masukkan Konversi yang Anda Inginkan: ");
  scanf("%d", &pilihan);

  switch(pilihan){
    case 1 : {
    int desimal, biner = 0, basis = 1, sisa;
    printf("Masukkan Bilangan Desimal: ");
    scanf("%d", &desimal);
    while (desimal > 0) {
        sisa = desimal % 2;     // Mengambil sisa pembagian dengan 2
        biner += sisa * basis;  // Menambahkan sisa ke bilangan biner
        basis *= 10;            // Memperbarui basis
        desimal /= 2; }         // Membagi bilangan desimal dengan 2 untuk iterasi selanjutnya
    printf("Bilangan binernya adalah %d", biner);
    break;}

    case 2 : {
    int biner, desimal = 0, basis = 1, sisa;
    printf("Masukkan Bilangan Biner: ");
    scanf("%d", &biner);
    while (biner > 0) {
        sisa = biner % 10;        // Mengambil sisa pembagian dengan 10
        desimal += sisa * basis;  // Menambahkan sisa ke bilangan desimal
        basis *= 2;               // Memperbarui basis
        biner /= 10;}             // Membagi bilangan biner dengan 10 untuk iterasi selanjutnya
    printf("Bilangan Desimalnya adalah %d", desimal);
    break;}

    case 3 : {
    int desimal, octal = 0, basis = 1, sisa;
    printf("Masukkan Bilangan Desimal: ");
    scanf("%d", &desimal);
    while (desimal > 0) {
        sisa = desimal % 8;     // Mengambil sisa pembagian dengan 8
        octal += sisa * basis;  // Menambahkan sisa ke bilangan octal
        basis *= 10;            // Memperbarui basis
        desimal /= 8;}          // Membagi bilangan desimal dengan 8 untuk iterasi selanjutnya
    printf("Bilangan Octalnya adalah %d", octal);
    break;}

    case 4 : {
    int octal, desimal = 0, basis = 1, sisa;
    printf("Masukkan Bilangan Octal: ");
    scanf("%d", &octal);
    while (octal > 0) {
        sisa = octal % 10;        // Mengambil sisa pembagian dengan 10
        desimal += sisa * basis;  // Menambahkan sisa ke bilangan desimal
        basis *= 8;               // Memperbarui basis
        octal /= 10;}             // Membagi bilangan octal dengan 10 untuk iterasi selanjutnya
    printf("Bilangan Desimalnya adalah %d", desimal);
    break;}

    default :
    printf("Menu konversi tidak tersedia");
  }
  
 return 0;
}