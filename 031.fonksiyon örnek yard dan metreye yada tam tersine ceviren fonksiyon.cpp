/* kullanıcının girdigi deger ve birime göre yard yada metreye ceviren program */
#include <iostream>
using namespace std;
void yardmetrecevir(float a,char b);
int main(int argc, char **argv)
{float uzunluk;
	char secim;
	
	cout << "metre yada yard mı seciniz[M/Y]: ";
	cin >> secim;
    cout << "uzunlugunu giriniz: ";
	cin >> uzunluk;
	
	yardmetrecevir(uzunluk,secim);
	return 0;
}

void  yardmetrecevir(float a,char b){
	if( b == 'm' || b == 'M'){
				cout << a/0.9144 << " yard dir." ;
			 }
			
		
	else if( b == 'y' || b == 'Y'){
				 cout <<  a*0.9144 << "metre dir.";
				}
		
}
