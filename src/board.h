#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <map>
#include "hex.h"

class Board{
  public:
    Board();
    
  private:
    Hex **hexagons;
    std::map<Hex*, Hex*> edges;
};
#endif 
