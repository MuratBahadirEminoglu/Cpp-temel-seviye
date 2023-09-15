/* BİL101 futbol takımı teknik direktörü , 3 oyuncusundan en kötü olanı tespit etmek istemektedir.Oyuncuların
oynadıkları maç sayısı,isabetli pas ve hatalı pas sayısı deperlerine klavyeden girilmektedir.Maç başına düşen net isabetli pas sayısına göre en kötü
hangisi olduğunu bulup ekrana yazan C++ programını yazınız.(net  isabetli pas sayısı,isabetli pas sayısından hatalı pas sayısı çıkarılarak bulunur*/

#include <iostream>

using namespace std;

int main()
{
 int mac,isabetli,hatali;
 int mac1,isabetli1,hatali1;
 int mac2,isabetli2,hatali2;
 cout << "Birincinin oynadýgý mac, isabetli ve hatali pas sayisina giriniz: ";
 cin >> mac >> isabetli >> hatali;

 cout << "ikincinin  oynadýgý mac, isabetli ve hatali pas sayisina giriniz: ";
 cin >> mac1 >> isabetli1 >> hatali1;

 cout << "Ucuncunun oynadýgý mac, isabetli ve hatali pas sayisina giriniz: ";
 cin >> mac2 >> isabetli2 >> hatali2;

    float  isabetlisayi = isabetli - hatali;
    float  isabetlisayi1 = isabetli1 - hatali1;
    float  isabetlisayi2 = isabetli2 - hatali2;
 cout << "-----------------" << endl;
    if(isabetlisayi< isabetlisayi1 && isabetlisayi2> isabetlisayi )
        cout << "En kotu 1.oyuncudur.";
    else if(isabetlisayi1< isabetlisayi && isabetlisayi2> isabetlisayi1 )
        cout << "En kotu 2.oyuncudur.";
    else if(isabetlisayi2< isabetlisayi && isabetlisayi1> isabetlisayi2 )
        cout << "En kotu 3.oyuncudur.";

return 0;
}
