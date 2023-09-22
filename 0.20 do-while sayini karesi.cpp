/* girilen sayı sıfırdan farklı olduğu sürece o sayının karesini alan programı kodlayınız. */

#include<iostream>

using namespace std;
int main(){

int A;

do{
        cout << "Bir sayi giriniz[cikis icin 0 gir!]: ";
    cin >> A;
  cout << "sayinin karesi: " << A*A << endl;
}while(A!=0);

return 0;
}
