#include <iostream>
#include "clsQueueLine.h"
using namespace std;

int main()
{
    system("clear");
    clsQueueLine PayBillsQueue("A0",10);
    clsQueueLine SubscriptionsQueue("B0",5);

    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();    
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();

    cout << "\n" << "Pay Bills Queue Info:\n";
    PayBillsQueue.PrintInfo();

    PayBillsQueue.PrintTicketsLineRTL();
    PayBillsQueue.PrintTicketsLineLTR();

    PayBillsQueue.PrintAllTickets();

    PayBillsQueue.ServeNextClient();
    cout << "\n" << "Pay Bills Queue After Serving One Client:\n\n";
    PayBillsQueue.PrintInfo();

    cout << "\n" << "Subscriptions Queue Info:\n";
    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();

    SubscriptionsQueue.PrintInfo();


    SubscriptionsQueue.PrintTicketsLineRTL();
    SubscriptionsQueue.PrintTicketsLineLTR();

    SubscriptionsQueue.PrintAllTickets();

    
    cout << "\n" << "Subscriptions Queue After Serving One Client:\n\n";
    SubscriptionsQueue.ServeNextClient();
    SubscriptionsQueue.PrintInfo();

}