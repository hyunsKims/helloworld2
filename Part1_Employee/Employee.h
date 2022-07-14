#pragma once
#include <string>
namespace Records{
    const int kDefaultStartingSalary = 30000; //신입 사원의 첫 급여 액수

    class Employee
    {
        public:
            Employee(); // 생성자
            void promote(int raiseAmount = 1000); // 승진 메서드
            void demote(int demeritAmount = 1000); // 징계 메서드
            void hire(); // 종업원 채용 또는 재채용
            void fire(); // 종업원 해고
            void display() const; // 콘솔에 종업원 정보 출력

            // 게터, 세터
            void setFirstName(const std::string& firstName);
            const std::string& getFirstName() const;

            void setLastName(const std::string& lastName);
            const std::string& getLastName() const;

            void setEmployeeNumber(int employeeNumber);
            int getEmployeeNumber() const;

            void setSalary(int newSalary);
            int getSalary() const;

            bool getIsHired() const;
            bool getIsFired() const;

        private:
            // 멤버 변수 설정, 클래스 밖에서 보는 것, 수정 모두 못함.
            std::string mFirstName;
            std::string mLastName;
            int mEmployeeNumber;
            int mSalary;
            bool mHired;
            bool mFired;
    };
}