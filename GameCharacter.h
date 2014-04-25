#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H

#include <string>

class GameCharacter {
public:

    GameCharacter( std::string name ) : m_name( name ) {
    }

    int healthValue( ) const {
        //...
        // выполнить предварительные действия
        //...

        // выполнить реальную работу
        int retVal = doHealthValue( );

        //...
        // выполнить завершающие действия
        //...

        return retVal;
    }

    std::string name( ) const {
        return m_name;
    }

private:

    virtual int doHealthValue( ) const { /* производные классы могут
                                         * переопределить эту функцию
                                         */
        // алгоритм по умолчанию для вычисления
        // жизненной силы персонажа
        return 1;
    }

    std::string m_name;
};

#endif // GAMECHARACTER_H
