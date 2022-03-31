#include "Oyun.hpp"
#include <iostream>
void Oyun::setFps(int fps)
{

	m_cerceveSuresi = sf::seconds(1.0f / fps);

}

void Oyun::oyunuBaslat(int genislik, int yukseklik, const sf::String& baslik)
{
	m_pencere.Olustur(genislik, yukseklik, baslik);

	ayarla();
	sf::Time gecenSure;
	sf::Clock saat;

	sf::CircleShape daire(30);
	sf::RectangleShape cubuk(sf::Vector2f(40,5));
	cubuk.rotate(90);
	cubuk.setPosition(250, 440);
	daire.setPosition(215, 420);
	daire.setFillColor(sf::Color::Red);
	sf::RectangleShape solSinir(sf::Vector2f(20, 500));
	sf::RectangleShape sagSinir(sf::Vector2f(40, 500));
	sf::RectangleShape ustSinir(sf::Vector2f(460, 35));
	sagSinir.setPosition(sf::Vector2f(460, 0));

		while(m_pencere.acikMi())
		{
		
			m_pencere.olayKontrol();
			m_pencere.cizimeBasla();
			m_pencere.ciz(daire);
			m_pencere.ciz(cubuk);
			m_pencere.ciz(solSinir);
			m_pencere.ciz(sagSinir);
			m_pencere.ciz(ustSinir);
			m_pencere.cizimiBitir();
			gecenSure = saat.restart();
			

		}


}

void Oyun::ayarla()
{
	 auto fonksiyon = std::bind(&Oyun::fareHareket,this,std::placeholders::_1,std::placeholders::_2);
	 m_pencere.fareFonksiyonuEkle(fonksiyon);
}

void Oyun::fareHareket(int x, int y)
{
	std::cout << x << "," << y << std::endl;
}
