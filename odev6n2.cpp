#include <iostream>
#include <cstring>
using namespace std;
 class Pazar
 {
     char sisim[30];
     char aisim[30];
     int fiyat1;
     int fiyat2;
     int fiyat3;
     int fiyat4;
     void pazarlik(char ssisim,char aaisim, int ffiyat1,int ffiyat2,int ffiyat3,int ffiyat4)
     {
         cout << sisim << "Bu ururnun fiyatý:" << ffiyat1 << "\n" << aaisim << "Hadi fiyatý" << ffiyat2 << "olsun\n" << ssisim << "Hayýr o kadar indirim yok fiyatý:" << ffiyat3 << "olabilir\n" << aaisim << "Hadi lutfen fiyatý"  << ffiyat4 << "olsun\n" << ssisim "OOF tamam" endl;
     }
     void indirim(int fiyat11,int fiyat22,int fiyat33,int fiyat44)
     {
         cout << "Bu pazarlýkta once fiyatýn" << fiyat11-fiyat22 << "Azaltýnmasý istendi sonra fiyat istenenden" << fiyat33-fiyat22 << "Arttýrýldý sonra urun" << fiyat33-fiyat44 << "fiyata satýldý";
     }
 };

int main()
{
    Pazar pazar;
    strcpy(pazar.sisim,"Ahmet");
    strcpy(pazar.aisim,"Mehmet")
    pazar.fiyat1=4000;
    pazar.fiyat2=2000;
    pazar.fiyat3=3000;
    pazar.fiyat4=2500;
    pazar.pazarlik(pazar.sisim,pazar.aisim,pazar.fiyat1,pazar.fiyat2,pazar.fiyat3,pazar.fiyat4);
    pazar.indirim(pazar.fiyat1,pazar.fiyat2,pazar.fiyat3,pazar.fiyat4);
}
