#include "CppUTest/TestHarness.h"
#include "hello_world.hpp"

TEST_GROUP(TestHelloWorld)
{
    void setup()
    {
    }

    void teardown()
    {
    }
};
 
TEST(TestHelloWorld, CheckX)
{
    static constexpr int x = 78U;
    HelloWorld *pWorld = new HelloWorld( x );

    CHECK_EQUAL(x, pWorld->getX());

    delete pWorld;
}
