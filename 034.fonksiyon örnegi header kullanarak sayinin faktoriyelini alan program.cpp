//  sayinin faktoriyelini alan program ama header dosyası olarak  
/* header dosyası */
int fakt(int n){
if(n <= 1)
		return n;
else{ return (n*fakt(n-1));}
}
/* header dosyasi bitis */
--------------------------------------------
/* main program balangic*/
#include <iostream>
#include "faktoriyel.h" //  header dosyasi " " işareti kullanarak çağrılır 
using namespace std;


int main(int argc, char **argv)
{
	int a;
	cout << "sayiyi giriniz: ";
	cin >> a;
		
		 cout << fakt(a);
	
	
	return 0;
}
