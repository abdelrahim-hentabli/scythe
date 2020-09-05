#include "faction.h"

Faction::Faction(){
  name = "Undefined";
  power = 0;
  combatCards = 0;
  ability = 0;
  ability = FACTION_ABILITIES[0];
  mechAbilities = FACTION_MECH_ABILITIES[0];
  homeBase = nullptr;
};

Faction::Faction(const std::string &factionName, const int &factionPower,
    const int &factionCombatCards, const int &factionAbility,
    int *factionMechAbility, Hex* factionHomeBase){
  name = factionName;
  power = factionPower;
  combatCards = factionCombatCards;
  ability = factionAbility;
  mechAbilities = factionMechAbility;
  homeBase = factionHomeBase;
};
