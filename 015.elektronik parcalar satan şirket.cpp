/* elektronik parçalar satan bir şirket 3 değişik tipte ürün pazarlamaktadır. Transistörler,dirençler,Kondasatörler
şirket transistörlerden 1000 dolar üzerinde sipariş verildiğinde %10 indirim, direçlerden 100 dolar üzerinde sipariş verildiğinde
%5 indirim kondasatörlerden 500 dolar üzerinde sipariş verildiğinde %8 indirim yapmaktadır.Transistörler T veya t, Dirençler için 
D veya d , Kondansatörler için K veya k karakter kodları kullanıldığını varsayarak, klavyeden girilen ürün koduna ve seçilen ürünün
sipariş miktarına göre , bir müşterinin ne kadar ödemesi gerektiğini bulan bir C++ programını yazınız */
#include <iostream>

using namespace std;

int main()
{
    int adet , ucret;
    char parca;
    cout << "********* URUN SECENEKLERÝ***********" << endl;
    cout << "(T veya t) Transistor" << endl;
    cout << "(D veya d) Direnc" << endl;
    cout << "(K veya k) Kondansator" << endl;
    cout << "*************************************" << endl;
    cout <<" seciminiz: ";
    cin >> parca;
    switch(parca){

    case 'T':
    case 't':
        cout << "seciminiz: t"<<endl;
        cout << "ne kadarlik transistor alacaksýnýz: ";
        cin >> adet;
        if( adet >= 1000){
            ucret = adet-(adet*10)/100;
            cout << "odeme = " << ucret ;
        }
        else{
        cout << "odeme = " << adet ;
    }
        break;

    case 'D':
    case 'd':
        cout << "seciminiz: d"<<endl;
        cout << "ne kadarlik Direnc alacaksýnýz: ";
        cin >> adet;
        if( adet >= 100){
            ucret = adet-(adet*5)/100;
            cout << "odeme = " << ucret ;
        }
        else{
        cout << "odeme = " << adet ;
    }
        break;

    return 0;
}
}
