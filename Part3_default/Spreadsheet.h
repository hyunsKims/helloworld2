	
#include <string>
class SpreadsheetCell
{
    public:
        // SpreadsheetCell() = delete; // 디폴트 생성자
        // SpreadsheetCell(double initialValue); // setValue 대신 생성자 활용
        // SpreadsheetCell(const std::string& initialValue); // setValue 대신 생성자 활용
        void setValue(double value);  // private (default)
        double getValue() const;  // 메서드 선언
        void setString(const std::string& inString);
        const std::string& getString() const;

    private:
        double mValue;
        double stringToDouble(const std::string& inString) const;
        std::string doubleToString(double inValue) const;
        std::string mString;

};