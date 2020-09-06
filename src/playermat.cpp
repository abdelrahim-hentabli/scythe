#include "playermat.h"

PlayerMat::PlayerMat(){
  name = "Undefined";
  objectiveCards = 0;
  popularity = 0;
  coins = 0;
}

PlayerMat::PlayerMat(const std::string &matName, const int &matObjectiveCards,
    const int &matPopularity, const int &matCoins){
  name = matName;
  objectiveCards = matObjectiveCards;
  popularity = matPopularity;
  coins = matCoins;
}

