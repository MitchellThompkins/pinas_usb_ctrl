#ifndef HELLO_WORLD_HPP
#define HELLO_WORLD_HPP

#include "stdint.h"

class HelloWorld
{
    public:

        HelloWorld( int x ) :
            _x{x}
        {};
        ~HelloWorld() = default;
        HelloWorld( const HelloWorld& ) = default;
        HelloWorld( HelloWorld&& ) = default;
        HelloWorld& operator=( HelloWorld& ) = default;
        HelloWorld& operator=( HelloWorld&& ) = default;

        int getX(){ return _x; }
        void printX();

    private:

        int _x;

};

#endif
