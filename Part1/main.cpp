#include <iostream>
#include <memory>
#include "AirlineTicket.h"

using namespace std;

int main(void)
{
    // stack 메모리에 객체 생성, getter, setter
    AirlineTicket myTicket;
    myTicket.setPassengerName("Sherman T. Socketwrench");
    myTicket.setNumberOfMiles(700);
    int cost = myTicket.calculatePriceInDollars();
    cout << "This ticket will cost $" << cost << endl;

    // 스마트 포인터를 이용해서 힙 메모리에 AirlineTicket 객체 생성 -> 스마트 포인터를 활용하면 자동으로 delete
    auto myTicket2 = make_unique<AirlineTicket>();
    myTicket2->setPassengerName("Laudimore M. Hallidue");
    myTicket2->setNumberOfMiles(2000);
    myTicket2->setHasEliteSuperRewardsStatus(true);
    int cost2 = myTicket2->calculatePriceInDollars();
    cout << "This other ticket will cost $" << cost2 << endl;

    // 일반 포인터를 이용해서 힙에 AirlineTicket 객체를 생성하는 경우
    AirlineTicket* myTicket3 = new AirlineTicket();
    myTicket3->setPassengerName("sam kim");
    myTicket3->setNumberOfMiles(1000);
    myTicket3->setHasEliteSuperRewardsStatus(false);
    int cost3 = myTicket3->calculatePriceInDollars();
    cout << "This other ticket will cost $" << cost3 << endl;

    delete myTicket3;
} 