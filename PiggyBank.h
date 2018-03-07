//
// Created by Ross Allen on 3/27/17.
//

#ifndef PIGGYBANKHW10_PIGGYBANK_H
#define PIGGYBANKHW10_PIGGYBANK_H

#include <iostream>
using namespace std;


class PiggyBank {
private:
  bool isBroken;
  double savings;
public:
  PiggyBank();//default constructor
  PiggyBank(double initialSavings);//parameterized constructor.
  double getSavings();
  bool depositMoney(double depositValue);
  double smash();
  ~PiggyBank();
};


#endif //PIGGYBANKHW10_PIGGYBANK_H
