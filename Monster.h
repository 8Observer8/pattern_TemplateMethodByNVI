#ifndef MONSTER_H
#define MONSTER_H

#include "GameCharacter.h"

class Monster : public GameCharacter {
public:

    Monster( std::string name ) : GameCharacter( name ) {
    }
};

#endif // MONSTER_H
