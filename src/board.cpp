#include "board.h"

Board::Board(){
  
  hexagons = new Hex*[9];
  rowSizes = new int[9];

  rowSizes[0] = 2;
  rowSizes[1] = 6;
  rowSizes[2] = 7;
  rowSizes[3] = 8;
  rowSizes[4] = 7;
  rowSizes[5] = 7;
  rowSizes[6] = 7;
  rowSizes[7] = 8;
  rowSizes[8] = 2;
  
  for(int i = 0; i < 9; i++){
    hexagons[i] = new Hex[rowSizes[i]];
  }

}
