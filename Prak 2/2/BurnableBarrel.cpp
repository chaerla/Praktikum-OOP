#include "BurnableBarrel.hpp"
#include <iostream>

using namespace std;

BurnableBarrel::BurnableBarrel():Damageable(),Burnable(){
}

BurnableBarrel::BurnableBarrel(int maxHealth):Damageable(maxHealth), Burnable(){
}

void BurnableBarrel::takeDamage(int dmg, string el){
    if(!this->isDestroyed()){
        if(el =="fire"){
            this->burn();
        }
        else if(el == "water"){
            this->watered();
        }
        if(isBurned()){
            dmg *= multiplier;
        }
        Damageable::takeDamage(dmg);
    }
}