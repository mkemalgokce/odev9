


#include <vector>
#include <iostream>
using namespace std;

typedef struct
{
	int eleman;
	int adet;
} Pair; // histogramda her bir elemandan kacar adet oldugunu gosterebilecek veri tipi 
template<typename T>
class AkilliDizi /* TEMPLATE OLACAK */
{
	// Dizinin tum elemanlarini ekrana basabilecek sekilde << operatorunu asiri yukleyiniz
	//TEMPLATE OLACAK
	friend ostream& operator<<(ostream& out, const AkilliDizi<T>& other);
public:
	AkilliDizi(); /* bos bir akilli dizi olusturur*/
	AkilliDizi(T i); /* tek elamanlý ve eleman degeri i olan bir akilli dizi olusturur
	TEMPLATE OLACAK*/
	AkilliDizi(const T* intDizi, unsigned int elemanSayisi); /* elemanSayisi elamanli bir
	akilli dizi olusturur ve intDizi elamanlarini akilli diziye atar TEMPLATE OLACAK*/
	AkilliDizi(const vector<T>& intVector); /*vektoru akilli diziye donusturur TEMPLATE
	OLACAK*/
	~AkilliDizi();
	AkilliDizi(const AkilliDizi<T>& other);
	const AkilliDizi& operator=(const AkilliDizi& other);
	void operator[](T verilenDeger);
	AkilliDizi& operator +(T verilenDeger);
	/* Dinamik bellek yonetimi icin gerekli olan fonksiyonlari yaziniz TEMPLATE OLACAK*/
	/* [] operatorunu asiri yukleyiniz. Verilen indeks degeri elemanSayisindan buyukse hata
	mesaji yazdirin. TEMPLATE OLACAK*/
	/* Akilli diye bir int degeri ekleyebilecek sekilde + operatorunu yukleyin TEMPLATE
	OLACAK*/
	void sirala(); /* diziyi buyukten kucuge siralar TEMPLATE OLACAK*/
	void histogram(vector<Pair>& hist) const; /* veri icinde gecen her bir elemanin kac kez
	//oldugunu bulur ve bunu vektor<Pair> olarak donderir TEMPLATE OLACAK*/

	unsigned kacTane(T i) const; /* veri icinde i degerinden kac tane olduðunu sayar
	//TEMPLATE OLACAK*/
	bool varMi(T i) const; /* veri icinde i degeri mevcutsa dogru degilse yanlis donderir
	//TEMPLATE OLACAK*/
private:
	T* veri; /* veriyi dinamik olarak tutar TEMPLATE OLACAK*/
	unsigned int kapasite; /* Kapasite doldugunda yeni alinacak yer mevcut kapasitenin yarisi
	olmali. Ýhtiyac daha

	fazlaysa ihtiyac + mevcut kapasitenin yarisi kadar

	yer alinmali.*/
	unsigned int elemanSayisi; /* dizideki mevcut eleman sayisini verir */
};
