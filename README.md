# 2308107010036_Tugas1_Pemrograman

== Program Konversi Bilangan ==
1. int main berfungsi sebagai badan utama kode program.
2. Deklarasikan variabel "pilihan" dengan tipe data char.
3. Menggunakan fungsi printf untuk menampilkan pilihan menu konversi bilangan.
4. Menggunakan fungsi printf dan scanf sebagai inputan dari keyboard user.
5. Menggunakan perulangan switch dengan variabel pilihan sebagai kondisi.

6. Case 1 digunakan untuk mengkonversi bilangan desimal ke biner,
7. deklarasikan terlebih dahulu variabel yang akan digunakan dalam case yaitu desimal, biner = 0, basis = 1, dan sisa
8. menggunakan fungsi printf dan scanf sebagai inputan dari keyboard user,
9. menggunakan while untuk menjalankan perulangan program,
10. variabel sisa digunakan untuk menampung hasil bagi bilangan inputan dengan 2 (karena bilangan biner berbasis 2),
11. variabel biner digunakan untuk menampung deretan digit biner yang berasal dari variabel sisa dengan mengkalikan dengan basis,
12. variabel basis diperbaharui dan variabel desimal dibagi dengan 2 (basis biner),
13. apabila nilai desimal yang telah diproses nilainya masih lebih dari 0 (persyaratan while) maka perulangan akan tetap berlangsung,
14. setelah program selesai maka akan didapatkan deretan bilangan biner yang telah dikonversikan.

15. Untuk case selanjutnya hanya berbeda di posisi variabel yang digunakan dan modulo dengan bilangan inputan,
16. bilangan desimal berbasis 10, bilangan biner berbasis 2, dan bilangan octal berbasis 8.

 == Program Tahun Kabisat ==
 1. int main berfungsi sebagai badan utama kode program.
 2. Deklarasikan variabel "tahun" dengan tipe data int, serta variabel "digit" yang bernilai 1 (true) dengan tipe data yang sama.
 3. Menggunakan while untuk menjalankan perulangan jika inputan tidak sesuai instruksi (bernilai 0 atau false).
 4. Menggunakan fungsi printf dan scanf sebagai inputan dari keyboard user.
 5. Menggunakan if untuk menetapkan inputan haruslah berisi 4 digit.
 6. Menggunakan if untuk menentukan tahun kabisat.
 7. Apabila inputan yang dimasukkan bukan digit, maka perulangan while diatas akan berlangsung dan meminta pengguna menginput kembali.
 8. Namun, jika inputan yang dimasukkan sesuai, program akan menentukan inputan yang dimasukkan merupakan tahun kabisat atau bukan dan program akan berhenti.
