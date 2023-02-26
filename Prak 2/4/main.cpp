#include "Tool.hpp"
#include "ReinforcedAxe.hpp"
#include "Pickaxe.hpp"
#include <iostream>

using namespace std;

int main(){
    // tool crafted! 3 2
    // pickaxe crafted! 3 2
    Pickaxe p1 = Pickaxe();
    // swing! swing! diamonds found!
    p1.use();
    // pickaxe enchanted!
    p1.enchant();
    // tool copy crafted! 3 2
    // pickaxe copy crafted! 3 2
    Pickaxe p2 = Pickaxe(p1);
    // tool crafted! 3 2
    // pickaxe crafted! 3 2
    Pickaxe* p3 = new Pickaxe();
    // pickaxe copied! 3 2
    *p3 = p1;
    // tool crafted! 3 4
    // reinforced axe crafted! 3 4
    ReinforcedAxe* r1 = new ReinforcedAxe();
    // chip chop chip chop! 3 4
    r1->use();
    // tool crafted! 3 4
    // reinforced axe copy crafted! 3 4
    ReinforcedAxe* r2 = new ReinforcedAxe(*r1);
    // reinforced axe's grip enchanted! 3 4
    r2->enchant();
    // tool crafted! 3 4
    // reinforced axe copy crafted! 3 4
    // reinforcing axe! 6 8
    // tool crafted! 6 8
    ReinforcedAxe r3 = *r2+*r1;
    // reinforced axe copy crafted! 6 8
    // reinforced axe is repaired! 6 8
    r3.repair();
    // reinforced axe destroyed! 3 4
    // tool destroyed! 3 4
    delete r1;
    delete r2;
    // reinforced axe destroyed! 3 4
    // tool destroyed! 3 4
    // reinforced axe destroyed! 6 8
    // tool destroyed! 6 8
    // pickaxe destroyed! 3 2
    // tool destroyed! 3 2
    // pickaxe destroyed! 3 2
    // tool destroyed! 3 2
}