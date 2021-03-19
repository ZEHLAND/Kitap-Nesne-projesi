#include <iostream> //Iostream kütüphanesi include edildi
#include "Kitaplik.h" //Kitap adýnda header dosyasý include edildi
#include<string> //String kütüphanesi include edildi
#include<locale.h>  // Türkçe karakter kütüphanesi include edildi
using namespace std; //std namespacesi kullanýldý.

int main(){
	setlocale(LC_ALL, "Turkish");  //Türkçe karakter kodu
	
	int secim,sayfaSayisi,baskiYili,baskiSayisi; //Kullanýcýlardan alýnacak deðerler ve seçim deðiþkeni tanýmlandý
	string ad,yazar,tur,yayinEvi,isbnNo; //Kullanýcýdan alýnacak string deðerler tanýmlandý
	double fiyat; //Kullanýcýdan alýnacak fiyat tanýmlandý
	
	Kitaplik benimKitapligim; //benimKitapligim adýnda kitaplýk nesnesi oluþturuldu
	
	while(1){ //Kullanýcý kendi çýkana kadar sonsuz döngü oluþturuldu
		cout << "1-Kitap Ekle\n2-Kitaplýktaki Kitap Sayýsý\n3-Tüm Kitaplara Ait Bilgiler\n0-Çýkýþ\n\nSeçiminiz: "; //Bilgi Mesajý verildi
		cin >> secim; //seçim alýndý
		if(secim==1){ //Seçim 1 ile Kullanýcýdan kitap eklemek için bilgiler alýndý
			cout << "Kitap Adýný Girin: ";
			cin >> ad;
			cout << "Kitabýn Yazarýný Girin: ";
			cin >> yazar;
			cout << "Kitabýn Türünü Girin: ";
			cin >> tur;
			cout << "Kitabýn Yayýn Evini Girin: ";
			cin >> yayinEvi;
			cout << "Kitabýn isbnNo Girin: ";
			cin >> isbnNo;
			cout << "Kitabýn Sayfa Sayýsýný Girin: ";
			cin >> sayfaSayisi;
			cout << "Kitabýn Baský Yýlýný Girin: ",
			cin >> baskiYili;
			cout << "Kitabýn Baský Sayýsýný Girin: ";
			cin >> baskiSayisi;
			cout << "Kitabýn Fiyatýný Girin: ";
			cin >> fiyat;
			
			benimKitapligim.kitapEkle(ad,yazar,tur,yayinEvi,isbnNo,sayfaSayisi,baskiYili,baskiSayisi,fiyat);
			//benimKitapligim nesnesine tanýmlý kitapEkle fonksiyonu ile kitaplýða kitap eklendi.	
		}
		else if(secim==2) //Seçim 2 ise kitaplýktaki toplam kitap sayýsýný bastýr
			cout << "---------------\nKitaplýkta Toplam : " << benimKitapligim.kitapliktaKitapSayisi() << " Adet Kitap Mevcut\n---------------\n\n";
		else if(secim==3) //Seçim 3 ise kitaplýktaki kitaplarýn bilgilerini bastýr
			benimKitapligim.kitaplar();
		else if(secim == 0) //Seçim 0 ise döngüyü sonlandýr.
			break;
		else{ // seçim 0-1-2-3 dýþýnda bir þey ise hata bastýrýp döngüden çýk
			cout << "Hatalý Tuþlama Yapýldý.";
			break;
		}
		
	}
	cout << "\nProgram Sonlandýrýldý."; //Programý bitiþ mesajý bastýr.
	
	
	return 0;
}

