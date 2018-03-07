#include <iostream>
#include <iomanip>

#include "PiggyBank.h"

using namespace std;

int main()
{
  // First piggy bank using the default constructor
  PiggyBank myBank;
  cout << "myBank has $" << setprecision(2) << fixed << myBank.getSavings() << endl;

  cout << "Depositing $100.34 into myBank" << endl;
  myBank.depositMoney(100.34);
  cout << "myBank now has $" << myBank.getSavings() << endl;

  cout << "Depositing $0.01 into myBank" << endl;
  myBank.depositMoney(0.01);
  cout << "myBank now has $" << myBank.getSavings() << endl;

  cout << "Depositing $-10.00 into myBank" << endl;
  bool depositSuccess = myBank.depositMoney(-10.00);
  cout << "Did deposit succeed: " << (depositSuccess ? "yes" : "no") << endl;
  cout << "myBank still has $" << myBank.getSavings() << endl;

  double retrievedMoney = myBank.smash();
  cout << "Smashed myBank, retrieved $" << retrievedMoney << endl;
  cout << "Money left in myBank $" << myBank.getSavings() << endl;

  cout << "Depositing $5.00 into broken myBank" << endl;
  depositSuccess = myBank.depositMoney(5.00);
  cout << "Did deposit succeed: " << (depositSuccess ? "yes" : "no") << endl;
  cout << "myBank still has $" << myBank.getSavings() << endl;

  // Second piggy bank using the parameterized constructor
  PiggyBank otherBank(100.00);
  cout << "otherBank has $" << setprecision(2) << fixed << otherBank.getSavings() << endl;

  cout << "Depositing $100.34 into otherBank" << endl;
  otherBank.depositMoney(5.25);
  cout << "otherBank now has $" << otherBank.getSavings() << endl;

  cout << "All done! Destructors will be called when PiggyBanks go out of scope..." << endl;

  // Destructor should output "Poor Broken Pig!" for only myBank

  return 0;
}
