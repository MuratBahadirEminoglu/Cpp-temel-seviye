/* Tekrar sayısının belli olduğu döngülere en güzel örnek for döngüleridir. Bu dongülerin kullanım 
şekli ve çalışma mantığını gösterimi aşagıdaki şekildedir. */

/* for(döngü değişkeni = başlangıc degeri; <koşul> ; artırma yada azaltma işlemi){
          tekrarlanan işlemler 
          }  */
1.örnek 
    for ( int i = 0 ; i <=10 ; ++i){
        cout << i << endl;}           // i değişkenini sıfırdan başlat 10 sayısına kadar birer birer arttırarak yaz.

2. örnek     
    //ekrana alt alta 5 kere bahadır yazan program
       for(int i = 0 ; i <= 5; i++){
cout << "bahadir" << endl;
}
//   5 kez yazdırma işlemini for komut yapısı içerisinde de yazdırabiliriz.  
  for( int i  = 0 ; i<5 ; cout << "bahadir",i++)
    //  veya 
  for( int i  = 0 ; cout << "bahadir", i<5 ;i++)
