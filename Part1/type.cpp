// #include <iostream>


// auto test(int num1, int num2) -> int;

// auto test(int num1, int num2) -> int
// {
//     std::cout<< __func__ << std::endl;
//     return (num1 + num2);
// }

// enum 

// int main(void)
// {
//     const int i = 41;
//     int a;
//     int b = 132;
    
//     std::cout << a << std::endl;
// }


// #include <iostream>

// enum Color
// {
//     COLOR_BLACK,
//     COLOR_RED,
//     COLOR_BLUE,
//     COLOR_GREEN
// };

// // enum class Color
// // {
// //     COLOR_BLACK,
// //     COLOR_RED,
// //     COLOR_BLUE,
// //     COLOR_GREEN
// // };

// int main()
// {
//     using namespace std;

//     int color_id = COLOR_BLACK;

//     int COLOR_BLACK = 2;

//     cout << color_id << endl;
//     cout << COLOR_BLACK << endl;
//     // Color my_color1 = static_cast<Color>(color_id);
//     // Color my_color2 = static_cast<Color>(3);
//     // if (my_color1 < 2)
//     //     cout << my_color1 << ' ' << my_color2 << endl;
// }



#include <iostream>

using namespace std;


// 참조형 반환의 경우, 참조자가 반환된다.
int& RefRetFuncOne(int &ref)
{
    ref++;
    return ref;
}


// int형 반환의 경우, 참조자 반환 때, 값이 반환된다.
int IntRetFuncOne(int &ref)
{
    ref++;
    return ref;
}

int main(void)
{
    int num1_1 = 1;
    int num1_2 = 1;
    int num1_4 = 1;
    
    int &num2_1 = RefRetFuncOne(num1_1); // 참조자를 반환 후, num2가 참조자이므로 '관계'가 하나 더 형성된다.
    int num2_2 = RefRetFuncOne(num1_2); // 참조자를 반환 후, num2가 일반변수이므로 '값'이 반환된다.
    // int &num2_3 = IntRetFuncOne(num1); // 컴파일 에러
    int num2_4 = IntRetFuncOne(num1_4); // Int형 반환 그대로=

    num1_1++;
    num1_2++;
    num1_4++;
    num2_1 += 100;
    num2_2 += 100;
    num2_4 += 100;

    cout<<endl;
    cout<<"num1: "<<num1_1<<endl;
    cout<<"num2: "<<num2_1<<endl;
    cout<<endl;

    cout<<endl;
    cout<<"num1: "<<num1_2<<endl;
    cout<<"num2: "<<num2_2<<endl;
    cout<<endl;

    cout<<endl;
    cout<<"num1: "<<num1_4<<endl;
    cout<<"num2: "<<num2_4<<endl;
    cout<<endl;



    return 0;
}