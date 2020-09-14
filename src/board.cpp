#include "board.h"

Board::Board(){
  hexagons = new Hex*[9];
  hexagons[0] = new Hex[2];
  hexagons[1] = new Hex[6];
  hexagons[2] = new Hex[7];
  hexagons[3] = new Hex[8];
  hexagons[4] = new Hex[7];
  hexagons[5] = new Hex[7];
  hexagons[6] = new Hex[7];
  hexagons[7] = new Hex[8];
  hexagons[8] = new Hex[2];
}
