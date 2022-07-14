#include <vector>
#include <iostream>
#include "Grid.h"

int main()
{

    Grid<int> myIntGrid;
    Grid<double> myDoubleGrid(11, 11);
    myIntGrid.setElementeAt(0, 0, 10);
    int x = myIntGrid.getElementAt(0, 0);
    std::cout << x << std::endl;

    Grid<int> grid2(myIntGrid); // 복제 생성자
    Grid<int> anotherGrid;
    anotherGrid = grid2;  // 대입 연산자
    
    return 0;
}