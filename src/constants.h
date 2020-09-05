#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <iostream>

const int MAX_POWER = 16;
const int MAX_POPULARITY = 18;
const int NUMBER_OF_ABILITIES = 21;
const int NUMBER_OF_FACTIONS = 5;


//abilities [5-9] are water walking to those hexes
const std::string ABILITIES[NUMBER_OF_ABILITIES] = {"Coercion", "Swim", 
  "Meander", "Relentless", "Dominate", "Farm", "Tundra", "Forest", "Mountain", 
  "Village", "Wayfare", "Scout", "Speed", "Seaworthy", "Artillery", "Submerge",
  "Camaraderie", "Township", "People's Army", "Underpass", "Disarm"};

const std::string FACTION_NAMES[NUMBER_OF_FACTIONS] = {"Crimea", "Nordic", 
  "Polania", "Rusviet", "Saxony"};
const int FACTION_POWERS[NUMBER_OF_FACTIONS] = {5, 4, 2, 3, 1};
const int FACTION_COMBAT_CARDS[NUMBER_OF_FACTIONS] = {0, 1, 3, 2, 4};
const int FACTION_ABILITIES[NUMBER_OF_FACTIONS] = {0, 1, 2, 3, 4}; 
extern int FACTION_MECH_ABILITIES[NUMBER_OF_FACTIONS][5];

#endif
