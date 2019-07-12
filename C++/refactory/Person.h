#include "stdafx.h"

using namespace std;

class Person
{
 
    enum Gender
    {
        Male = 01,
        Female= 02,
        undefined = 00
    };

    struct DoB
    {
        int Day;
        int Month;
        int Year;
    };
  
    private:
        string m_Name;
        Gender m_Gender; 
    
    public:

        Person();
        Person(string mName, Gender mGender, DoB mDoB);
        ~Person();

        virtual void doRunning();
        virtual void doWalking();
        virtual void doJumping();

};