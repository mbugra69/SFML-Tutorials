#pragma once
#include <SFML/Graphics.hpp>
#include "TemelTurler.hpp"
class Pencere {


	public:
		Pencere();
		void Olustur(int genislik, int yukseklik, const sf::String& baslik);
		bool acikMi();
		void kapat();
		void olayKontrol();
		void ciz(sf::Drawable& sekil);
		void cizimeBasla();
		void cizimiBitir();
		void fareFonksiyonuEkle(FareHareketFonksiyonu yeniFonk);
		

	private:
		FareHareketFonkListesi m_fareHareketFonksiyonlari;
		sf::RenderWindow m_pencere;


};