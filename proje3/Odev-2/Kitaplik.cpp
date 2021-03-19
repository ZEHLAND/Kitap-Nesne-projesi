#include "Kitap.h" //Kitap adýnda header dosyasý include edildi
#include "Kitaplik.h" //Kitap adýnda header dosyasý include edildi
#include <iostream> //Iostream kütüphanesi include edildi
#include<string> //String kütüphanesi include edildi
using namespace std; //std namespacesi kullanýldý.

Kitap * pKitap[10]; //Kitaplarý Tutacak 10 Boyutlu Pointer Dizisi Tanýmlandý

int Kitaplik::kitapliktaKitapSayisi(){ //Kitaplýktaki sayýlarý gösterecek fonksiyon
	int i,sayac=0; //sayac kitaplýkta olan kitaplarý sayacak
	int diziBoyutu = sizeof(kitaplikDizisi)/sizeof(*kitaplikDizisi); // Toplam dizi boyutu
	for(i=0;i<diziBoyutu ;i++){ //Dizi boyutuna kadar saydýr
		if(kitaplikDizisi[i] != 0) // dizide 0 olmayan doludur 
			sayac++; // 0 olmayanlarý yani dolu olanlarý say
	}
	return sayac; //return et
}

//Kitaplarý kütüphaneye ekleecek fonksiyon
void Kitaplik::kitapEkle(string setAd,string setYazar,string setTur,string setYayinEvi,string setIsbnNo,int setSayfaSayisi,int setBaskiYili,int setBaskiSayisi,double setFiyat){
	int bosYer = 10-kitapliktaKitapSayisi(),i; //Kitaplýkta olan boþ yer sayýsý
	if(bosYer == 0) //Eðe boþ yer yoksa
		cout << "---------------\nKitaplýkla Boþ Yer Yok...\n---------------\n\n"; //Hata ver
	else{ //Boþ yer varsa
		for(i=0;i<10;i++){ //1-10 arasý döngü oluþtur
			if(kitaplikDizisi[i] == 0){ //Ýlk gördüðün boþluða
				
				pKitap[i] = new Kitap; //Kitap Classýndan Pointer Kitap Dizisinden nesne oluþturuldu
				pKitap[i]->setAd(setAd); //Kitap classý içindeki set fonksiyon ile ad tanýmlandý
				pKitap[i]->setYazar(setYazar); //Kitap classý içindeki set fonksiyon ile yazar tanýmlandý
				pKitap[i]->setTur(setTur); //Kitap classý içindeki set fonksiyon ile tur tanýmlandý
				pKitap[i]->setYayinEvi(setYayinEvi); //Kitap classý içindeki set fonksiyon ile yayýn evi tanýmlandý
				pKitap[i]->setIsbnNo(setIsbnNo); //Kitap classý içindeki set fonksiyon ile isbnNo tanýmlandý
				pKitap[i]->setSayfaSayisi(setSayfaSayisi); //Kitap classý içindeki set fonksiyon ile sayfa sayýsý tanýmlandý
				pKitap[i]->setBaskiYili(setBaskiYili); //Kitap classý içindeki set fonksiyon ile baský yýlý tanýmlandý
				pKitap[i]->setBaskiSayisi(setBaskiSayisi); //Kitap classý içindeki set fonksiyon ile baský sayýsý tanýmlandý
				pKitap[i]->setFiyat(setFiyat); //Kitap classý içindeki set fonksiyon ile fiyat tanýmlandý
				
				break; //Kitap ekledikten sonra döngüden çýk
			}
		}
		kitaplikDizisi[i] = (i+1); //Kitaplýðý tutan dizide o satýrý dolu yap
		cout << "---------------\nKitaplýða Kitap Baþarýyla Eklendi...\n---------------\n\n"; //Baþarý mesajý bastýr.
	}
}

void Kitaplik::kitaplar(){ //Kitaplýktaki kitap bilgilerini çekecek fonksiyon
	int i; //Döngü için i tanýmlandý
	cout << "\n---------------";
	for(i=0;i<kitapliktaKitapSayisi();i++){ //Döngü 0 dan kitaplýktaki kitap sayýsýna kadar çalýþtýr
		cout << endl << "Kitabýn Adý: " << pKitap[i]->getAd(); //Get fonksiyonu ile ad bastýrýldý
		cout << endl << "Kitabýn Yazarý: " << pKitap[i]->getYazar(); //Get fonksiyonu ile yazar bastýrýldý
		cout << endl << "Kitabýn Türü: " << pKitap[i]->getTur(); //Get fonksiyonu ile tür bastýrýldý
		cout << endl << "Kitabýn Yayýn Evi: " << pKitap[i]->getYayinEvi(); //Get fonksiyonu ile yayýn evi bastýrýldý
		cout << endl << "Kitabýn IsbnNo: " << pKitap[i]->getIsbnNo(); //Get fonksiyonu ile isbnNo bastýrýldý
		cout << endl << "Kitabýn Sayfa Sayýsý: " << pKitap[i]->getSayfaSayisi(); //Get fonksiyonu ile sayfa sayýsý bastýrýldý
		cout << endl << "Kitabýn Baský Yýlý: " << pKitap[i]->getBaskiYili(); //Get fonksiyonu ile baský yýlý bastýrýldý
		cout << endl << "Kitabýn Baský Sayýsý: " << pKitap[i]->getBaskiSayisi(); //Get fonksiyonu ile baský sayýsý bastýrýldý
		cout << endl << "Kitabýn Fiyatý: " << pKitap[i]->getFiyat()<<endl; //Get fonksiyonu ile kitabýn Fiyatý bastýrýldý
	}
	cout << "\n---------------\n\n";
}
