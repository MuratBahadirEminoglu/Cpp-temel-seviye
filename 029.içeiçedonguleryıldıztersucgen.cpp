/* girilen keanr uzunluguna göre ters dikucgen basan C++ programı */

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	cout << "bir kenar uzunlugu giriniz: ";
	cin >> n;
	cout <<"----------------------------------------" << endl;
	for(int i = n; i >0 ;i--){
		for(int j = i ; j> 0 ;j--){
				cout <<"*";
			}
			cout << endl;
		}
		
	
	return 0;
}
