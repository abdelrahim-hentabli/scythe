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
    friend std::ostream& operator << (std::ostream &out, const Faction& p){ 
      out<<"  "<<std::string(FACTION_MAT_SIZE - 4, '_')<<"\n";
      
      out<<" /"<<std::string( (FACTION_MAT_SIZE-4) / 3 - p.name.size() % 2 - p.name.size() / 2, ' ')\
      <<p.name<<std::string((FACTION_MAT_SIZE-4) % 3 + (FACTION_MAT_SIZE-4) / 3 - p.name.size() / 2\
      - ABILITIES[p.ability].size() / 2, ' ')<<ABILITIES[p.ability]<<std::string( (FACTION_MAT_SIZE-4)\
      / 3- ABILITIES[p.ability].size() / 2 - ABILITIES[p.ability].size() % 2, ' ')<<"\\ \n";
     
      out<<"|"<<std::string((FACTION_MAT_SIZE -2), ' ')<<"|\n";
      out<<"|"<<std::string(FACTION_MAT_SIZE - 22, ' ')<<"Power: "<<p.power\
      <<std::string(12, ' ')<<"|\n";
      
      out<<"|"<<std::string((FACTION_MAT_SIZE - 22), ' ')<<"Combat Cards: "<<p.combatCards\
      <<std::string(5, ' ')<<"|\n";
      
      out<<"|    Mech Abilities:"<<std::string(FACTION_MAT_SIZE - 21, ' ')<<"|\n";
      
      out<<"|   ";
      for(int i = 0; i < 4; i++){
        out<<std::string((FACTION_MAT_SIZE-2)/5 - 3, ' ');
        if(p.deployedMech[i]){
          out<<"   ";
        }
        else{
          out<<"/o\\";
        }
      }
      out<<std::string((FACTION_MAT_SIZE-2)/5 + FACTION_MAT_SIZE%5,' ')<<"|\n";

      std::string temp = "";
      for(int i = 0; i < 5; i++){
        if(i == 0){
          temp +="Rvr Wlk-> ";
        }
        temp +=ABILITIES[p.mechAbilities[i]];
        if(i == 0){
          temp+=", ";
        }
        else if(i < 4){
          temp+=" | ";
        }
      }
      out<<" \\ "<<std::string( (FACTION_MAT_SIZE - 6 - temp.size()) / 2 + (FACTION_MAT_SIZE -6- temp.size()) %2, ' ')<<temp\
      <<std::string( (FACTION_MAT_SIZE - 6 - temp.size()) /2, ' ')<<" / \n";
      return out<<"  "<<std::string(FACTION_MAT_SIZE-4, '-')<<"  ";
    }
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
