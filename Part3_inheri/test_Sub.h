#pragma once
#include <iostream>
#include "test_Super.h"

class Sub : public Super
{
    public:
        // virtual void someMethod() override;
        // virtual void someOtherMethod() { std::cout << "This is Sub someOtherMethod" << "." << std::endl; };

        // static void beStatic() {
        //     std::cout << "HI, Sub Static" << std::endl;
        // };
        using Super::overload;
        virtual void overload() { std::cout << "Sub's Overload" << std::endl; };
        // virtual int overrideTest() { return overrideMethod() * 20; };
    private:
        int mValue;
        // virtual int overrideMethod() const override { return 40; }
};
