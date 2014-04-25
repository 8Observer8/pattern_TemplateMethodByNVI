#ifndef PLAYER_H
#define PLAYER_H

#include "GameCharacter.h"

class Player : public GameCharacter {
public:

    Player( std::string name ) : GameCharacter( name ) {
    }

private:

    int doHealthValue( ) const {
        return 2;
    }
};

#endif // PLAYER_H
