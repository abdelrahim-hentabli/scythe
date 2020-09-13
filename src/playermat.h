#ifndef PLAYERMAT_H
#define PLAYERMAT_H

#include <iostream>
#include "constants.h"

class PlayerMat{
  public:
    PlayerMat();
    PlayerMat(const std::string &matName, const int &matObjectiveCards, 
      const int &matPopularity, const int &matCoins);
    friend std::ostream& operator <<(std::ostream& out, const PlayerMat& p){
      out<<p.name<<'\n';
      out<<"Objective Cards: "<<p.objectiveCards<<"    Popularity: ";
      out<<p.popularity<<"    Coins: "<<p.coins<<'\n';
    }
    
    void move();
    void bolster();
    void trade();
    void produce();
    
    void upgrade();
    void deploy();
    void build();
    void enlist();

  private:
    std::string name;
    int objectiveCards;
    int popularity;
    int coins; 
    Top_Row top_row_order[4];
    Bot_Row bot_row_order[4];
    

};
#endif
