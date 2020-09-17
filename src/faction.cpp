#include "faction.h"

Faction::Faction(){
  name = "Undefined";
  power = 0;
  combatCards = 0;
  ability = 0;
  ability = FACTION_ABILITIES[0];
  mechAbilities = FACTION_MECH_ABILITIES[0];
  for(int i = 0; i < 4; i++){
    deployedMech[i] = 0;
    enlistedRecruits[i] = 0;
  }
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
  for(int i = 0; i < 4; i++){
    deployedMech[i] = 0;
    enlistedRecruits[i] = 0;
  }
  homeBase = factionHomeBase;
};

std::ostream& operator<<(std::ostream&out, const Faction& f)
{
  out<<"  "<<std::string(FACTION_MAT_SIZE - 4, '_')<<"\n";
  
  out<<" /"<<std::string( (FACTION_MAT_SIZE-4) / 3 - f.name.size() % 2 - f.name.size() / 2, ' ')\
  <<f.name<<std::string((FACTION_MAT_SIZE-4) % 3 + (FACTION_MAT_SIZE-4) / 3 - f.name.size() / 2\
  - ABILITIES[f.ability].size() / 2, ' ')<<ABILITIES[f.ability]<<std::string( (FACTION_MAT_SIZE-4)\
  / 3- ABILITIES[f.ability].size() / 2 - ABILITIES[f.ability].size() % 2, ' ')<<"\\ \n";
  
  out<<"|"<<std::string((FACTION_MAT_SIZE -2), ' ')<<"|\n";
  out<<"|"<<std::string(FACTION_MAT_SIZE - 22, ' ')<<"Power: "<<f.power\
  <<std::string(12, ' ')<<"|\n";
  
  out<<"|"<<std::string((FACTION_MAT_SIZE - 22), ' ')<<"Combat Cards: "<<f.combatCards\
  <<std::string(5, ' ')<<"|\n";
  
  out<<"|    Mech Abilities:"<<std::string(FACTION_MAT_SIZE - 21, ' ')<<"|\n";
  
  out<<"|   ";
  for(int i = 0; i < 4; i++){
    out<<std::string((FACTION_MAT_SIZE-2)/5 - 3, ' ');
    if(f.deployedMech[i]){
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
    temp +=ABILITIES[f.mechAbilities[i]];
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