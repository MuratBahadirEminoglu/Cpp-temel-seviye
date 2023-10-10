/* girilen sayıdan kucuk yada buyuk en yakin asal sayiyi bulan C++ programı*/
#include <iostream>
using namespace std;
int asalbul(int a);
int main(int argc, char **argv)
{ int sayi;
	cout << "sayiyi giriniz: ";
	cin >> sayi;
	
	cout << asalbul(sayi);
	return 0;
}
int asalbul(int a){
    char kucukbuyuk;
    cout << "sayidan kucuk mu buyuk mu[K/B]: ";
    cin >> kucukbuyuk;

    switch(kucukbuyuk){
        case 'k':
        case 'K':
            for(; a >= 0 ; a--){
                if( a%2!= 0 && a%3!=0 && a%5!= 0){
                    return a;
                }
            }
            return 0; 
            break;
            
        case 'B':
        case 'b':
            while(a>=0){
                a++;
                if( a%2!= 0 && a%3!=0 && a%5!= 0){
                    return a;
                }   
            }
            return 0; 
            break;
    }
    return -1; // switch koşulu çalışmassa başka return eklemelisin.
