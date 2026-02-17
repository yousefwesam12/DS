#pragma once
#include <iostream>
#include <queue>
#include <stack>
#include "clsDate.h"
using namespace std;

class clsQueueLine
{
    private:
    short TotalTickets = 0;
    float  _AverageServeTime = 0;
    string _Prefix = "";

    struct _stTicketInfo
    {   
        string TicketNumber = "";
        string Date = "";
        short WaitingClients = 0;
        float ServeTimeInMinutes = 0;
    };
    
    vector <string> TicketsPrefix;
    queue <_stTicketInfo> TicketInfoQueue;

    public:
    clsQueueLine(string Prefix,float AverageServeTime)
    {
        _Prefix = Prefix;
        _AverageServeTime = AverageServeTime;
    }   
    
    void IssueTicket()
    {
        TotalTickets++;
        _stTicketInfo TicketInfo;
        TicketInfo.TicketNumber       = GetFullNameOfTicket();
        TicketInfo.Date               =  clsDate::DateToString(clsDate::GetSystemDate());
        TicketInfo.WaitingClients     =  WaitingClients();
        TicketInfo.ServeTimeInMinutes =  ExpectedTime();
        TicketsPrefix.push_back(TicketInfo.TicketNumber);
        TicketInfoQueue.push(TicketInfo);
    }
    
    void PrintInfo()
    {
        if(TicketInfoQueue.empty())
        {
            return;
        }
        cout << "\n\n\t\t\t\t\t-------------------------\n";
        cout << "\n\t\t\t\t\t\tQueue Info\n";
        cout << "\n\t\t\t\t\t-------------------------\n";
        cout << "\n\t\t\t\t\tPrefix              = " << _Prefix;
        cout << "\n\t\t\t\t\tTotal Tickets       = " << TotalTickets;
        cout << "\n\t\t\t\t\tServed Clients      = " << ServedClients();
        cout << "\n\t\t\t\t\tWaiting Clients     = " << WaitingClients(); 
        cout << "\n\t\t\t\t\t--------------------------\n";
    }

    void PrintTicketsLineRTL()
    {
        if(TicketsPrefix.empty())
        {
            return;
        }
        cout << "\n\n\t\t\t\t" << "Tickets:   ";

        for(int i = 0;i<TicketsPrefix.size();i++)
        {
            cout << TicketsPrefix[i] << " <-- ";
        }
    }
    
    void PrintTicketsLineLTR()
    {
        if(TicketsPrefix.empty())
        {
            return;
        }
        cout << "\n\n\t\t\t\t" << "Tickets:   ";

        for(int i = TicketsPrefix.size() - 1;i>=0;i--)
        {
            cout << TicketsPrefix[i] << " <-- ";
        }
        
    }

    void PrintTicketInfo(_stTicketInfo TicketInfo)
    {
        cout << "\n\n\t\t\t\t\t-------------------------\n";
        cout << "\n\t\t\t\t\t\t   " << TicketInfo.TicketNumber << "\n";
        cout << "\n\t\t\t\t\t  " << TicketInfo.Date;
        cout << "\n\t\t\t\t\t" << "  Waiting Clients = " << TicketInfo.WaitingClients << "\n";
        cout << "\t\t\t\t\t " << "     Serve Time In\n";
        cout << "\t\t\t\t\t\t"   << TicketInfo.ServeTimeInMinutes << " Minutes.\n";
        cout << "\t\t\t\t\t-------------------------\n";
    };

    void PrintAllTickets()
    {
        if(TicketInfoQueue.empty())
        {
            return;
        }
        queue <_stTicketInfo> Temp = TicketInfoQueue;

        cout << "\n\n\t\t\t\t\t\t-- Tickets -- ";

        for(int i = 1;i<=TotalTickets;i++)
        {
            PrintTicketInfo(Temp.front());
            Temp.pop();  
        }

    }

    bool ServeNextClient()
    {

        if(TicketInfoQueue.empty())
        {
            return false;
        }
        TicketInfoQueue.pop();
        return true;    
    }

    int WaitingClients()
    {
        return TicketInfoQueue.size();
    }

    short ServedClients()
    {
        return TotalTickets - TicketInfoQueue.size();
    }

    string GetFullNameOfTicket()
    {
        return _Prefix + to_string(TotalTickets);
    }

    float ExpectedTime()
    {
        return _AverageServeTime * WaitingClients();
    }
};