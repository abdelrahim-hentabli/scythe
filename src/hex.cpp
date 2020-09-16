#include "hex.h"

Hex::Hex(){
  hexType = Lake;
};

Hex::Hex(Tile_Type tt){
  hexType = tt;
};

Tile_Type Hex::getTileType(){
  return hexType;
};

void Hex::setTileType(Tile_Type tt){
  hexType = tt;
};
