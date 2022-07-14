#include "call_order.h"
#include <iostream>
#include <memory>

int main()
{
    // Child child1;
    // std::cout << std::endl;
    // std::string s = child1.getParentName();
    // std::cout << s << std::endl; 

    // Parent* ptr = new Child();

    std::shared_ptr<Parent> s1 = std::make_shared<Child>(); 
    // delete ptr;
    return 0;
}