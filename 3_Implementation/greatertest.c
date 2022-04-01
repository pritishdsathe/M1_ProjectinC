#include "unity.h"

extern void greater();

void setUp(void)
{   
}

void tearDown(void)
{

}

int main()
{
    UnityBegin(NULL);

    RUN_TEST(greater);
    
    return(UnityEnd());
}