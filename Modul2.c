#include<stdio.h>
#include<math.h>
float b , operator, hasil;
char c;
int d;

float bawah,atas,lebar,luas;

float riemankanan(float bawah, float lebar, float atas, float rumus,float pembilang, float penyebut, float x,float sisi1,float sisi2);
float riemankanan(float bawah, float lebar, float atas,float rumus, float pembilang, float penyebut, float x,float sisi1,float sisi2){
    x = bawah + lebar;
    if(x > atas){
        pembilang = (10 * bawah * bawah) - (7 * bawah * sin(bawah));
        penyebut = (bawah*bawah) + bawah + 1 ;
        sisi1 = pembilang/penyebut;
        pembilang = (10 * atas * atas) - (7 * atas * sin(atas));
        penyebut = (atas*atas) + atas + 1 ;
        sisi2 = pembilang/penyebut;
        rumus = ((sisi1 + sisi2) * (atas - bawah))/2;
        return(rumus);
    }else{
        pembilang = (10 * bawah * bawah) - (7 * bawah * sin(bawah));
        penyebut = (bawah*bawah) + bawah + 1 ;
        sisi1 = pembilang/penyebut;
        pembilang = (10 * x * x) - (7 * x * sin(x));
        penyebut = (x*x) + x + 1 ;
        sisi2 = pembilang/penyebut;
        rumus = ((sisi1 + sisi2) * lebar)/2;
        return(rumus + riemankanan(x,lebar,atas,0,0,0,0,0,0));
    }
}
float penjumlahan(float a, float b);
float penjumlahan(float a, float b){
    printf("Hasilnya adalah : %0.3f \n",(a + b));
    return(a+b);
}
float pengurangan(float a, float b);
float pengurangan(float a, float b){
    printf("Hasilnya adalah : %0.3f \n",(a - b));
    return(a-b);
}
float pembagian(float a, float b);
float pembagian(float a, float b){
    printf("Hasilnya adalah : %0.3f \n",(a / b));
    return(a/b);
}
float perkalian(float a, float b);
float perkalian(float a, float b){
    printf("Hasilnya adalah : %0.3f \n",(a * b));
    return(a*b);
}
float pangkat(float a, float b);
float pangkat(float a, float b){
    if (b < 1){
      return(1);
    }
    else{
      return(a * pangkat(a,(b-1)));
    }
}
int main()
{   
    c = 'Y';
    hasil = 0;
    printf("Apakah ingin menggunakan kalkulator? (Y/N) \n");
    scanf("%c", &c);
    while (c == 'Y')
    {
      printf("Masukkan angka untuk operasi yang diinginkan (a (default = 0) <operator> b):\n");
      printf("1. Penjumlahann \n");
      printf("2. Pengurangan\n");
      printf("3. Perkalian\n");
      printf("4. Pembagian\n");
      printf("5. Pangkat\n");
      printf("6. Integral dari fungsi ((10 * x * x) - (7 * x * sin(x))) : (x*x + x + 1) \n");
      scanf("%f", &operator );
      if (operator == 1)
      {
        printf("Masukkan nilai penjumlahan (b) \n");
        scanf("\n %f", &b );
        hasil = penjumlahan(hasil,b);
      }
      else if (operator == 2)
      {
