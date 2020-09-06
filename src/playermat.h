#ifndef PLAYERMAT_H
#define PLAYERMAT_H

#include <iostream>

class PlayerMat{
  public:
    PlayerMat();
    PlayerMat(const std::string &matName, const int &matObjectiveCards, 
      const int &matPopularity, const int &matCoins);
    friend std::ostream& operator <<(std::ostream& out, const PlayerMat& p){
      out<<p.name<<'\n';
      out<<"Objective Cards: "<<p.objectiveCards<<"    Popularity: "<<
      out<<p.popularity<<"    Coins: "<<p.coins<<'\n';
    }
  private:
    std::string name;
    int objectiveCards;
    int popularity;
    int coins; 

}
#endif
