// //////////////////////////////
//
// Name:
// Course: CSCI 1470-07
// Term: Fall 2023
//
// ///////////////////////////////

// Header files are located in the folder directory.
#include "circle.h"
#include "bankaccount.h"
#include "student.h"
#include <iomanip>

int main() {

  // This line of code will make all decimal outputs to the Console round up to the second decimal place.
  cout << fixed << setprecision(2);

  // Remove the comments /* */ to test your implementation.

  // Circle
/*
  Circle myCircle(7.5);

  cout << "Area: " << myCircle.area() << endl;

  cout << "Circumference: " << myCircle.circumference() << endl;

  cout << "\nUpdating Radius.\n" << endl;
  myCircle.setRadius(13.2);

  cout << "Circle Area: " << myCircle.area() << endl;

  cout << "Circumference: " << myCircle.circumference() << endl;
*/

  cout << "\n----------------\n" << endl;

  // BankAccount
  /*
  BankAccount myAccount(123456, "Bob Bobbert", 97.50);

  myAccount.displayAccountInfo();

  cout << "\nDepositing...\n" << endl;
  myAccount.deposit(1750.60);

  cout << "Balance: " << myAccount.getBalance() << endl;

  cout << "\nWithdrawing...\n" << endl;
  myAccount.withdraw(450.30);

  cout << "Balance: " << myAccount.getBalance() << endl;
  */

  cout << "\n----------------\n" << endl;

  // Student
  /*
  Student myStudent(123456, "Bob Bobbert", 70.0);

  myStudent.displayStudentInfo();

  cout << "\nUpdating Grade...\n" << endl;
  myStudent.setGrade(100.0);

  cout << "New Grade: " << myStudent.getGrade() << endl;
  */

  return 0;
}
