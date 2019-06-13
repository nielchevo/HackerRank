#include <string.h>
#include <iostream>

using namespace std;

int numOfIds(string pool) {
    int result = 0;
    if(pool.length() < 11)
        return 0;

    int limit = pool.length()/11;

    for (int i=1; i <= limit; i++)
    {
        int header = (11 * i) - 11;
        if(pool[header] == '8')
        {
            result++;
        }
    }

    return result;
}