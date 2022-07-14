#include "GamePiece.h"

class ChessPiece : public GamePiece
{
    public:
        virtual std::unique_ptr<GamePiece> clone() const override;
};

std::unique_ptr<GamePiece> ChessPiece::clone() const
{
    return std::make_unique<ChessPiece>(*this);
}