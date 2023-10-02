#include <stdio.h>
#define pi 3.14

int main() {
 int radius = 20;
 const double keliling = pi*radius*2; 
 const double luas = pi*radius*radius;

 printf("Keliling lingkaran: %.1lf cm\n", keliling);
 printf("Luas lingkaran: %.1lf cm^2\n", luas);

 return 0;
}















// #include <stdio.h>
// int main() {
//     char nama_pos_pengukuran[] = "Pos 1";
//     int urutan_data = 20;
//     double tinggi_permukaan_air = 34.14;
//     float curah_hujan = 0.5;
//     char tanggal_pencatatan[] = "2022-09-09";

//     printf("Nama pos pengukuran: %s\n", nama_pos_pengukuran);
//     printf("Urutan data: %d\n", urutan_data);
//     printf("Tinggi permukaan air: %.2lf cm\n", tinggi_permukaan_air);
//     printf("Curah hujan: %.1f mm\n", curah_hujan);
//     printf("Tanggal pencatatan: %s\n", tanggal_pencatatan);
//     return 0;
// }




















// #include <stdio.h>
// int main() {
//     char nama[] = "Dunhill William Putra";
//     int umur = 18;
//     char tinggal[] = "Karangpandan";
//     double tinggi = 165.5;
//     float berat_badan = 66.7;
//     char kelas = 'B';
//     char jurusan[] = "Informatika";

//     printf("Hallo, perkenalkan nama saya %s, umur saya %i, saya tinggal di %s\nTinggi saya: %.1f cm\nBerat badan saya: %.1f kg\nJurusan saya: %s\nSaya dari kelas: %c\n", nama, umur, tinggal, tinggi, berat_badan, jurusan, kelas);
//     return 0;
// } 