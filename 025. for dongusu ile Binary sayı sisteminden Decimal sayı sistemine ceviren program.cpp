/* Binary sistemde girilen bir sayıyı Decimal sisteme ceviren program */
#include <iostream>
using namespace std;

int main(){
	int B,T=2,A=1,D=0;
	cout << "binary sayiyi giriniz: ";
	cin >> B;
	cout << "(" << B << ")2";
	for(; B>0; B/=10){
			D+= ( B%10)*A;
			A*=T;
		}
		cout << "= (" << D << ")10";
		return 0;
}
