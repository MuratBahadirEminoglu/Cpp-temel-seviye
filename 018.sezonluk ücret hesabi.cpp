/* sezonluk tatil turları hazırlayan bir şirket mevsimlere göre düzenlenecek turların fiyatların aşağıdaki gibi belirlemiştir.Klavyeden girilen ay ve katılacak kişi sayısına 
göre toplam maliyet hesaplayarak ekrana yazan C++ programı */
#include <iostream>

using namespace std;

int main()
{
      setlocale(LC_ALL, "Turkish");
    int ay;
    int kisisayisi;
    cout << "hangi ayda(1...12) tatil yapacaksiniz= ";
    cin >> ay;
    cout << "kaç kişi katilacaksiniz= ";
    cin >> kisisayisi;
    cout << "-------------------------------" << endl;
    switch(ay){
    case 2 ... 4:
        cout << "toplam borcunuz : " << kisisayisi*5;
        break;
    case 5 ... 7:
        cout << "toplam borcunuz : " << kisisayisi*25;
        break;
    case 8 ... 10:
        cout << "toplam borcunuz : " << kisisayisi*5;
        break;

    case 12:
    case 1:
        cout <<"toplam borcunuz : " << kisisayisi*15;
        break;

    default:
        cout << "1 ile 12 arasinda deger giriniz.";


        }
    return 0;
}
