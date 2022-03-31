//
//
//
////#include "Oyun.hpp"
////#include <iostream>
////#include <functional>
////
////
////
////int main()
////{
////
////	Oyun oyun;
////	oyun.oyunuBaslat(500, 500, "Bubble Game - by ");
////	
////
////
////	
////	return 0;
////}
//#include <SFML/Graphics.hpp>
//#include <iostream>
//#include <vector>
//
//int main()
//{
//	sf::RenderWindow pencere(sf::VideoMode(400, 400), "ilkpencere");
//
//	sf::RectangleShape kare(sf::Vector2f(70.0f, 70.0f));
//	kare.setFillColor(sf::Color::Red);
//	
//	sf::Clock timer;
//	sf::Time gecennSure;
//  float artis = 1.0f;
//	float cerceveSuresi = 1 / 20.0f;
//	int x = 120;
//	int y = 120;
//	/*sf::CircleShape daireYesil(50);
//	sf::CircleShape daireMavi(90);
//	sf::CircleShape daireSari(60);
//	sf::CircleShape daireKirmizi(30);
//	sf::RectangleShape kare(sf::Vector2f(200, 200));
//	sf::Vector2f posKare(100, 100);
//	kare.setPosition(posKare);
//	daireYesil.setFillColor(sf::Color::Green);
//	daireKirmizi.setFillColor(sf::Color::Red);
//	daireMavi.setFillColor(sf::Color::Blue);
//	daireSari.setFillColor(sf::Color::Yellow);
//	sf::Vector2f position = kare.getPosition();
//	daireKirmizi.setPosition(75, 275);*/
//
//
//	while (pencere.isOpen())
//	{
//		kare.setPosition(x, y);
//		sf::Event olay;
//
//		while (pencere.pollEvent(olay))
//		{
//			if (olay.type == sf::Event::Closed)
//			{
//				pencere.close();
//			}
//
//			if (olay.type == sf::Event::KeyPressed)
//			{
//				if (olay.key.code == sf::Keyboard::W) {
//					y -= 1;
//				}
//				if (olay.key.code == sf::Keyboard::S) {
//					y += 1;
//				}
//				if (olay.key.code == sf::Keyboard::A) {
//					x -= 1;
//				}
//				if (olay.key.code == sf::Keyboard::D) {
//					x += 1;
//				}
//			}
//		}
//	
//		if (gecennSure.asSeconds() >= cerceveSuresi) {
//
//		pencere.clear();
//		pencere.draw(kare);
//		 x += artis;
//	     y += artis;
//		kare.setPosition(x,y);
//		//pencere.draw(kare);
//		//pencere.draw(daireSari);
//		//pencere.draw(daireKirmizi);
//		//pencere.draw(daireMavi);
//		//pencere.draw(daireYesil);
//
//
//
//
//        
//		pencere.display();
//		gecennSure += timer.restart();
//		}
//
//	}
//}
