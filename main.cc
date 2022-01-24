#include <iostream>
#include <SFML/Graphics.hpp>
#include "Board.h"
#include "Cell.h"

using namespace std;

int main(){
	sf::RenderWindow window(sf::VideoMode(600, 600), "Minesweeper by tmoleary21");

    Cell::initCellTextures();
    Board board(8,5,600,500);
    board.setPosition(0,100);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            
            if(event.type == sf::Event::MouseButtonPressed){
                if(event.mouseButton.button == sf::Mouse::Left){
                    board.checkCell(event.mouseButton.x, event.mouseButton.y);
                }
            }
        }

        window.clear();
        //Draw here
        board.draw(window);

        window.display();
    }

    return 0;
}
