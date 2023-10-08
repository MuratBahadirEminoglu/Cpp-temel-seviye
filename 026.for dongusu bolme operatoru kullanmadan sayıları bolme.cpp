/* Girilen 2 pozitif tam sayının bölümünü ; bölme operatörü
kullanılmadan hesaplayan program */
#include <iostream>
using namespace std;

int main(){
	int sayac = 0;
	int s1,s2;
	cout << "1.sayi giriniz: ";
	cin >> s1;
	cout << "2.sayi giriniz: ";
	cin >> s2;
	
	cout << s1 << "/" << s2<< "=";
	for( ; s1>= s2; ){
		s1-=s2;
		sayac++;
}
	cout << sayac;
	return 0;
}
