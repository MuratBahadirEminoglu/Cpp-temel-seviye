/* klavyeden girilen gün,km ve tip bilgilerine göre kiralanan arabanın ücretini belirleyen C++ programını yazınız. Program çalıştığında 
aşağıdaki örnek çalışmaya uygun olmalıdır.(arazi arabalaarı gün başına 20$ ve km başına 18$ binek arabaları gün başına 32$ ve km başına 22$ 
station arabaları gün başına 43$ ve km başına 28# spor arabaları gün başına 51$ ve km başına 36$ dır.) */


#include <iostream>

using namespace std;

int main()
{
    int gunsayisi,km,ucret;
    char araba;
    cout << "araba turleri" << endl;
    cout << "(A ve a) arazi" << endl;
    cout << "(B ve b) binek" << endl;
    cout << "(C ve c) station" << endl;
    cout << "(D ve d)spor" << endl;
    cout << "-----------------" << endl;
    cout << "arabanin türü:";
    cin >> araba;
    cout << "araba ile kac km yol yaptiniz:";
    cin >> km;
    cout << "araba ile kac gun yol yaptiniz: ";
    cin >> gunsayisi;

    switch (araba){

    case 'A':
    case'a':
        ucret = 20*gunsayisi + 18*km;
        cout << "odemeniz gereken tutar= " << ucret;
        break;

    case 'B':
    case 'b':
        ucret = 32*gunsayisi + 22*km;
        cout << "odemeniz gereken tutar= " << ucret;
        break;
    case 'C':
    case 'c':
        ucret = 43*gunsayisi + 28*km;
        cout << "odemeniz gereken tutar= " << ucret;
        break;
    case 'D':
    case 'd':
        ucret = 51*gunsayisi + 36*km;
        cout << "odemeniz gereken tutar= " << ucret;
        break;
    default:
        cout << "yanli tercih yaptiniz.";










    }
    return 0;
}
