#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	sf::Clock timer;
	sf::Time gecenSure;
	sf::RenderWindow pencere(sf::VideoMode(400, 400), "SFML");
	sf::CircleShape yesilDaire(50);
	sf::CircleShape kirmiziDaire(50);
	yesilDaire.setPosition(150, 150);
	kirmiziDaire.setPosition(150, 150);

	yesilDaire.setFillColor(sf::Color::Green);
	kirmiziDaire.setFillColor(sf::Color::Blue);


	float x = 0;
	float y = 0;
	float yatay = 0;
	float dikey = 0;
	while (pencere.isOpen())
	{
		sf::Event event;

		while (pencere.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				pencere.close();
			}
			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::Space)
				{
					x = 30;
					y = 30;
				}
			}
		
		}

		pencere.clear();
	
		pencere.draw(yesilDaire);
		yesilDaire.setPosition(sf::Vector2f(150+yatay,150));
		kirmiziDaire.setPosition(sf::Vector2f(150, 150+dikey));
		if (yesilDaire.getPosition().x >= 300.0f)
		{
			x -= 30;
		}
		if (yesilDaire.getPosition().x <= 0.0f)
		{
			x = 30;
		}
		if (kirmiziDaire.getPosition().y >= 300.0f)
		{
			y -= 30;
		}
		if (kirmiziDaire.getPosition().y <= 0.0f)
		{
			y = 30;
		}
		pencere.draw(kirmiziDaire);
		yatay += x * gecenSure.asSeconds();
		dikey += y * gecenSure.asSeconds();
		pencere.display();
		gecenSure = timer.restart();
	}







	return 0;
}