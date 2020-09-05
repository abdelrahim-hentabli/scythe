#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <faction.h>
#include <playermat.h>
#include "constants.h"

class Player{
  public:
    
  private:
    int coins;
    int power;
    int popularity;
    Faction* faction;
    PlayerMat* playerMat;

};

#endif
