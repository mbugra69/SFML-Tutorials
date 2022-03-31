#include "Pencere.hpp"

Pencere::Pencere()
{
}

void Pencere::Olustur(int genislik, int yukseklik, const sf::String& baslik)
{
	m_pencere.create(sf::VideoMode(genislik,yukseklik),baslik);

	if (!m_pencere.isOpen())
	{

	}
}

bool Pencere::acikMi()
{
	return m_pencere.isOpen();
}

void Pencere::kapat()
{
	m_pencere.close();
}

void Pencere::olayKontrol()
{
	sf::Event olay;
	while (m_pencere.pollEvent(olay)) 
	
	{
		if (olay.type == sf::Event::Closed)
		{
			kapat();
		}
		if (olay.type == sf::Event::MouseMoved)
		{
			for (auto siradaki : m_fareHareketFonksiyonlari)
				siradaki(olay.mouseMove.x, olay.mouseMove.y);
		}
		if (olay.type == sf::Event::KeyPressed)
		{
			if (olay.key.code == sf::Keyboard::Space)
			{
				
			}
		}
		
	}
}

void Pencere::ciz(sf::Drawable& sekil)
{
	m_pencere.draw(sekil);
}

void Pencere::cizimeBasla()
{
	m_pencere.clear();
}

void Pencere::cizimiBitir()
{
	m_pencere.display();
}

void Pencere::fareFonksiyonuEkle(FareHareketFonksiyonu yeniFonk)
{
	m_fareHareketFonksiyonlari.push_back(yeniFonk);

}
