# Pilgan Generator
Apakah Anda seorang guru yang sedang membuat soal pilihan ganda untuk pengujian siswa Anda? atau Anda adalah seorang pembuat soal profesional yang bekerja untuk membuat soal Ujian Nasional atau soal untuk olimpiade?

Maka program yang dibuat dengan bahasa C ini sangat tepat dipergunakan untuk menentukan kunci jawaban dari soal ujian yang telah Anda buat!

Buatlah sebanyak mungkin soal pilihan ganda baik untuk ujian harian, semester, tengah semester, kenaikan kelas, maupun kenaikan kelas tanpa bingung meletakkan dimana saja Anda harus meletakkan pilihan yang benar.

## Cara Instal
Instal program ini menggunakan `gcc` maupun `clang`.
```sh
$ clang PilGen.c -o PilGen
# atau
$ gcc Pilgen.c -o PilGen
```
## Cara Pakai
Program ini membutuhkan dua argumen, yaitu `<jumlah_soal>` dan `<karakter pilihan>`
```sh
$ ./PilGen 5 "ABCD"
# output:
1. D
2. B
3. C
4. A
5. D
```
# Semoga Bermanfaat! 🥴
