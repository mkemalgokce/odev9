
#include<iostream>
#include"odev9.h"
#include<vector>

using namespace std;
template<typename T>
ostream & operator<<(ostream& out, const AkilliDizi<T>& other) {
	for (int i = 0; i < other.elemanSayisi; ++i)
		out << i << " ";

	cout << endl;
}
template<typename T>
AkilliDizi<T>::AkilliDizi() {
	veri = nullptr;
	elemanSayisi = 0;
	kapasite = 0;

	

}
template<typename T>
AkilliDizi<T>::AkilliDizi (T i) {
	kapasite = elemanSayisi;
	veri = new T(kapasite);
	veri[0] = i;
	elemanSayisi = 1;


}
template<typename T>
AkilliDizi<T>::AkilliDizi(const T* intDizi, unsigned int elemanSayisi) {

	this->elemanSayisi = elemanSayisi;
	kapasite = elemanSayisi;
	veri = new T(kapasite);
	for (int i = 0; i < elemanSayisi; ++i)
		veri[i] = intDizi[i];
}
template<typename T>
AkilliDizi<T>::AkilliDizi(const vector<T>& intVector) {

	intVector.size() = elemanSayisi;
	kapasite = elemanSayisi;
	veri = new T(kapasite);
	for (int i = 0; i < elemanSayisi; ++i)
		veri[i] = intVector[i];

}
template<typename T>
AkilliDizi<T>::~AkilliDizi(){
	
	if (veri != nullptr)
		delete[] veri;
	

}
template<typename T>
AkilliDizi<T>::AkilliDizi(const AkilliDizi<T>& other) {
	elemanSayisi = other.elemanSayisi;
	kapasite = other.kapasite;
	veri = nullptr;
	delete[] veri;
	veri = new T(kapasite);
	for (int i = 0; i < elemanSayisi; ++i)
		veri[i] = other.veri[i];

	
}
template<typename T>
const AkilliDizi<T>& AkilliDizi<T>::operator=(const AkilliDizi& other) {
	if (this = other)
		return *this;
	if (veri != nullptr)
		delete[] veri;
	elemanSayisi = other.elemanSayisi;
	kapasite = other.kapasite;
	veri = new T(kapasite);
	for (int i = 0; i < elemanSayisi; ++i)
		veri[i] = other.veri[i];
	return *this;
}
template<typename T>
void AkilliDizi<T>::operator[](T verilenDeger) {
	if (T > elemanSayisi)
		cout << "Hata , verilen deðer eleman sayýsýndan buyuk!" << endl;

}
template<typename T>
AkilliDizi<T>& AkilliDizi<T>::operator +(T verilenDeger) {
	vector<T> x;
	for (int i = 0; i < elemanSayisi; ++i) {
		x.push_back(veri[i]);
	}
	if (veri != nullptr)
		delete[] veri;
	veri = new T(elemanSayisi + 1);
	for (int i = 0; i < elemanSayisi; ++i) {
		veri[i] = x[i];
	}
	veri[elemanSayisi] = verilenDeger;
	return *this;




}
template<typename T>
void AkilliDizi<T>::sirala() {
	T temp;
	for (int i = 0; i < elemanSayisi; ++i) {
		for (int j = 0; j < i; ++j) {
			if (veri[j] > veri[j + 1]) {
				temp = veri[j];
				veri[j] = veri[j + 1];
				veri[j + 1] = temp;

			}


		}

	}

}
