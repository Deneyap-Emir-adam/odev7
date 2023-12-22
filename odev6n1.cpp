#include <iostream>
#include <cstring>
using namespace std;

class Yarisma
{
public:
    char isim[30];
    char soyisim[30];
    char sehir[30];
    int kardes;
    int yas;
    int puan;
    void sunmak(char yisim,char ysoyisim,char ysehir,int ykardes,int yyas,int ypuan)
    {
        cout << "Bu yarısmacımızın adı:" << yisim << "Yarısmacının soyadı:"<< ysoyisim << "Yarısmacının katıldıgı sehir:"<< ysehir <<"Kardes sayısı:" << ykardes << "Yası:" << yas << "Puanı:" << ypuan;
    }
};

int main()
{
    Yarisma yaris1;
    strcpy(yaris1.isim,"Can");
    strcpy(yaris1.soyisim,"Canoglu");
    strcpy(yaris1.sehir,"Ceyhan");
    yaris1.yas=77;
    yaris1.puan=1234;
    yaris1.kardes=2;
    yaris1.sunmak(yaris1.isim,yaris1.soyisim,yaris1.sehir,yaris1.kardes,yaris1.yas,yaris1.puan);
}
