/* kendisine gönderilen zaman dilimi değerine göre ( sabah için "s" , öğle için "o",akşam içinde "a") bilgisine göre , o zaman diliminde rastgele bir zamanı ekrana yazan
*zamanUret* adindaki fonksiyonu yazınız.(sabah dilimine göre 08:00:00 - 10:59:59, öğle dilimi 11:00:00- 15:59:59,akşam 16:00:00-22:59:59) */



#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void zamanUret(char d);

int main(int argc, char **argv)
{
    char zaman;
    cout << "Zaman dilimini giriniz (A/a, O/o, S/s): ";
    cin >> zaman;

    zamanUret(zaman);

    return 0;
}

void zamanUret(char d)
{
    srand(time(NULL)); // Rastgele sayı üretimi için başlangıç değeri ayarlayın

    int a, b, c;

    switch (d)
    {
    case 's':
    case 'S':
        a = 8 + rand() % 3;
        b = rand() % 60;
        c = rand() % 60;
        break;

    case 'o':
    case 'O':
        a = 11 + rand() % 5;
        b = rand() % 60;
        c = rand() % 60;
        break;

    case 'a':
    case 'A':
        a = 16 + rand() % 7;
        b = rand() % 60;
        c = rand() % 60;
        break;

    default:
        cout << "Geçersiz zaman dilimi girişi." << endl;
        return;
    }

    // Saat, dakika ve saniyeyi göster
    if (b < 10 && c > 10)
    {
        cout << a << ":0" << b << ":" << c << endl;
    }
    else if (c < 10 && b > 10)
    {
        cout << a << ":" << b << ":0" << c << endl;
    }
    else if (c < 10 && b < 10)
    {
        cout << a << ":0" << b << ":0" << c << endl;
    }
    else
    {
        cout << a << ":" << b << ":" << c << endl;
    }
}
