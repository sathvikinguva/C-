#include <iostream>
#include "Account.h"
using namespace std;
int main(){
    Account sathvik_account;
    sathvik_account.set_name("Sathvik's account");
    sathvik_account.set_balance(1000.0);
    
    if(sathvik_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit Not allowed" << endl;
        
    if(sathvik_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" <<endl;
        
    if(sathvik_account.withdraw(1500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
    
    return 0;
}