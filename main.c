#include <stdio.h>
#include <time.h>

struct TarihSaat {
    int yil;
    int ay;
    int gun;
    int saat;
    int dakika;
    int saniye;
};

union Zaman {
    struct TarihSaat ts;
    time_t epoch_zaman;
};

time_t epoch_hesapla(struct TarihSaat ts) {
    struct tm t;
    t.tm_year = ts.yil - 1900; 
    t.tm_mon = ts.ay - 1;       
    t.tm_mday = ts.gun;
    t.tm_hour = ts.saat;
    t.tm_min = ts.dakika;
    t.tm_sec = ts.saniye;
    t.tm_isdst = -1;            
    return mktime(&t);          
}

struct TarihSaat tarihSaatAl() {
    struct TarihSaat ts;
    printf("Yil: ");
    scanf("%d", &ts.yil);
    printf("Ay: ");
    scanf("%d", &ts.ay);
    printf("Gun: ");
    scanf("%d", &ts.gun);
    printf("Saat: ");
    scanf("%d", &ts.saat);
    printf("Dakika: ");
    scanf("%d", &ts.dakika);
    printf("Saniye: ");
    scanf("%d", &ts.saniye);
    return ts;
}

int main() {
    union Zaman zaman1, zaman2;

    printf("birinci tarih ve saat bilgilerini giriniz:\n");
    zaman1.ts = tarihSaatAl();

    printf("\nikinci tarih ve saat bilgilerini giriniz:\n");
    zaman2.ts = tarihSaatAl();


    time_t epoch1 = epoch_hesapla(zaman1.ts);
    time_t epoch2 = epoch_hesapla(zaman2.ts);

    double fark = difftime(epoch2, epoch1);

    printf("\nbirinci tarih epoch zamani: %ld\n", epoch1);
    printf("ikinci tarih epoch zamani: %ld\n", epoch2);
    printf("iki tarih arasindaki zaman farki: %.f saniye\n", fark);

    return 0;
}
