//#include <SFML/Graphics.hpp>
//
//int main()
//{
//	sf::RenderWindow window(sf::VideoMode(500, 500), " SFML !");
//	sf::RectangleShape kare(sf::Vector2f(70.0f, 70.0f));
//	kare.setFillColor(sf::Color::Red);
//	sf::Clock saat;
//
//	float x = 0;
//	float y = 0;
//	float yatay = 0;
//	float dikey = 0;
//
//
//
//	sf::Time gecenSure;
//	while (window.isOpen())
//	{
//		sf::Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed)
//				window.close();
//			if (event.type == sf::Event::KeyPressed)
//			{
//				if (event.key.code == sf::Keyboard::W) 
//				{
//					y = -20.0f;
//					x = 0.0f;
//				}
//				if (event.key.code == sf::Keyboard::S) {
//
//					y = +20.0f;
//					x = 0.0f;
//				}
//				if (event.key.code == sf::Keyboard::A) {
//
//					x = -20.0f;
//					y = 0.0f;
//				}
//				if (event.key.code == sf::Keyboard::D) {
//
//					x = +20.0f;
//					y = 0.0f;
//				}
//		    }
//		}
//	
//
//	    
//		
//		window.clear();
//		kare.setPosition(sf::Vector2f(yatay, dikey));
//		window.draw(kare);
//		window.display();
//		yatay += x * saat.getElapsedTime().asSeconds();
//		dikey += y * saat.getElapsedTime().asSeconds();
//		//window.draw(shape);
//		
//		gecenSure = saat.restart();
//	}
//	return 0;
//}
