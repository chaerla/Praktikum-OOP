#include "ExplodableBarrel.hpp"
#include <iostream>

using namespace std;
ExplodableBarrel::ExplodableBarrel() : Damageable(1), Explodable(){
    radius = 5;
}

ExplodableBarrel::ExplodableBarrel(int r, int baseDmg): Damageable(1), Explodable(baseDmg){
    radius = r;
}

void ExplodableBarrel::takeDamage(int dmg, string el){
    if(!isDestroyed()){
        Damageable::takeDamage(dmg);
        if (isDestroyed()){
            explode(radius);
        }
    }
}
