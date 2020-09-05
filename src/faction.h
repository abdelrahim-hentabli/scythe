#ifndef FACTION_H
#define FACTION_H

#include "hex.h"

class Faction{
  public:
    Faction();
    Faction(std::string factionName, unsigned char factionPower, 
    unsigned char factionCombatCards, unsigned char factionAbility,
    unsigned char factionMechAbility[5], Hex* homeBase);
  private:
    std::string name;
    unsigned char power;
    unsigned char combatCards;
    unsigned char ability;

    //riverwalk is first 2 abilities
    unsigned char mechAbilities[5];
    bool deployedMech[5];
    Hex* homeBase;
};

#endif
