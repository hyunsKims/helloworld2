#include <iostream>
#include <string>

class Something
{
public:
    Something() {std::cout << "2";}
    virtual ~Something() {std::cout << "2"; }
};

class Parent
{
public:
    Parent() { std::cout << "1";}
    virtual ~Parent() { std::cout << "1";}
    virtual std::string getParentName() const { return "Parent Name"; }
};

class Child : public Parent
{
public:                     
    Child() { std::cout << "3"; }
    virtual ~Child() { std::cout << "3"; }
    virtual std::string getParentName() const override { return Parent::getParentName() + " " + "Son Name"; };
private:
    Something mDataMember;
};


// #include <iostream>

// class Something
// {
//     public:
//     Something() {std::cout << "2";}
//     virtual ~Something() {std::cout << "2"; }
	
// };
// class Parent
// {
//     public:
//     Parent() { std::cout << "1";}
//     virtual ~Parent() { std::cout << "1";}
// };
// class Child : public Parent
// {
//     public:                     
//     Child() { std::cout << "3"; }
//     virtual ~Child() { std::cout << "3"; }
//     private:
//     Something mDataMember;
// };

// int main()
// {
//     Parent* ptr = new Child();  
// 		delete ptr;
// 		//생성 순서 1 -> 2 -> 3
// 		//소멸 순서 1
// 		// Parent smart_pointer = std::shared_ptr<Child>(); // 컴파일 에러
//     return 0;
// }