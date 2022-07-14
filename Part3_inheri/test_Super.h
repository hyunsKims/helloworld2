#pragma once
class Super
{ 
    public:
        // virtual void someMethod() { std::cout << "This is Super some Method" << "gg" << "." << std::endl;};

        // static void beStatic() {
        //     std::cout << "HI, Super Static" << std::endl;
        // };

        // method overload
        virtual void overload() { std::cout << "Super Overload" << std::endl; };
        virtual void overload(int i) { std::cout << "Super Overload" << " " << i << "!!" << std::endl; };
        virtual void overload(double d) { std::cout << "Super Overload" << " " << d << "double" << std::endl; };
        // virtual int overrideTest() { return overrideMethod() * 10; };
    
    private:
        // virtual int overrideMethod() const { return 30; };
};