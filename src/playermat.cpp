#include "playermat.h"

PlayerMat::PlayerMat(){
  name = "Undefined";
  objectiveCards = 0;
  popularity = 0;
  coins = 0;
}

std::ostream& operator <<(std::ostream& out, const PlayerMat& p){
  out<<p.name<<'\n';
  out<<"Objective Cards: "<<p.objectiveCards<<"    Popularity: ";
  out<<p.popularity<<"    Coins: "<<p.coins<<'\n';
}
