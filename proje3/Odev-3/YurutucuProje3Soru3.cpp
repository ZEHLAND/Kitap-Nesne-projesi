#include "Nokta2D.h" //Kitap adýnda header dosyasý include edildi
#include "Nokta3D.h" //Kitap adýnda header dosyasý include edildi
#include <iostream> //Iostream kütüphanesi include edildi
#include<string> //String kütüphanesi include edildi
#include<locale.h> //Türkçe karakter kütüphanesi
#include<Math.h> //Matematik Kütüphanesi include edildi
using namespace std; //std namespacesi kullanýldý.

int main(){
	setlocale(LC_ALL, "Turkish"); //Türkçe karakter Kodu
	
	double x1,y1,z1,x2,y2,z2; //kordinat deðiþkenleri tanýmlandý
	cout << "Ýlk Noktanýn x,y ve z kortinatlarýný girin: "; //Kullanýcýdan 1.nokta alýndý
	cin >> x1 >> y1 >> z1;
	cout << "Ýkinci Noktanýn x,y ve z kortinatlarýný girin: "; //Kullanýcýdan 2.nokta alýdný
	cin >> x2 >> y2 >> z2;
	
	Nokta3D A; //A noktasý oluþturuldu
	Nokta3D B; //B noktasý oluþturuldu
	A.setX(x1); //A noktasýnýn x deðeri verildi
	A.setY(y1); //A noktasýnýn y deðeri verildi
	A.setZ(z1); //A noktasýnýn z deðeri verildi
	B.setX(x2); //B noktasýnýn x deðeri verildi
	B.setY(y2); //B noktasýnýn y deðeri verildi
	B.setZ(z2); //B noktasýnýn z deðeri verildi
	
	cout << "Ýki Nokta Arasýndaki Uzaklýk: " << A.uzaklik(x1,y1,z1,x2,y2,z2); //A ile B arasýndaki mesafe ayný olduðu için A.uzakik = B.uzaklik olup uzaklik fonksiyonu çaðrýldý
	
	
	
	return 0;
}
