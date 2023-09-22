/* Girilen bir sayıya(0 ile N arası) kadarki üçe bölünebilen sayıların ortalamasına bulan programı 
gerçekleştriniz. Örneğin kalvyeden 13 sayısı girildiğinde programa ekrana 
 gir bir sayi...: 13
  sayi1: 12
  sayi2: 9
  sayi3: 6
  sayi4:3
  ortalama= 7.5
  */

#include <iostream>
using namespace std;
int main() {
    

    int sayi,N,sayac;
    double T;
    cout << "gir bir sayi..: ";
    cin >> sayi;

    N = sayi-(sayi%3);
    while(N > 0){
        cout << "sayi" << sayac+1 <<":" << N << endl;
         T = T - N;
         N= N-3;
         sayac++;

    }
 double ort = (float)T/sayac;
 cout << "Ortalama = " << ort;
 return 0;
}
