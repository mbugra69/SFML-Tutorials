#pragma once

#include "Pencere.hpp"
class Oyun {

public:
	void setFps(int fps);
	void oyunuBaslat(int genislik, int yukseklik, const sf::String& baslik);
	void ayarla();

	void fareHareket(int x, int y);

private:
	Pencere m_pencere;
	sf::Clock m_saat;
	sf::Time m_gecenSure;
	sf::Time m_cerceveSuresi;



};