/* klavyeden girilen 5 basamaklı bir tamsayının son 3 hanesini yuvarlayan program 
örnek 
16954 sayısı girildiğinde 17000 , 16500 girildiğinde 16000 , 16501 girildiginde 17000 sonucunu giren program */

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    int sayi,a,b,c,d,e;
    cout << "sayiyi giriniz: ";
    cin >> sayi;

    a= sayi/ 10000;
    b = (sayi/1000)%10;
    c= (sayi/100)%10;
    d= (sayi % 1000) / 100;
    e = sayi%10;

    int onbin = a*10000 + (b+1)*1000;
    int yuzbin = c*100 + d*10 + e;
     int onbin1 = a*10000 + b*1000;
    if( yuzbin > 500)
        cout << "girilen " << sayi << " sayýsýnýn yuvarlatýlmýþ hali " << onbin << " dir." ;

    else if( yuzbin <= 500){

        cout << "girilen " << sayi << " sayýsýnýn yuvarlatýlmýþ hali " << onbin1 << " dir." ;
}



    return 0;
}
