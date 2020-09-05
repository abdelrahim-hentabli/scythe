#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <faction.h>
#include <playermat.h>


class Player{
  public:
    
  private:
    unsigned int coins;
    unsigned char power;
    unsigned char popularity;
    Faction* faction;
    PlayerMat* playerMat;

};

#endif
