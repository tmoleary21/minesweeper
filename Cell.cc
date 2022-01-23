#include "Cell.h"

sf::Texture Cell::defaultTexture = sf::Texture();
sf::Texture Cell::emptyTexture = sf::Texture();
sf::Texture Cell::flagTexture = sf::Texture();
sf::Texture Cell::mineTexture = sf::Texture();

Cell::Cell(){
    sprite.setTexture(Cell::defaultTexture);
    mineCount = 0;
}

Cell::Cell(int x, int y){
    sprite.setTexture(Cell::defaultTexture);
    mineCount = 0;
    setPosition(x,y);
}

Cell::~Cell(){
    //Necessary?
}

void Cell::setPosition(int x, int y){
    sprite.setPosition(sf::Vector2f(x,y));
}

void Cell::setSize(int width, int height){
    sprite.setScale(width/10, height/10);
}

void Cell::draw(sf::RenderWindow& window) const{
    window.draw(sprite);
}

void Cell::flag(){

}

void Cell::checkCell(){

}
