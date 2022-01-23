#ifndef MINESWEEPERCELL_INCLUDED
#define MINESWEEPERCELL_INCLUDED

#include <SFML/Graphics.hpp>

class Cell{
  private:
    sf::Sprite sprite;
    int mineCount;
    bool hasMine;
    static sf::Texture defaultTexture;
    static sf::Texture emptyTexture;
    static sf::Texture flagTexture;
    static sf::Texture mineTexture;
  public:
    Cell();
    Cell(const Cell&) = delete;
    Cell(int x, int y);
    ~Cell();

    void setPosition(int x, int y);
    void setSize(int width, int height);
    void draw(sf::RenderWindow& window) const;
    void flag();
    void checkCell();

    static void initCellTextures(){
        if(!defaultTexture.loadFromFile("textures/default.png")){
            throw "Could not load texture file textures/default.png\n";
        }
        if(!emptyTexture.loadFromFile("textures/empty.png")){
            throw "Could not load texture file textures/empty.png\n";
        }
        //TODO: Need to change source files of next two
        if(!flagTexture.loadFromFile("textures/default.png")){
            throw "Could not load texture file textures/default.png\n";
        }
        if(!mineTexture.loadFromFile("textures/default.png")){
            throw "Could not load texture file textures/default.png\n";
        }
    }
};

#endif /*MINESWEEPERCELL_INCLUDED*/