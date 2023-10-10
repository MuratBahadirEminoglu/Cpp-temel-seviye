/* X ve Y koordinat düzleminde girilen degerlere göre en yakın noktayı bulan program */
#include <iostream>
#include <math.h>

using namespace std;
void orijinenyakin(int a, int b,int c,int d,int e,int t);
int main(int argc, char **argv)
{	int a,b,c,d,e,t;
	cout << " 1.koordinati giriniz: ";
	cin >> a >> b;
	cout << "2.koordinati  giriniz: ";
	cin >> c >> d;
	cout << ".korordinati giriniz:";
	cin >> e>> t;
	
	orijinenyakin(a,b,c,d,e,t);
	
	
	return 0;
}
void orijinenyakin(int a, int b,int c,int d,int e,int t){
			int mesafe,mesafe1,mesafe2;
		mesafe = sqrt(pow(a,2)+pow(b,2));
	mesafe1 = sqrt(pow(c,2)+pow(d,2));
	mesafe2 = sqrt(pow(e,2)+pow(t,2));
	
	if( mesafe2> mesafe && mesafe1> mesafe){
			cout << "yakin olan: " <<"A(" << a << "," << b << ")"; }
	if( mesafe2> mesafe1 && mesafe> mesafe1){
			cout << "yakin olan: " <<"B(" << c << "," << d << ")"; }
	if( mesafe> mesafe2 && mesafe1> mesafe2){
			cout << "yakin olan: " <<"C(" << e << "," << t << ")"; }

}
