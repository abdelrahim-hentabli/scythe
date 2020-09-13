#include <iostream>

#include "board.h"
#include "faction.h"
#include "constants.h"

int main(int argc, char  *argv[]){
  Faction* factions[NUMBER_OF_FACTIONS];
  for(int i=0; i < NUMBER_OF_FACTIONS; i++){
    //hex needs to be updated
    factions[i] = new Faction( FACTION_NAMES[i], FACTION_POWERS[i], 
      FACTION_COMBAT_CARDS[i], FACTION_ABILITIES[i], 
      FACTION_MECH_ABILITIES[i], new Hex());
  }
  for(int i =0; i < NUMBER_OF_FACTIONS; i++){
    std::cout<<*factions[i]<<'\n';
  }

  return 0;
}
