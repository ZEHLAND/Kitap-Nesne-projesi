#include <iostream> //Iostream kütüphanesi include edildi
using namespace std; //std namespacesi kullanýldý.

class Kitap{ //Kitap adýnda class tanýmlandý
	private: //private üye sýnýfý tanýmlandý
		std::string ad,yazar,tur,yayinEvi,isbnNo; //string tipinde private üyeler tanýmlandý
		int sayfaSayisi,baskiYili,baskiSayisi; //int tipinde private üye tanýmlandý
		double fiyat; //double tipinde private üye tanýmlandý
	public: //public üye sýnýfý tanýmlandý
		/*Set Fonksiyonlarý*/ 
		void setAd(string); //setAd adýnda set fonksiyonu tanýmlandý
		void setYazar(string); //setYazar adýnda set fonksiyonu tanýmlandý
		void setTur(string); //setTur adýnda set fonksiyonu tanýmlandý
		void setYayinEvi(string); //setYayinEvi adýnda set fonksiyonu tanýmlandý
		void setIsbnNo(string); //setIsbnNo adýnda set fonksiyonu tanýmlandý
		void setSayfaSayisi(int); //setSayfaSayisi adýnda set fonksiyonu tanýmlandý
		void setBaskiYili(int); //setBaskiYili adýnda set fonksiyonu tanýmlandý
		void setBaskiSayisi(int); //setBaskiSayisi adýnda set fonksiyonu tanýmlandý 
		void setFiyat(double);//setFiyat adýnda set fonksiyonu tanýmlandý
		
		/*Get Fonksiyonlarý*/
		string getAd(); //getAd adýnda get fonksiyonu tanýmlandý
		string getYazar(); //getYazar adýnda get fonksiyonu tanýmlandý
		string getTur(); //getTur adýnda get fonksiyonu tanýmlandý
		string getYayinEvi(); //getYayinEvi adýnda get fonksiyonu tanýmlandý
		string getIsbnNo(); //getIsbnNo adýnda get fonksiyonu tanýmlandý
		int getSayfaSayisi(); //getSayfaSayisi adýnda get fonksiyonu tanýmlandý
		int getBaskiYili(); //getBaskiYili adýnda get fonksiyonu tanýmlandý
		int getBaskiSayisi(); //getBaskiSayisi adýnda get fonksiyonu tanýmlandý
		double getFiyat(); //getFiyat adýnda get fonksiyonu tanýmlandý
};
