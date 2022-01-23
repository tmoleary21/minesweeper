#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main(){
	sf::RenderWindow window(sf::VideoMode(600, 600), "Minesweeper by tmoleary21");

    sf::Texture defaultTexture;
    if(!defaultTexture.loadFromFile("textures/default.png")){
        cerr << "Error: Could not find file\n";
        return 0;
    }
    sf::Texture emptyTexture;
    if(!emptyTexture.loadFromFile("textures/empty.png")){
        cerr << "Error: Could not find file\n";
        return 0;
    }
    
    sf::Sprite defaultSprite;
    defaultSprite.setTexture(defaultTexture);
    defaultSprite.setPosition(sf::Vector2f(20,20));
    sf::Sprite emptySprite;
    emptySprite.setTexture(emptyTexture);
    emptySprite.setPosition(sf::Vector2f(60,20));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        //Draw here
        
        window.draw(defaultSprite);
        window.draw(emptySprite);

        window.display();
    }

    return 0;
}
