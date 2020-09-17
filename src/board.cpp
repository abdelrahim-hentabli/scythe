#include "board.h"

Board::Board(){
  
  hexagons = new Hex*[BOARD_NUM_ROWS];
  
  for(int i = 0; i < BOARD_NUM_ROWS; i++){
    hexagons[i] = new Hex[BOARD_ROW_SIZES[i]];
    for(int j = 0; j < BOARD_ROW_SIZES[i]; j++){
      hexagons[i][j].setTileType(BOARD_TILE_TYPES[i][j]);
    }
  }
  

}
