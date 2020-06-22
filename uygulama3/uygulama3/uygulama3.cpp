// uygulama3.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//


#include <iostream>

#include <string>

#include <sstream>

using namespace std;



int boy[10000];

int no[10000];

char ogrenciad[100][20];

int ogrencisayisi;



int anaMenu()

{



	int secim;



	std::cout << "1-Kayit Ekle" << endl;

	std::cout << "2-Kayit Degistir" << endl;

	std::cout << "3-Kayit Listele" << endl;

	std::cout << "4-Ogrenci Sayisi" << endl;

	std::cout << "5-En Buyuk Boy " << endl;

	std::cout << "6-En Kucuk Boy" << endl;

	std::cout << "7-Boylarin Toplami" << endl;

	std::cout << "8-Boylarin Ortalamasi" << endl;

	std::cout << "99-Cikis" << endl;

	std::cout << "Seciminiz: ";

	std::cin >> secim;



	return secim;

}





int veriEkle()



{

	int i, j, sonKayitTut;

	sonKayitTut = 0;

	int sonKayit = (sizeof ogrenciad / sizeof * ogrenciad);



	for (size_t i = 0; i < sonKayit; i++)

	{

		if (ogrenciad[i][0])

		{

			sonKayitTut += 1;

		}

		else

		{

			break;

		}

	}



	std::cout << sonKayitTut + 1;

	std::cout << ". Ogrenci Isim : ";

	std::cin >> ogrenciad[sonKayitTut];



	std::cout << sonKayitTut + 1;

	std::cout << ". Ogrenci No : ";

	std::cin >> no[sonKayitTut];



	std::cout << sonKayitTut + 1;

	std::cout << ". Ogrenci Boy : ";

	std::cin >> boy[sonKayitTut];



	system("CLS");



	return 0;

};



int veriListele()

{

	system("CLS");



	int i, j, sonKayitTut;

	sonKayitTut = 0;

	int sonKayit = (sizeof ogrenciad / sizeof * ogrenciad);



	for (size_t i = 0; i < sonKayit; i++)

	{

		if (ogrenciad[i][0])

		{

			std::cout << i + 1;

			std::cout << ". Ogrenci Isim : ";

			std::cout << ogrenciad[i] << endl;



			std::cout << i + 1;

			std::cout << ". Ogrenci No : ";

			std::cout << no[i] << endl;



			std::cout << i + 1;

			std::cout << ". Ogrenci Boy : ";

			std::cout << boy[i] << endl;



			std::cout << endl;

		}

	}





	return 0;

};



int veriDegistir()

{

	system("CLS");

	int indis = 0;



	std::cout << "Degistirilecek indisi giriniz : ";

	std::cin >> indis;



	std::cout << "Degistirilecek kayit : " << endl;

	std::cout << ogrenciad[indis - 1] << endl;

	std::cout << no[indis - 1] << endl;

	std::cout << boy[indis - 1] << endl;





	std::cout << "Ogrenci Isim : ";

	std::cin >> ogrenciad[indis - 1];





	std::cout << "Ogrenci No : ";

	std::cin >> no[indis - 1];





	std::cout << "Ogrenci Boy : ";

	std::cin >> boy[indis - 1];







	return 0;

};



int veriSayisi()

{

	system("CLS");



	int i, j, sonKayitTut;

	sonKayitTut = 0;

	int sonKayit = (sizeof ogrenciad / sizeof * ogrenciad);

	j = 0;



	for (size_t i = 0; i < sonKayit; i++)

	{

		if (ogrenciad[i][0])

		{

			j = j + 1;

		}

	}



	std::cout << "Ogrenci Sayisi : ";

	std::cout << j << endl << endl;



	return 0;

};



int enBuyukBoy()

{

	system("CLS");



	int i, j, enBuyukTut;

	int sonKayit = (sizeof ogrenciad / sizeof * ogrenciad);

	j = 0;



	enBuyukTut = 0;

	for (size_t i = 0; i < sonKayit; i++)

	{

		if (ogrenciad[i][0])

		{

			if (boy[i] > enBuyukTut)

			{

				enBuyukTut = boy[i];

				j = i;

			}



		}

	}



	std::cout << "En Buyuk Boy : ";

	std::cout << enBuyukTut << endl;

	std::cout << "En Buyuk Boylu ogrenci ismi : ";

	std::cout << ogrenciad[j] << endl;

	std::cout << "En Buyuk Boylu ogrenci No : ";

	std::cout << no[j] << endl;

	return 0;

};



int enKucukBoy()

{

	system("CLS");



	int i, j, enKucukTut;

	int sonKayit = (sizeof ogrenciad / sizeof * ogrenciad);

	j = 0;



	enKucukTut = 10000;

	for (size_t i = 0; i < sonKayit; i++)

	{

		if (ogrenciad[i][0])

		{

			if (boy[i] < enKucukTut)

			{

				enKucukTut = boy[i];

				j = i;

			}



		}

	}



	std::cout << "En Kucuk Boy : ";

	std::cout << enKucukTut << endl;

	std::cout << "En Kucuk Boylu ogrenci ismi : ";

	std::cout << ogrenciad[j] << endl;

	std::cout << "En Kucuk Boylu ogrenci No : ";

	std::cout << no[j] << endl;

	return 0;

};



int BoyToplami()

{

	system("CLS");



	int i, j, enBoyToplami;

	int sonKayit = (sizeof ogrenciad / sizeof * ogrenciad);

	j = 0;



	enBoyToplami = 0;

	for (size_t i = 0; i < sonKayit; i++)

	{

		if (ogrenciad[i][0])

		{



			enBoyToplami = enBoyToplami + boy[i];





		}

	}



	std::cout << "Boy Toplami : ";

	std::cout << enBoyToplami << endl;



	return 0;

};



int BoyOrtalamasi()

{

	system("CLS");



	int i, j, enBoyToplami;

	double ort;

	int sonKayit = (sizeof ogrenciad / sizeof * ogrenciad);

	j = 0;



	enBoyToplami = 0;

	for (size_t i = 0; i < sonKayit; i++)

	{

		if (ogrenciad[i][0])

		{



			enBoyToplami = enBoyToplami + boy[i];

			j = i;



		}

	}

	ort = enBoyToplami / (j + 1);

	std::cout << "Boy Ortalamasi : ";

	std::cout << ort << endl;



	return 0;

};



int main() {

	int secim1;

	int i;

	int menudevam;

	menudevam = 0;

	do

	{

		secim1 = anaMenu();



		if (secim1 == 1)

		{

			veriEkle();

		}

		if (secim1 == 2)

		{

			veriDegistir();

		}

		if (secim1 == 3)

		{

			veriListele();

		}

		if (secim1 == 4)

		{

			veriSayisi();

		}



		if (secim1 == 5)

		{

			enBuyukBoy();

		}

		if (secim1 == 6)

		{

			enKucukBoy();

		}

		if (secim1 == 7)

		{

			BoyToplami();

		}

		if (secim1 == 8)

		{

			BoyOrtalamasi();

		}

		if (secim1 == 99)

		{

			std::cout << "Sistemden Ciktiniz..!!";

			return 0;

		}


	} while (menudevam != 99);


	return 0;

}





// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
