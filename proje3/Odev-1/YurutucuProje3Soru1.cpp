#include <iostream> //Iostream kütüphanesi include edildi
#include "Kitap.h" //Kitap adýnda header dosyasý include edildi
#include<string> //String kütüphanesi include edildi
#include<locale.h>  // Türkçe karakter kütüphanesi include edildi
using namespace std; //std namespacesi kullanýldý.

int main() {
	setlocale(LC_ALL, "Turkish"); 
	string ad,yazar,tur,yayinEvi,isbnNo; //string tipinde private üyeler tanýmlandý
	int sayfaSayisi,baskiYili,baskiSayisi; //int tipinde private üye tanýmlandý
	double fiyat; //double tipinde private üye tanýmlandý
	int secim;
	
	Kitap kitapNesnesi; // Kitap Classýndan kitapNesnesi adýnda nesne oluþturuldu.
	
	/*Kullanýcýdan Deðerler Alýnýp deðiþkenlere atýldý */
	cout << "Lütfen Kitabýn Adýný Girin : ";
	cin >> ad;
	cout << "Lütfen Yazarýný Girin : ";
	cin >> yazar;
	cout << "Lütfen Kitabýn Türünü Girin : ";
	cin >> tur;
	cout << "Lütfen Kitabýn Yayýnevini Girin : ";
	cin >> yayinEvi;
	cout << "Lütfen isbnNo Girin : ";
	cin >> isbnNo;
	cout << "Lütfen Kitabýn Sayfa Sayýsýný Girin : ";
	cin >> sayfaSayisi;
	cout << "Lütfen Kitabýn Baský Yýlýný Girin : ";
	cin >> baskiYili;
	cout << "Lütfen Kitabýn Baský Sayýsýný Girin : ";
	cin >> baskiSayisi;
	cout << "Lütfen Kitabýn Fiyatýný Girin : ";
	cin >> fiyat;
	
	/* Oluþturduðum nesnenin set fonksiyonlarýna parametre gönderilip 
	üye deðiþkenlere deðer atandý*/
	kitapNesnesi.setAd(ad);
	kitapNesnesi.setYazar(yazar);
	kitapNesnesi.setTur(tur);
	kitapNesnesi.setYayinEvi(yayinEvi);
	kitapNesnesi.setIsbnNo(isbnNo);
	kitapNesnesi.setSayfaSayisi(sayfaSayisi);
	kitapNesnesi.setBaskiYili(baskiYili);
	kitapNesnesi.setBaskiSayisi(baskiSayisi);
	kitapNesnesi.setFiyat(fiyat);
	
	/*Ekrana Bilgi Yazýsý Bastýrýldý*/
	cout << endl << "------------------------------------------------------------------" << endl << "Sorgulama Ekraný Lütfen Sorgulama Yapmak Ýstediðiniz Numarayý Girin" << endl << "------------------------------------------------------------------"<<endl;
 
 	// Kullanýcýdan Sürekli Sorgulama Yapmasý Ýçin Do While Döngüsü Oluþturuldu.
	do{
		cout << "1-Kitap Adý\n2-Yazar Adý\n3-Kitabýn Türü\n4-Kitabýn Yayýnevi\n5-Kitabýn isbnNo\n6-Kitabýn Sayfa Sayýsý\n7-Kitabýn Baský Yýlý\n8-Kitabýn Baský Sayýsý Adý\n9-Kitabýn Fiyatý\n0-Çýkýþ\n";
		cout << "Seçiminiz : ";
		cin  >> secim;
		/*Bilgiler Ekrana yazdýrýlýp seçimi deðiþkene aktarýldý*/
		
		if(secim == 1) //Seçim 1 ise
			cout << kitapNesnesi.getAd() << endl << endl; // Adý çaðýr
		else if(secim == 2) // Seçim 2 ise
			cout << kitapNesnesi.getYazar() << endl << endl; // Yazarý çaðýr
		else if(secim == 3) //Seçim 3 ise
			cout << kitapNesnesi.getTur() << endl << endl; // Turu çaðýr
		else if(secim == 4) // Seçim 4 ise 
			cout << kitapNesnesi.getYayinEvi() << endl << endl; // Yayýnevini Çaðýr
		else if(secim == 5) // Seçim 5 ise
			cout << kitapNesnesi.getIsbnNo() << endl << endl; //IsbnNo çaðýr
		else if(secim == 6) //Seçim 6 ise 
			cout << kitapNesnesi.getSayfaSayisi() << endl << endl; // Sayfa Sayýsýný Çaðýr
		else if(secim == 7) //Seçim 7 ise
			cout << kitapNesnesi.getBaskiYili() << endl << endl; // Baský Yýlýný Çaðýr
		else if(secim == 8) //Seçim 8 ise
			cout << kitapNesnesi.getBaskiSayisi() << endl << endl; //Baský Sayýsýný Çaðýr
		else if(secim == 9) //Seçim 9 ise
			cout << kitapNesnesi.getFiyat() << endl << endl; //Fiyatý çaðýr
		else if(secim == 0) //Seçim 0 ise
			break; // Programý Sonlandýr
		else{ //Seçim 0-9 Arasý deðiklse
			break; // Programý sonlandýr
			cout << "Yanlýþ Seçim Program Sonlandýrýldý." << endl; //Uyarý Mesajý Ver
		}
			
	}while(secim != 0); //Seçim 0 olana kadar çalýþtýr.
	
	
	return 0;
}
