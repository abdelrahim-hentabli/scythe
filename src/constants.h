#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <iostream>

const int MAX_POWER = 16;
const int MAX_POPULARITY = 18;
const int NUMBER_OF_ABILITIES = 21;
const int NUMBER_OF_FACTIONS = 5;
const int NUMBER_OF_PLAYER_MATS = NUMBER_OF_FACTIONS;

enum Faction_Name { Crimea, Nordic, Polania, Rusviet, Saxony};

enum Player_Mat { Industrial, Engineering, Patriotic, Innovative, Agricultural};

enum Top_Row { Move, Bolster, Trade, Produce};

enum Bot_Row { Upgrade, Deploy, Build, Enlist};

//abilities [5-9] are water walking to those hexes
const std::string ABILITIES[NUMBER_OF_ABILITIES] = {"Coercion", "Swim", 
  "Meander", "Relentless", "Dominate", "Farm", "Tundra", "Forest", "Mountain", 
  "Village", "Wayfare", "Scout", "Speed", "Seaworthy", "Artillery", "Submerge",
  "Camaraderie", "Township", "People's Army", "Underpass", "Disarm"};

const std::string ABILITIES_DESCRIPTION[NUMBER_OF_ABILITIES] = {"Coercion",
  "Swim", "Meander", "Relentless", "Dominate", "Farm", "Tundra", "Forest", 
  "Mountain", "Village", "Wayfare", "Scout", "Speed", "Seaworthy", "Artillery", "Submerge","Camaraderie", "Township", "People's Army", "Underpass", "Disarm"};

const std::string FACTION_NAMES[NUMBER_OF_FACTIONS] = {"CRIMEA", "NORDIC", 
  "POLANIA", "RUSVIET", "SAXONY"};

const int FACTION_POWERS[NUMBER_OF_FACTIONS] = {5, 4, 2, 3, 1};
const int FACTION_COMBAT_CARDS[NUMBER_OF_FACTIONS] = {0, 1, 3, 2, 4};
const int FACTION_ABILITIES[NUMBER_OF_FACTIONS] = {0, 1, 2, 3, 4}; 
extern int FACTION_MECH_ABILITIES[NUMBER_OF_FACTIONS][5];

const std::string PLAYER_MAT_NAMES[NUMBER_OF_PLAYER_MATS] = 
  {"Industrial", "Engineering", "Patriotic", "Innovative", "Agricultural"};

const int PLAYER_MAT_RANK[NUMBER_OF_PLAYER_MATS] = {1,2,3,4,5};
const int PLAYER_MAT_POPULARITY[NUMBER_OF_PLAYER_MATS] = {2,2,2,3,4};
const int PLAYER_MAT_COINS[NUMBER_OF_PLAYER_MATS] = {4,5,6,5,7};

#endif
