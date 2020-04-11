#include "hello_world.hpp"
//#include "../include/hello_world.hpp"

int main()
{
    HelloWorld world1( 10U );
    HelloWorld *pWorld = new HelloWorld( 30U );

    world1.printX();
    pWorld->printX();

    delete pWorld;

    return 0;
}
