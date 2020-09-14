#include "playermat.h"

PlayerMat::PlayerMat(){
  name = "Undefined";
  objectiveCards = 0;
  popularity = 0;
  coins = 0;
}

PlayerMat::PlayerMat(const std::string &matName, const int &matObjectiveCards,/
    const int &matPopularity, const int &matCoins, Top_Row fTopRow, /
    Bot_Row fBotRow){
  name = matName;
  objectiveCards = matObjectiveCards;
  popularity = matPopularity;
  coins = matCoins;
  //Need to construct bottom row and top row actions
  //Need to construct resources necessary for bottom row actions
  //Need to construct upgradablity of top and bottom row actions
  
}

