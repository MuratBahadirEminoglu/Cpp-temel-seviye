/*    Switch Çoklu Seçim Deyimi( Multiple Selection Statement)
  Bu deyim verilen ifadenin değerine göre verilen komut ya da komut satırlarını çalıştırır.
  Verilen ifadenin değerinin sıralı giden(ordinal) olması gerekir. Bu ifadenin için kullanılacak değişken tipleri 
  int ve char olabilir. Float ya da double gibi ondalık değerler olamaz.

  ******* Switch case yapisi*******

  switch(ifade){
     case  <değer1>:
            işlem && komut;
            break;
     case   <deger2>:
            işlem && komut;
            break;
     case   <degersayisi>:
            işlem && komut;
            break;

default:
        komutN;
       }
        
   Bu komut switch yanında verilen ifadenin değeri blok içerisinde case sözcüklerin yanında verilen değerlerden
   hangisine uyuyor ise, o satırdaki komut yada komutlar çalıştırır.

   burada break deymi kullanılmaz ise(köşeli parantez içinde olması onun istenirse yazılmayabileceği anlamına gelir) 
   hangi satır uyuyorsa , o satırdaki komutlar çalıştırılır; ancak blok sonuna uyan durumun altındaki satırlarda çalıştırılır. */
