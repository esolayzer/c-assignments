#include <stdio.h>
#include <math.h>


#define PI 3.1419
#define SU_FIYATI 0.912857 


void cozum_6_1() {
    double yukseklik, cap, yaricap, hacim;
    printf("ÇÖZÜM 6.1:\n");
    printf("-----------\n");
    printf("Yüksekliği giriniz (cm) : ");
    scanf("%lf", &yukseklik);
    printf("Çapı giriniz (cm) : ");
    scanf("%lf", &cap);
    yaricap = cap / 2.0;
    hacim = (1.0 / 3.0) * PI * (yaricap * yaricap) * yukseklik;
    printf("Girdi değerleri: yükseklik %.0f ve çap %.0f\n", yukseklik, cap);
    printf("Dairesel koninin hacmi: %.2f cm küptür.\n", hacim);
    printf("----------------------------------------\n\n");
}


void cozum_6_4() {
printf(" .-\"-, \n");
printf("/_ _  \\ \n");
printf("\\@ @  /\n");
printf("(_= _)\n");
printf("  `) (_\n");
printf("  / ((`),\n");
printf("  \\__ (/-\" \n");
printf("  _|||_\n");
printf(" ((_|_))\n\n");
}



void cozum_6_16() {
    int a, b; 
    double harmonik_ortalama; 
    printf("ÇÖZÜM 6.16:\n");
    printf("-----------\n");
    printf("Harmonik ortalamasi alinacak degerler: ");
    scanf("%d %d", &a, &b);
    harmonik_ortalama = (2.0 * a * b) / (a + b);
    printf("Harmonik Ortalama = %.2f\n", harmonik_ortalama);
    printf("----------------------------------------\n\n");
}


void cozum_6_22() {
    int ilk_gosterge, son_gosterge, tuketim_miktari;
    double tuketim_tutari, atiksu_bedeli, toplam;

    printf("ÇÖZÜM 6.22:\n");
    printf("-----------\n");
    printf("Ilk göstergeyi giriniz: ");
    scanf("%d", &ilk_gosterge);
    printf("Son göstergeyi giriniz: ");
    scanf("%d", &son_gosterge);

    tuketim_miktari = son_gosterge - ilk_gosterge;
    tuketim_tutari = (double)tuketim_miktari * SU_FIYATI;
    atiksu_bedeli = tuketim_tutari * 0.50;
    toplam = tuketim_tutari + atiksu_bedeli;

    printf("Tüketim miktari        : %d\n", tuketim_miktari);
    printf("Tüketim tutari         : %.2f\n", tuketim_tutari);
    printf("Atiksu bedeli (yuzde 50) : %.2f\n", atiksu_bedeli);
    printf("TOPLAM                 : %.2f TL\n", toplam);
    printf("----------------------------------------\n\n");
}


void cozum_6_27() {
    int x1, y1, x2, y2;
    double xo, yo; 

    printf("ÇÖZÜM 6.27:\n");
    printf("-----------\n");

    printf("Ilk noktanin x1 y1 degerini giriniz: ");
    scanf("%d %d", &x1, &y1);

    printf("Ikinci noktanin x2 y2 degerini giriniz: ");
    scanf("%d %d", &x2, &y2);

    
    xo = (x1 + x2) / 2.0;
    yo = (y1 + y2) / 2.0;

    
    printf("xo = %.1f\n", xo);
    printf("yo = %.1f\n", yo);

    printf("----------------------------------------\n\n");
}



int main() {
    
    printf("ODEV1 Hazirlayan Esila Sahin\n"); 
    printf("================================\n\n");

    
    cozum_6_1();
    cozum_6_4();
    cozum_6_16();
    cozum_6_22();
    cozum_6_27(); 

    return 0; 
}



#include <stdio.h>

 
int main (){
    printf ("This is the main File for Artuklu University Comp Eng. Programming Lecture Class 1 \n");
    
        
    
   printf("Esila Şahin");

    return 0;
}
