#pragma once
#include <iostream>
#include <vector>
// #include "GamePiece.h"

template <typename T>
class Grid
{
    public:
        explicit Grid(size_t inWidth = kDefaultWidth , size_t inHeight = kDefaultHeight);  //   
        Grid(const Grid<T>& src); 
        virtual ~Grid();
        Grid<T>& operator = (const Grid<T>& rhs);

        void setElementeAt (size_t x, size_t y, const T& inElem);
        T& getElementAt(size_t x, size_t y);
        const T& getElementAt(size_t x, size_t y) const;

        size_t getHeight() const { return mHeight; };
        size_t getWidth() const { return mWidth; };
        static const size_t kDefaultWidth = 10;
        static const size_t kDefaultHeight = 10;

    private:
        void copyFrom (const Grid& src);
        void initializeCellsContainer();
        std::vector<std::vector<T>> mCells;
        size_t mHeight, mWidth;
};

template<typename T>
Grid<T>::Grid(size_t inWidth, size_t inHeight) : mWidth(inWidth), mHeight(inHeight)
{
    initializeCellsContainer();
}

template<typename T>
Grid<T>::Grid(const Grid<T>& src)
{
    copyFrom(src);    
}

template<typename T>
Grid<T>::~Grid()
{
    
}

template<typename T>
Grid<T>& Grid<T>::operator = (const Grid<T>& rhs)
{
    if (this == &rhs) {
        return *this;
    }

    copyFrom(rhs);
    return *this;    
}

template<typename T>
void Grid<T>::setElementeAt(size_t x, size_t y, const T& inElem)
{
    mCells[x][y] = inElem;
}

template<typename T>
T& Grid<T>::getElementAt(size_t x, size_t y)
{
    return mCells[x][y];
}

template<typename T>
const T& Grid<T>::getElementAt(size_t x, size_t y) const
{
    return mCells[x][y];
}

template<typename T>
void Grid<T>::initializeCellsContainer()
{
    mCells.resize(mWidth);
    for (std::vector<T>& column : mCells) {
        column.resize(mHeight);
    }
}

template<typename T>
void Grid<T>::copyFrom (const Grid& src)
{
    mWidth = src.mWidth;
    mHeight = src.mHeight;
    initializeCellsContainer();
    for (size_t i = 0; i < mWidth; i++){
        for (size_t j = 0; j < mHeight; j++){
            if (src.mCells[i][j])
                mCells[i][j] = src.mCells[i][j]->clone();
            else
                mCells[i][j].reset();
        }
    }
}
