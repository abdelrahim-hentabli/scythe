#ifndef CONSTANTS_H
#define CONSTANTS_H

const unsigned char MAX_POWER = 16;
const unsigned char MAX_POPULARITY = 18;
const int NUMBER_OF_ABILITIES = 21;
const int NUMBER_OF_FACTIONS = 5;

const std::string ABILITIES[NUMBER_OF_ABILITIES] = {"Coercion", "Swim", 
  "Meander", "Relentless", "Dominate", "River Walk -> Farm", 
  "River Walk -> Tundra", "River Walk -> Forest", "River Walk -> Mountain", 
  "River Walk -> Village", "Wayfare", "Scout", "Speed", "Seaworthy", 
  "Artillery", "Submerge", "Camaraderie", "Township", "People's Army", 
  "Underpass", "Disarm"};

const std::string FACTION_NAMES[NUMBER_OF_FACTIONS] = {"Crimea", "Nordic", 
  "Polania", "Rusviet", "Saxony"};
const unsigned char FACTION_POWERS[NUMBER_OF_FACTIONS] = {5, 4, 2, 3, 1};
const unsigned char FACTION_COMBAT_CARDS[NUMBER_OF_FACTIONS] = {0, 1, 3, 2, 4};
const unsigned char FACTION_ABILITIES[NUMBER_OF_FACTIONS] = {0, 1, 2, 3, 4}; 
unsigned char FACTION_MECH_ABILITIES[5][NUMBER_OF_FACTIONS] = { 
    {5, 6, 10, 11, 12}, {7, 8, 13, 14, 12}, {8, 9, 15, 16, 12}, 
    {5, 9, 17, 18, 12}, {7, 8, 19, 20, 12}};
  

#endif
