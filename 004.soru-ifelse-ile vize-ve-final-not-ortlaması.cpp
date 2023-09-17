/*bir dersten alınan ara sınav(vize) , sonsınav(final) ve devam puanları girilip ortalamayı hesapladıktan sonra ,dersten geçip
kaldığını ekrana yazan C++ programını yazınız.

ortalama puanı = arasınav*0.4 + final*0.5 + devampuanı*0.1 
formülü ile hesaplanır .Ortalama 60 ve üstünde ise öğrenci dersten geçmiştir.aksi halde kalmıştır.
ÖRNEK ÇALIŞMA:
 Ara sınav puanını giriniz: 80
 final sınav puanını giriniz: 80
 devam puanını giriniz: 75 
  --------------------------
  ortalama puanınız: 79.5
  tebrikler geçtiniz */
          #include <iostream>

using namespace std;

int main()
{

    float arasinav,sonsinav,devampuani;
    float ortalamapuani;
        cout <<"ara sinav puanini giriniz= ";
    cin >> arasinav;
        cout <<"final sinavi puanini giriniz= ";
    cin >> sonsinav;
        cout <<"devam puanini giriniz= ";
    cin >> devampuani;


    ortalamapuani = (arasinav*40 + sonsinav*50 + devampuani*10)/100;

    cout << "-------------------------------------"<<endl;
    cout << "ortalama puaniniz: "<< ortalamapuani << endl;

    if(ortalamapuani < 60 ){
        cout <<"dersten kaldiniz.";}
    else{
        cout <<"Tebrikler gectiniz.";}
    return 0;
}
