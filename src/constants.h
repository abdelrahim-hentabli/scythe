#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <iostream>

const int MAX_POWER = 16;
const int MAX_POPULARITY = 18;
const int NUMBER_OF_ABILITIES = 21;
const int NUMBER_OF_FACTIONS = 5;
const int NUMBER_OF_PLAYER_MATS = NUMBER_OF_FACTIONS;

enum Faction_Name { Crimea, Nordic, Polania, Rusviet, Saxony};

enum Player_Mat { Industrial, Engineering, Patriotic, Mechanical, Agricultural};
enum Top_Row { Move, Bolster, Trade, Produce};
enum Bot_Row { Upgrade, Deploy, Build, Enlist};
enum Top_Upgrade { Move, //Move 3 times (instead of 2)
                    Gain, //Gain 2 coins (instead of 1)
                    BolsterPower, //Bolster for 3 powers (instead of 2)
                    BolsterCard, //Bolster for 2 combat cards (instead of 1)
                    Trade, //Trade for 2 popularity (instead of 1)
                    Produce //Produce on 3 tiles (instead of 2)
                    };

enum Tile_Type {Farm, Tundra, Forest, Mountain, Village, Lake , Base, Factory};

//abilities [5-9] are water walking to those hexes
const std::string ABILITIES[NUMBER_OF_ABILITIES] = {"Coercion", "Swim", 
  "Meander", "Relentless", "Dominate", "Farm", "Tundra", "Forest", "Mountain", 
  "Village", "Wayfare", "Scout", "Speed", "Seaworthy", "Artillery", "Submerge",
  "Camaraderie", "Township", "People's Army", "Underpass", "Disarm"};

const std::string ABILITIES_DESCRIPTION[NUMBER_OF_ABILITIES] = {
  //Coercion (Crimea)
  "Once per turn, you may spend 1 combat card as if it were any 1 resource token.\
  The Crimean faction has a longstanding tradition of selling information to the highest\
  bidder. They may spend 1 combat card per turn as if it were a resource to pay for\
  something (1 combat card = any 1 resource token, regardless of the number on the\
  combat card). Combat cards are still worth nothing at the end of the game.",
  //Swim (Nordic)
  "Your workers may move across rivers. Nordic workers are accomplished swimmers who \
  refuse to complain even when wading through the coldest of waters. They may move across \
  rivers onto any type of terrain (except lakes). This ability applies only to workers, not\
  the character and mechs.",
  //Meander (Polania)
  "Pick up to 2 options per encounter card.\
  Thanks to Anna's charismatic bear companion, Wojtek, the pair tend to stretch short\
  encounters into longer adventures. Instead of picking just 1 option per encounter card,\
  the Polanian faction may choose up to 2 different options per encounter card in any\
  order. The benefit from the first selected option may be used to pay the cost for the\
  second selected option. Only one encounter card is drawn.", 
  //Relentless (Rusviet)
  "You may choose the same section on your Player Mat as the previous turn(s).\
  The Rusviets push their people hard, day after day, to achieve their ultimate goal. While\
  other factions let their infrastructure take a break from turn to turn, the Rusviet faction\
  may choose the same section of their Player Mat as the previous turn(s). This ability\
  also applies to a Factory card if you have one (see Factory section).", 
  //Dominate (Saxony)
  "There is no limit to the number of stars you can place from completing\
  objectives or winning combat.\
  Saxony's methodical approach to conquering the eastern lands surrounding the\
  Factory is all about asserting force and completing specific missions. The Saxon faction\
  may complete both of their objective cards (they don't discard the second card after\
  achieving the first), and they are not limited to 2 combat victory stars. If Saxony has\
  available stars, after winning combat, they must place the star.", 
  //Farm (Rusviet and Crimea)
  "Your character and mechs can move across rivers onto farms", 
  //Tundra (Crimea)
  "Your character and mechs can move across rivers onto tundras", 
  //Forest (Saxony and Nordic)
  "Your character and mechs can move across rivers onto forests", 
  //Mountain (Saxony, Polania, and Nordic)
  "Your character and mechs can move across rivers onto mountains", 
  //Village (Rusviet and Polania)
  "Your character and mechs can move across rivers onto villages", 
  //Wayfare (Crimea)
  "Your character and mechs may move from a territory or home base to any inactive faction's home\
  base or your own regardless of the distance. An /“inactive faction/” is any faction not currently \
  in the game, including the expansion factions. Normally players may not move into any home base, \
  but this is an exception to that rule.", 
  //Scout (Crimea)
  "Before you engage in combat, steal one of the opponent's combat cards at random and add it to \
  your hand. You may do this once per combat, not once per unit.", 
  //Speed
  "Your character and mechs may move one additional territory when moving. If any of those units \
  move into a territory containing an opponent's character, mech, or worker, their movement ends \
  and they cannot move again this turn. Moving from one tunnel to another still counts as 1 move, \
  so with this ability you could move an additional territory before or after moving through a tunnel. \
  Your mechs can pick up and drop off resources and workers in the middle of a Move action when they \
  have the Speed ability.", 
  //Seaworthy (Nordic)
  "Your character and mechs can move to and from lakes and retreat onto adjacent lakes (you may still \
  also retreat those units to your home base). This allows for lake hexes to be treated the same as \
  other territories for movement. If a mech transports workers onto a lake (during a Move action or \
  when retreating) or if a character or mech transports resources onto a lake, you may not leave those \
  workers or resources on the lake after moving off of it, nor may a worker move off of the lake without \
  the assistance of the mech. Lakes are territories, so if two factions have a lake- movement ability, \
  it's possible for combat to happen on a lake. You cannot build a structure or deploy a mech on a lake.", 
  //Artillery (Nordic)
  "Before you engage in combat, you may pay 1 power to force the combating opponent to lose 2 power. This \
  loss of power is reflected on the Power Track. You may do this once per combat, not once per unit.", 
  //Submerge (Polania)
  "Your character and mechs may move to and from lakes and move from any lake to another (similar to tunnel \
  movement, but with lakes). If a mech transports workers onto a lake or if a character or mech transports \
  resources onto a lake, you may not leave those workers or resources on the lake after moving off of it, \
  nor may a worker move off of the lake without the assistance of the mech. Lakes are territories, so if two \
  factions have a lake- movement ability, it's possible for combat to happen on a lake. You cannot build a \
  structure or deploy a mech on a lake.",
  //Camaraderie (Polania)
  "You do not lose popularity when forcing an opponent's workers to retreat after winning combat as the aggressor. \
  This applies any time on your turn when your character or mechs force an opponent's workers to retreat after combat.", 
  //Township (Rusviet)
  "For the purposes of Move actions for your character and mechs, villages you control and the Factory \
  are considered to be adjacent to each other. For example, if your mech is on a village, it can move \
  from that village to (a) any other village you control or (b) the Factory.", 
  //Peeople's Army (Rusviet)
  "In combat where you have at least 1 worker, you may play one additional combat card. You still \
  require a character or mech to participate in combat. For example, if you have 2 mechs and 3 \
  workers in combat, you may play up to 3 combat cards (1 for each of the mechs and 1 because you \
  have at least 1 worker).", 
  //Underpass (Saxony)
  "For the purposes of Move actions for your character and mechs, mountains you control and all tunnels \
  are considered to be adjacent to each other. For example, if your mech is on a mountain, it can move \
  from that mountain to (a) any other mountain you control or (b) any tunnel (or your Mine).", 
  //Disarm (Saxony)
  "Before you engage in combat on a territory with a tunnel or your Mine, the combating opponent loses 2 \
  power. This loss of power is reflected on the Power Track. You may do this once per combat, not once per unit."};

const std::string FACTION_NAMES[NUMBER_OF_FACTIONS] = {"CRIMEA", "NORDIC", 
  "POLANIA", "RUSVIET", "SAXONY"};

const int FACTION_POWERS[NUMBER_OF_FACTIONS] = {5, 4, 2, 3, 1};
const int FACTION_COMBAT_CARDS[NUMBER_OF_FACTIONS] = {0, 1, 3, 2, 4};
const int FACTION_ABILITIES[NUMBER_OF_FACTIONS] = {0, 1, 2, 3, 4}; 
extern int FACTION_MECH_ABILITIES[NUMBER_OF_FACTIONS][5];

const std::string PLAYER_MAT_NAMES[NUMBER_OF_PLAYER_MATS] = 
  {"Industrial", "Engineering", "Patriotic", "Mechanical", "Agricultural"};

const int PLAYER_MAT_RANK[NUMBER_OF_PLAYER_MATS] = {1,2,3,4,5};
const int PLAYER_MAT_POPULARITY[NUMBER_OF_PLAYER_MATS] = {2,2,2,3,4};
const int PLAYER_MAT_COINS[NUMBER_OF_PLAYER_MATS] = {4,5,6,6,7};
const int PLAYER_MAT_MAX_BOTTOM_COST[NUMBER_OF_PLAYER_MATS][4]; //The maximum/starting cost to do bottom actions
const int PLAYER_MAT_MIN_BOTTOM_COST[NUMBER_OF_PLAYER_MATS][4]; //The minimum cost to do bottom actions after upgrades


const int BOARD_NUM_ROWS = 9;
const int BOARD_ROW_SIZES[BOARD_NUM_ROWS] = {2,6,7,8,7,7,7,8,2};
extern Tile_Type BOARD_TILE_TYPES[BOARD_NUM_ROWS][8];

#endif
