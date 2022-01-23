#ifndef MINESWEEPERCELL_INCLUDED
#define MINESWEEPERCELL_INCLUDED

#include <SFML/Graphics.hpp>

class Cell{
  private:
    sf::Sprite sprite;
    int mineCount;
    bool hasMine;
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
};

#endif /*MINESWEEPERCELL_INCLUDED*/