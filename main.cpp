#include <iostream>
#include "Player.h"
#include "Monster.h"

int main( ) {
    Player p( "Player" );
    Monster m( "Monster" );

    std::cout << p.name( ) << ": " << p.healthValue( ) << std::endl;
    std::cout << m.name( ) << ": " << m.healthValue( ) << std::endl;

    return 0;
}
