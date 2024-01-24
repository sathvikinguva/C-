#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
using namespace std;

class Account
{
private:
    string name;
    double balance;
    
public:
    void set_balance(double bal){ balance = bal; }
    double get_balance(){ return balance; }
    
    void set_name(string n);
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amoount);
};

#endif // _ACCOUNT_H_
