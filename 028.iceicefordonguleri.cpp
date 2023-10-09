/* 2 basamaklı ikiz asal sayılardan(aralarındaki fark 2 olan asal sayılar) en büyük çiftini bulan C++ programı */


#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	int buyuka, buyukb;
    for (int a = 1; a <= 100; ++a) {
        for (int b = 1; b <= 100; ++b) {
            if (a % 2 != 0 && a % 3 != 0 && b % 2 != 0 && b % 3 != 0) {
                if (a - b == 2 ) {
                    buyuka = a;
                    buyukb = b;
                    
                }
                
            }
        }
    }
     if (buyuka != 0 && buyukb != 0){
       cout << "En buyuk ikiz asal cift: " << buyuka << " ve " << buyukb << endl;
    } 

    return 0;
}
    
