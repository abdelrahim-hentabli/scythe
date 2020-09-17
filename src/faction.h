#ifndef FACTION_H
#define FACTION_H

#include <iostream>
#include "hex.h"
#include "constants.h"

const int FACTION_MAT_SIZE = 80;

class Faction{
  public:
    //Constructors
    Faction();
    Faction(const std::string &factionName, const int &factionPower, 
      const int &factionCombatCards, const int &factionAbility,
      int* factionMechAbility, Hex* factionHomeBase);
    //Operators
    friend std::ostream& operator << (std::ostream &out, const Faction& f);
    //Getters
    int getPower();
    int getCombatCards();
    int getAbility();
    int* getMechAbilities();


  private:
    std::string name;
    int power;
    int combatCards;
    int ability;
    int* mechAbilities; //riverwalk is first 2 abilities
    bool deployedMech[4];
    bool enlistedRecruits[4];
    Hex* homeBase;
};

#endif
