#include "Nokta3D.h" //Kitap adýnda header dosyasý include edildi
#include <iostream> //Iostream kütüphanesi include edildi
#include<string> //String kütüphanesi include edildi
#include<Math.h>
using namespace std; //std namespacesi kullanýldý.

void Nokta3D::setZ(double zDegeri){ //Setz Fonksiyonu tanýmlandý
	Z = zDegeri; //Parametre olarak gelen zDegeri adlý parametre Z primary üyesine aktarýldý.
}

double Nokta3D::uzaklik(double Ax1,double Ay1, double Az1, double Bx1, double By1,double Bz1){ //Uzaklýk Hesabý
	return sqrt(pow((Ax1-Bx1),2) + pow((Ay1-By1),2) + pow((Az1-Bz1),2));
}
