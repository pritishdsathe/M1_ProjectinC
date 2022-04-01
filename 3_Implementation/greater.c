#include "stdio.h"
#include "unity.h"

int greater(char char1, char char2)
{
    //For Rock, Paper, Scissors- Returns 1 if c1> c2 and 0 otherwise. If c1==c2 it will return -1

    if (char1 == char2)
    {
        return -1;
    }

    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

    else if ((char1 == 'r') && (char2 == 'p'))
    {
        return 1;
    }

    else if ((char2 == 'r') && (char1 == 'p'))
    {
        return 0;
    }

    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }

    TEST_ASSERT_EQUAL(1,greater('r','s'));
    TEST_ASSERT_EQUAL(0,greater('r','s'));
    TEST_ASSERT_EQUAL(1,greater('r','p'));
    TEST_ASSERT_EQUAL(0,greater('r','p'));
    TEST_ASSERT_EQUAL(1,greater('s','p'));
    TEST_ASSERT_EQUAL(1,greater('s','p'));
}

#if 0
int main()
{
    greater('r','s');
    greater('a','b');
    greater('s','p');
    greater('r','p');

    return 0;
}
#endif