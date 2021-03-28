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
