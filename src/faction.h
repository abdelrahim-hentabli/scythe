#ifndef FACTION_H
#define FACTION_H

#include <iostream>
#include "hex.h"
#include "constants.h"

const int FACTION_MAT_SIZE = 80;

class Faction{
  public:
    Faction();
    Faction(const std::string &factionName, const int &factionPower, 
      const int &factionCombatCards, const int &factionAbility,
      int *factionMechAbility, Hex* factionHomeBase);
    friend std::ostream& operator << (std::ostream &out, const Faction& f);
  private:
    std::string name;
    int power;
    int combatCards;
    int ability;
    //riverwalk is first 2 abilities
    int *mechAbilities;
    bool deployedMech[4];
    Hex* homeBase;
};

#endif
