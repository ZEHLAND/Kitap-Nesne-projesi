#include "Kitap.h" //Kitap adýnda header dosyasý include edildi
#include <iostream> //Iostream kütüphanesi include edildi
#include<string> //String kütüphanesi include edildi
using namespace std; //std namespacesi kullanýldý.

/*Üye deðiþkenlerine deðer atamak için
Set fonksiyonlarý tanýmlandý ve gelen parametreler üye deðiþkenine
eþitlendi.
*/
void Kitap::setAd(string isim){
	ad = isim;
}
void Kitap::setYazar(string yazarAdi){
	yazar=yazarAdi;
}
void Kitap::setTur(string turAdi){
	tur = turAdi;
}
void Kitap::setYayinEvi(string yayinEviAdi){
	yayinEvi = yayinEviAdi;
}
void Kitap::setIsbnNo(string IsbnNoAdi){
	isbnNo = IsbnNoAdi;
}
void Kitap::setSayfaSayisi(int alSayfaSayisi){
	sayfaSayisi = alSayfaSayisi;
}
void Kitap::setBaskiYili(int alBaskiYili){
	baskiYili = alBaskiYili;
}
void Kitap::setBaskiSayisi(int alBaskiSayisi){
	baskiSayisi = alBaskiSayisi;
}
void Kitap::setFiyat(double alFiyat){
	fiyat = alFiyat;
}

/*Üye deðiþkenlerinin deðerlerini çekmek için
Get fonksiyonlarý tanýmlandý ve üye deðiþkenlerinin deðerleri
return edildi.
*/
string Kitap::getAd(){return ad;};
string Kitap::getYazar(){return yazar;};
string Kitap::getTur(){return tur;};
string Kitap::getYayinEvi(){return yayinEvi;};
string Kitap::getIsbnNo(){return isbnNo;};
int Kitap::getSayfaSayisi(){return sayfaSayisi;};
int Kitap::getBaskiYili(){return baskiYili;};
int Kitap::getBaskiSayisi(){return baskiSayisi;};
double Kitap::getFiyat(){return fiyat;};

