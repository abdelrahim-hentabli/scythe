#ifndef PLAYERMAT_H
#define PLAYERMAT_H

#include <iostream>
#include "constants.h"

class PlayerMat{
  public:
    //Constructors
    PlayerMat();
    PlayerMat(const std::string &matName, const int &matObjectiveCards, 
      const int &matPopularity, const int &matCoins, Top_Row fTopRow,
      Bot_Row fBotRow);
    //Operators
    friend std::ostream& operator <<(std::ostream& out, const PlayerMat& p){
      out<<p.name<<'\n';
      out<<"Objective Cards: "<<p.objectiveCards<<"    Popularity: ";
      out<<p.popularity<<"    Coins: "<<p.coins<<'\n';
    }
    //Setters
    //Getters
    //Top Row Actions
    void move();
    void bolster();
    void trade();
    void produce();
    //Bottom Row Actions
    void upgrade();
    void deploy();
    void build();
    void enlist();

  private:
    std::string name;
    int objectiveCards;
    int popularity;
    int coins; 
    Top_Row topRowOrder[4];
    Bot_Row botRowOrder[4];
    

};
#endif
