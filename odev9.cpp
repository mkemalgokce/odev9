
#include"odev9.h"


template<class T>
AkilliDizi<T>::AkilliDizi() {
	veri = nullptr;
	elemanSayisi = 0;
	kapasite = 0;
}
template<class T>
AkilliDizi<T>::AkilliDizi (T i) {
	elemanSayisi = 1;
	kapasite = elemanSayisi;
	veri = new T[elemanSayisi];
	if (veri == nullptr)
		exit(-1);
	veri[0] = i;
	


}
template<class T>
AkilliDizi<T>::AkilliDizi(const T* intDizi, unsigned int elemanSayisi) {

	this->elemanSayisi = elemanSayisi;
	kapasite = elemanSayisi;
	veri = new T[this->elemanSayisi];
	if (veri == nullptr)
		exit(-1);
	for (int i = 0; i < elemanSayisi; ++i)
		veri[i] = intDizi[i];
}
template<class T>
AkilliDizi<T>::AkilliDizi(const vector<T>& intVector) {

	intVector.size() = elemanSayisi;
	kapasite = elemanSayisi;
	veri = new T[elemanSayisi];
	if (veri == nullptr)
		exit(-1);
	for (int i = 0; i < elemanSayisi; ++i)
		veri[i] = intVector[i];

}
template<class T>
AkilliDizi<T>::~AkilliDizi(){
	
	if (veri != nullptr)
		delete[] veri;
	

}
template<class T>
AkilliDizi<T>::AkilliDizi(const AkilliDizi<T>& other) {
	elemanSayisi = other.elemanSayisi;
	kapasite = other.kapasite;
	veri = nullptr;
	if(elemanSayisi=!0){
	veri = new T[kapasite];
	if (veri == nullptr)
		exit(-1);
	for (int i = 0; i < elemanSayisi; ++i)
		veri[i] = other.veri[i];

	}
}
template<class T>
const AkilliDizi<T>& AkilliDizi<T>::operator=(const AkilliDizi& other) {
	if (this == other)
		return *this;
	if (veri != nullptr)
		delete[] veri;
	elemanSayisi = other.elemanSayisi;
	kapasite = other.kapasite;
	veri = new T[kapasite];
	if (veri == nullptr)
		exit(-1);
	for (int i = 0; i < elemanSayisi; ++i)
		veri[i] = other.veri[i];
	return *this;
}
template<class T>
void AkilliDizi<T>::operator[](T verilenDeger) {
	if (verilenDeger > elemanSayisi)
		cout << "Hata , verilen değer eleman sayısından buyuk!" << endl;

}
template<class T>
AkilliDizi<T>& AkilliDizi<T>::operator +(T verilenDeger) {
	vector<T> x;
	for (int i = 0; i < elemanSayisi; ++i) {
		x.push_back(veri[i]);
	}
	if (veri != nullptr)
		delete[] veri;
	veri = new T[elemanSayisi + 1];
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
template<class T>
ostream& operator << (ostream& out, const AkilliDizi<T>& dizi)
{
	for (unsigned i = 0; i < dizi.elemanSayisi; i++)
		out << dizi.veri[i] << " ";
	return out;
}

