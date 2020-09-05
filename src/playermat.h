#ifndef PLAYERMAT_H
#define PLAYERMAT_H

#include <iostream>

class PlayerMat{
  public:
    PlayerMat();
    PlayerMat(std::string matName, int matObjectiveCards, int matPopularity, int matCoins);
  private:
    std::string name;
    int objectiveCards;
    int popularity;
    int coins; 

}
#endif
