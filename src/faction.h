#ifndef FACTION_H
#define FACTION_H

#include <iostream>
#include "hex.h"
#include "constants.h"

class Faction{
  public:
    Faction();
    Faction(const std::string &factionName, const unsigned char &factionPower, 
      const unsigned char &factionCombatCards, 
      const unsigned char &factionAbility,
      unsigned char *factionMechAbility, Hex* factionHomeBase);
    friend std::ostream& operator << (std::ostream &out, const Faction& p){
      out<<p.name<<'\n'<<"Power: "<<int(p.power)<<"    Combat Cards: "<<
        int(p.combatCards)<<"    Main Ability: "<<ABILITIES[p.ability]<<'\n';
      out<<"Mech Abilities:    ";
      for(int i = 0; i < 5; i++){
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
    unsigned char power;
    unsigned char combatCards;
    unsigned char ability;
    //riverwalk is first 2 abilities
    unsigned char *mechAbilities;
    bool deployedMech[5];
    Hex* homeBase;
};

#endif
