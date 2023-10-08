/* saat sistemini (saat dakika ,saniye degerlerini gosteren programı ) */
#include <iostream>
using namespace std;
int main(){
int saat,dakika,saniye;

for ( saat = 0; saat <= 24; saat++){
  for( dakika= 0 ; dakika <= 60; dakika++){
      for(saniye; saniye <= 60; saniye++){
        saniye++;}
                dakika++;}
                      saat++;}
cout << saat << ":" << dakika << ":" << saniye << endl;
return 0;
}
