/* A dan Z'ye İngilizce karakterleri ekranda gösteren programı C++ ile yazınız */

/* not : A'dan Z'ye karakterler, ASCII kod tablosunda 65 ile 90 rakamları arasında yer alır.
A'dan Z'ye karakterleri ekranda gösterirken aslında bu rakamların ASCII kod karşılıklarını
görürüz.
*/
#include <iostream>
using namespace std;
int main(){

for(int i =65 ; i <= 90; i++){
    cout <<  char(i) << " ";
    
}
return 0;
}
