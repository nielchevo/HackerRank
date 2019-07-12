#include "Person.h"

using namespace std;

class Person
{
    Person()
    {

    }

    ~Person()
    {

    }
    
    void Person::doJumping()
    {
        printf("person is jumping");
    }

    void Person::doRunning()
    {
        printf("person is running");
    }

    void Person::doWalking()
    {
        printf("person Is walking");
    }
};