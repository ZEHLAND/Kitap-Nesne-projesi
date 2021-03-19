class Nokta3D : public Nokta2D{ //Nokta3D adlý class tanýmlandý ve Nokta2D classýndan kalýtým aldý
	private: 
		double Z; //double Z deðiþkenli private üyesi tanýmlandý
	public:
		void setZ(double); //setZ adlý public üyesi tanýmlandý
		double uzaklik(double,double,double,double,double,double); //Uzaklýk fonksiyon public üyesi olarak tanýmlandý
};
