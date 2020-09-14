#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <faction.h>
#include <playermat.h>
#include "constants.h"

class Player{
  public:
    //Constructors & Destructor
    Player();
    Player(Faction* f, PlayerMat* p); //waiting on PlayerMat getter functions
    //Getters
    int* getObjectiveCards();
    int getCoins();
    int getPower();
    int getPopularity();
    Faction* getFaction();
    PlayerMat* getPlayerMat();
    //Setters
    void setCoins(int val);
    void setPower(int val);
    void setPopularity(int val);
    void setFaction(Faction* f);
    void setPlayerMat(PlayerMat* p);
    //Incrementers & Decrementers 
    void pushObjectiveCard(int card); 
    void addCoins(int val);
    void addPower(int val);
    void addPopularity(int val);
    void popObjectiveCard(int card);
    void subCoins(int val);
    void subPower(int val);
    void subPopularity(int val);
    
  private:
    int objectiveCards[4]; //holds the number of objective cards with strength 2, 3, 4, and 5
    int coins;
    int power;
    int popularity;
    Faction* faction;
    PlayerMat* playerMat;

};

#endif
