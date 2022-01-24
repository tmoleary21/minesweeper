#include <iostream>
#include <SFML/Graphics.hpp>
#include "Board.h"
#include "Cell.h"

using namespace std;

int main(){
	sf::RenderWindow window(sf::VideoMode(600, 600), "Minesweeper by tmoleary21");
    
    Cell::initCellTextures();
    Board board(10,10,600,600);
    board.setPosition(0,0);

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
        board.draw(window);

        window.display();
    }

    return 0;
}
