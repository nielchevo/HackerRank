#include "stdafx.h"
#include "person.h"

class SuperHero : Person
{
    public:
        SuperHero();
        ~SuperHero();

        virtual void doRunning();
        virtual void doJumping();
        virtual void doWalking();

        void doFly();
        void doInvisible();

    private:

        

};




