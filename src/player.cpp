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
}

// Player::Player(Faction* f, PlayerMat* p){
//   faction = f;
//   playerMat = p;
//   coins = p->coins;
// }

int Player::getCoins() {
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

void Player::setPower(int val){
  if(val<0){
    cout<<"Error setting power for Player\n";
    return;
  }
  power = val;
}

void Player::setCoins(int val){
  if(val<0){
    cout<<"Error setting coins for Player\n";
    return;
  }
  coins = val;
}

void Player::setPopularity(int val){
  if(val<0){
    cout<<"Error setting popularity for Player\n";
    return;
  }
  popularity = val;
}

void Player::setFaction(Faction* f){
  if(f == NULL){
    cout<<"Error setting faction for Player\n";
    return;
  }
  faction = f;
}

void Player::setPlayerMat(PlayerMat* p){
  if(p == NULL){
    cout<<"Error setting player for Player\n";
    return;
  }
  playerMat = p;
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