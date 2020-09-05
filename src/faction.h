#ifndef FACTION_H
#define FACTION_H

#include <iostream>
#include "hex.h"
#include "constants.h"

class Faction{
  public:
    Faction();
    Faction(const std::string &factionName, const int &factionPower, 
      const int &factionCombatCards, const int &factionAbility,
      int *factionMechAbility, Hex* factionHomeBase);
    friend std::ostream& operator << (std::ostream &out, const Faction& p){
      out<<p.name<<'\n';
      out<<"Power: "<<p.power<<"    Combat Cards: ";
      out<<p.combatCards<<"    Main Ability: "<<ABILITIES[p.ability]<<'\n';
      out<<"Mech Abilities:    ";
      for(int i = 0; i < 5; i++){
        if(i == 0){
          out<<"River Walking -> ";
        }
        out<<ABILITIES[p.mechAbilities[i]];
        if(i == 0){
          out<<" , ";
        }
        else if(i < 4){
          out<<"  |  ";
        }
        else{
          out<<'\n';
        }
      }
    }
  private:
    std::string name;
    int power;
    int combatCards;
    int ability;
    //riverwalk is first 2 abilities
    int *mechAbilities;
    bool deployedMech[5];
    Hex* homeBase;
};

#endif
