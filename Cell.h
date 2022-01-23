#ifndef MINESWEEPERCELL_INCLUDED
#define MINESWEEPERCELL_INCLUDED

#include <SFML/Graphics.hpp>

class Cell{
  private:
    sf::Sprite sprite;
    int mineCount;
    bool hasMine;    
  public:
    Cell() = delete;
    Cell(const Cell&) = delete;
    Cell(int x, int y);
    ~Cell();

    void flag();
    void checkCell();
    void setSize();
};

#endif /*MINESWEEPERCELL_INCLUDED*/