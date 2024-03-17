#include<stdio.h>

int main() {
  int tahun;
  int digit = 1;

  while (digit) {
    printf("Masukkan Tahun: ");
    scanf("%d", &tahun);

    if (tahun >= 1000 && tahun <= 9999) {
      digit = 0;
        if (tahun % 4 == 0 && tahun % 100 != 0 || tahun % 400 == 0) {
          printf("Ini adalah tahun kabisat\n");
        } else {
          printf("Ini bukan Tahun kabisat\n");
        }
    } else {
        printf("Mohon masukkan tahun dengan 4 digit\n");
    }
    while (getchar() != '\n');
  }

  return 0;
}
