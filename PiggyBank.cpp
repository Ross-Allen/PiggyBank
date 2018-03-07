//
// Created by Ross Allen on 3/27/17.
//

#include "PiggyBank.h"

PiggyBank::PiggyBank(){
  //set isBroken() bool to false and savings to 0.0.
  isBroken = false;
  savings = 0.0;
}
PiggyBank::PiggyBank(double initialSavings){
  //should return one parameter, the initial savings value for your piggy bank, as well as initialize isBroken to false.
  savings = initialSavings;
  isBroken = false;
}
double PiggyBank::getSavings(){
  //accessor function that should return the amount stored in the savings variable.
  return savings;
}
bool PiggyBank::depositMoney(double depositValue){
  //takes a double and adds that value to what is stored in the piggy's savings.
  if(depositValue <= 0){
    return false;
  }else if (isBroken == false && depositValue >= 0){
    savings += depositValue;
    return true;
  }else if (isBroken == true)
  return false;
}
double PiggyBank::smash(){
  //should change the broken bool so it indicates the piggy bank is broken, reset the savings in the piggy bank to 0.0
  //and return the money in the piggy bank (before it was reduced to 0.0).
  isBroken = true;
  double tempVal;
  tempVal = savings;
  savings = 0.0;
  return tempVal;
}
PiggyBank::~PiggyBank(){
  //should check if the piggy bank is broken and output the message if it is broken. (Poor Broken Pig!).
  if(isBroken == true){
    cout << "Poor Broken Pig!" << endl;
  }
}
