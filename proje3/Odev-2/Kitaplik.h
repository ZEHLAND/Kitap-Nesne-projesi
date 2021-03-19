#include <iostream> //Iostream kütüphanesi include edildi
using namespace std; //std namespacesi kullanýldý

class Kitaplik{ //Kitaplýk adýnda class tanýmlandý
	private:
		int kitaplikDizisi[10] = {0,0,0,0,0,0,0,0,0,0}; //Kitaplarý tutacak dizi private olarak tanýmlandý
	public: 
		int kitapliktaKitapSayisi(); //Kitaplýktaki kitaplarý sayan fonksiyon public olarak tanýmlandý
		void kitapEkle(string,string,string,string,string,int,int,int,double); //Kitap eklemek için kitapEkle fonksiyonu public tanýmlandý
		void kitaplar(); //Kitaplarý listemelek için kitaplar fonksiyonu public tanýmlandý.
};


