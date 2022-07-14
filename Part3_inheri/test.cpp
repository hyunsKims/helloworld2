#include "test_Sub.h"
#include "test_Super.h"
#include <iostream>

int main()
{
    Sub mySub;
    // Super* mySuper = &mySub;
    // mySuper->overload(7);
    // mySuper->overload();

    mySub.overload(7);
    mySub.overload();
    mySub.overload(2.3);

    // mySub.beStatic();
    // mySuper.beStatic();

    // Sub mySub2;
    // Super& mySuper2 = mySub2;
    // mySub2.beStatic();
    // mySuper2.beStatic();

    // Sub mySub;
    // Super mySuper;
    // Super& mySuper2 = mySub;
    // std::cout << mySub.overrideTest() << std::endl;
    // std::cout <<  mySuper.overrideTest() << std::endl;
    // std::cout <<  mySuper2.overrideTest() << std::endl;

    return 0;
}