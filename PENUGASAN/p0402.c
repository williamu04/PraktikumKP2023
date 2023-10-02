#include <stdio.h> 

int main() {
    int a = 10; 
    int b = 89U;
    long int c = 99998L; 
    float d = 23.3;
    double e = 12.293123; 
    char f = 'f';              
    char g[] = "String";    //menggunakan kurung kotak sebagai wadah array dari char dan menggunakan petik dua

    printf("%i \n",a);
    printf("%u \n",b);      //menggunakan specifier %u untuk unsigned integer 
    printf("%ld \n",c);     //menggunakan specifier %ld untuk long int
    printf("%.1f \n",d);     //menggunakan specifier %1f untuk float dengan 1 angka di belakang koma
    printf("%lf \n",e);     //menggunakan specifier %lf untuk double
    printf("%c \n",f);      //menggunakan specifier %c untuk char 
    printf("%s \n",g);      //menggunakan specifier %s untuk string

    return 0;
}

