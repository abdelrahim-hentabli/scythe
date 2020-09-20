#include "player.h"
#include "faction.h"
#include "playermat.h"

using namespace std;

Player::Player() {
  coins = 0;
  power = 0;
  popularity = 0;
  faction = NULL;
  playerMat = NULL;
  for(int i = 0; i < 4; i++) {
    combatCards[i] = 0;
  }
}

Player::Player(Faction* f, PlayerMat* p){
  faction = f;
  playerMat = p;
  coins = p->getCoins();
  power = f->getPower();
  popularity = p->getPopularity();
  for(int i = 0; i < 4; i++) {
    combatCards[i] = 0;
  }

}

int* Player::getCombatCards(){
  return combatCards;
}

int Player::getCoins(){
  return coins;
}

int Player::getPower(){
  return power;
}

int Player::getPopularity(){
  return popularity;
}

Faction* Player::getFaction(){
  return faction;
}

PlayerMat* Player::getPlayerMat(){
  return playerMat;
}

void Player::pushCombatCard(int card) {
  if(card<2 || card>5){
    cout<<"Error adding objective card for Player\n";
    return;
  }
  combatCards[card-2] += 1;
}

void Player::addCoins(int val){
  if(val < 0){
    cout<<"Error adding coins in Player\n";
    return;
  }
  coins += val;
}

void Player::addPower(int val){
  if(val < 0){
    cout<<"Error adding power in Player\n";
    return;
  }
  power += val;
}

void Player::addPopularity(int val){
  if(val < 0){
    cout<<"Error adding popularity in Player\n";
    return;
  }
  popularity += val;
}

void Player::popCombatCard(int card) {
  if(card<2 || card>5 || combatCards[card-2]<1){
    cout<<"Error popping objective card for Player\n";
    return;
  }
  combatCards[card-2] -= 1;
}

void Player::subCoins(int val){
  if(val < 0){
    cout<<"Error subtracting coins in Player\n";
    return;
  }
  coins += val;
}

void Player::subPower(int val){
  if(val < 0){
    cout<<"Error subtracting power in Player\n";
    return;
  }
  power += val;
}

void Player::subPopularity(int val){
  if(val < 0){
    cout<<"Error subtracting popularity in Player\n";
    return;
  }
  popularity += val;
}