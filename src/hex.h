#ifndef HEX_H
#define HEX_H

#include <iostream>
#include <vector>
#include "piece.h"
#include "constants.h"

class Hex{
  public:
    Hex(); 
    Hex(Tile_Type tt); 
    Tile_Type getTileType();
    void setTileType(Tile_Type tt);
  private:
    Tile_Type hexType;
    std::vector<Piece*> pieces;
};
#endif
