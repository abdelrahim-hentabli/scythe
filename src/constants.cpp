#include "constants.h"

int FACTION_MECH_ABILITIES[NUMBER_OF_FACTIONS][5] = { 
    {5, 6, 10, 11, 12}, {7, 8, 13, 14, 12}, {8, 9, 15, 16, 12}, 
    {5, 9, 17, 18, 12}, {7, 8, 19, 20, 12}};

Tile_Type BOARD_TILE_TYPES[BOARD_NUM_ROWS][8] = {
  {Base, Base, Base, Base, Base, Base, Base, Base},
  {Mountain, Farm, Village, Forest, Tundra, Village, Base, Base},
  {Lake, Tundra, Lake, Tundra, Mountain, Farm, Farm, Base},
  {Base, Forest, Mountain, Forest, Lake, Forest, Village, Base},
  {Farm, Village, Lake, Factory, Mountain, Tundra, Mountain, Base},
  {Forest, Forest, Farm, Tundra, Lake, Village, Lake, Base},
  {Mountain, Village, Village, Tundra, Forest, Mountain, Tundra, Base},
  {Base, Tundra, Lake, Farm, Mountain, Village, Farm, Base},
  {Base, Village, Base, Base, Base, Base, Base, Base}
};

// enum Player_Mat { Industrial, Engineering, Patriotic, Mechanical, Agricultural};
// enum Bot_Row { Upgrade, Deploy, Build, Enlist};

const int PLAYER_MAT_MAX_BOTTOM_COST[NUMBER_OF_PLAYER_MATS][4] = {
  {3,3,3,4},
  {3,4,3,3},
  {2,4,4,3},
  {3,3,3,4},
  {2,4,4,3}
};
const int PLAYER_MAT_MIN_BOTTOM_COST[NUMBER_OF_PLAYER_MATS][4] = {
  {2,1,2,2},
  {2,2,1,2},
  {2,1,2,2},
  {2,1,2,2},
  {2,2,2,1}
};