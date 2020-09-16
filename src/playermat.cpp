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


int PlayerMat::getObjectiveCards(){
  return objectiveCards;
}

int PlayerMat::getPopularity(){
  return popularity;
}

int PlayerMat::getCoins(){
  return coins;
}

void PlayerMat::move(){
  
}

void PlayerMat::bolster(){

}

void PlayerMat::trade(){

}

void PlayerMat::produce(){

}

void PlayerMat::upgrade(){

}

void PlayerMat::deploy(){

}

void PlayerMat::build(){

}

void PlayerMat::enlist(){

}

