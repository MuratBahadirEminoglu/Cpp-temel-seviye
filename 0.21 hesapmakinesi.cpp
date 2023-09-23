/* basit hesab makine uygulamasi(+,-,/,*) */
/* do-while hali*/
using namespace std;
int main(){
int a,b;
char islem  ;

do{
    cout << "1.sayiyi giriniz: ";
    cin >> a;
    cout << "2.sayiyi giriniz: ";
    cin >> b;
    cout << "islemi seciniz(cikmak icin e'ye basiniz): ";
    cin >> islem;


    switch(islem){
        case '+':
                cout << "sonuc = " << a+b << endl;
                break;
                case '-':
                cout << "sonuc = " << a-b << endl;
                break;
                case '/':
                cout << "sonuc = " << float(a)/b << endl;
                break;
                case '*':
                cout << "sonuc = " << a*b << endl;
                break;

                default:
                    cout << "bilinmeyen islem";
                    break;
                    }
}while(islem != 'e');
return 0;
}

/* while dongusu hali */
#include<iostream>

using namespace std;
int main(){
int a,b;
char islem  ;

while(islem != 'e'){
    cout << "1.sayiyi giriniz: ";
    cin >> a;
    cout << "2.sayiyi giriniz: ";
    cin >> b;
    cout << "islemi seciniz(cikmak icin e'ye basiniz): ";
    cin >> islem;

    switch(islem){
        case '+':
                cout << "sonuc = " << a+b << endl;
                break;
                case '-':
                cout << "sonuc = " << a-b << endl;
                break;
                case '/':
                cout << "sonuc = " << float(a)/b << endl;
                break;
                case '*':
                cout << "sonuc = " << a*b << endl;
                break;

                default:
                    cout << "bilinmeyen islem";
                    break;
                    }
}
return 0;
}
