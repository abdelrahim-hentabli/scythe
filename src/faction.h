#ifndef FACTION_H
#define FACTION_H

#include "hex.h"

class Faction{
  public:
    Faction();
    Faction(int factionNumber);
    Faction(std::string factionName);
  private:
    std::string name;
    int ability;
    int mechAbilities[4];
    bool deployedMech[4];
    Hex* homeBase;
};

#endif
