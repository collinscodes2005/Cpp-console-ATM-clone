// 2 on first group of numbers is for UBA bank
// 5 on second group of numbers is UBA bank
// 1 on first group of numbers is FCMB bank
// 0 onnfirst group of number is firstbank
// 6 on first group of numbers is GTbank
/*


*/

#include <iostream>
using namespace std;
int main() {
  // Declaration of variables

  int accountNumber[20] = {};
  int amount;
  int pin;
  int choice;
  int passcode;
  int i, j, p;
  int phonenumber[12] = {};
  int balance = 50000;

  // getting phone number length
  //  -------- int getArrayLength = sizeof(myNumbers) / sizeof(int);
  //
  //

  int netl; // For choosing network provider
  cout << "Welcome to Intelli-Banking" << endl;
  cout << "What are we doing Today" << endl;
  cout << "1. Transfer" << endl;
  cout << "2. Airtime" << endl;
  cout << ">> ";
  cin >> choice;
  // Please write correct codes
  switch (choice) {
  case 1:
    for (i = 0; i <= 3; i++) {
      cout << "Enter your account number digit " << i << endl;
      cin >> accountNumber[i];
    }
    for (j = 0; j <= 3; j++) {
      cout << accountNumber[j];
    }
    // checking if inputed account number belongs to a particular Bank//
    if (accountNumber[0] == 2 || accountNumber[0] == 5) {
      cout << " UBA ACCOUNT DETECTED\n";
    } else if (accountNumber[0] == 3) {
      cout << " ZENITH ACCOUNT DETECTED\n";
    } else if (accountNumber[0] == 0) {
      cout << " FCMB ACCOUNT DETECTED\n";
    } else if (accountNumber[0] == 6) {
      cout << " GTBANK ACCOUNT DETECTED\n";
    }
    cout << "Enter your pin\n";
    cin >> pin;
    if (pin == 1234) {
      cout << "VALID PIN\n";
      cout << "How much do you want to transfer\n";
      cin >> amount;
      if (amount > balance) {
        cout << "INSUFFICIENT FUNDS\n";
      } else {
        cout << "TRANSACTION IN PROGRESS\n";
        cout << "YOU HAVE SUCCESFULLY TRANSFERRED " << amount;
      }
    } else {
      cout << "INVALID PIN\n";
    }

    /*     cout<<"The account number is shown as"<<accountNumber<<endl;
       break;
     */
    break;

    //IKEM & YEMI
  case 2:
    // Phone number input
    for (p = 1; p <= 11; p++) {
      cout << endl;
      cout << "input your phone number" << p << endl;
      cout << ">> ";
      cin >> phonenumber[p];
    }
    

    
    cout << endl;
    cout << "Choose your Network Provider" << endl;
    cout << "1. Airtel" << endl;
    cout << "2. Glo" << endl;
    cout << "3. Mtn" << endl;
    cout << "4. 9-Mobile" << endl;
    cout << "5. Spectranet(Mi-Fi, Router)" << endl;
    cout << ">> ";
    cin >> netl;
    if(netl ==  5)
    {
      cout << "Amount: " << endl;
      cin >> amount;
    
      if (amount > balance) {
      cout << "Insuffient Balance!!" << endl;
      }
      else{
        cout << "Recharge successful" << endl;
    cout << "new balance is " << balance - amount << endl;
      }
    }
    
    // Option to pick between airtime and data
    cout << endl;
    cout << "Buy as:" << endl;
    cout << "1. Airtime" << endl;
    cout << "2. Data" << endl;
    cout << ">> ";
    cin >> netl;

    if(netl == 2){
      cout << endl<<"Choose your desired data plan"<<endl;
      cout<<"1. 1000 for 1.5GB (monthly plan)"<<endl;
      cout<<"2. 2000 for 3GB(monthly plan)"<<endl;
      cout<<"3. 3500 for 6GB(monthly plan)"<<endl;
      cout<<"3. 1500 for 6GB (weekly plan)"<<endl;
      cout<<"4. 5000 for 20GB(Monthly plan)"<<endl;
      cout << "Amount: " << endl;
      cin >> amount;
      /*cout<<">> ";
      cin >> netl;*/
        if (amount > balance) {
      cout << "Insuffient Balance!!" << endl;
        }
        else{
      cout<<"Recharge Successful";
    cout << "new balance is " << balance - amount << endl;
        }
      
    }
    
    else{
    cout << "Amount: " << endl;
    cin >> amount;
         if (amount > balance) {
      cout << "Insuffient Balance!!" << endl;
    }
    else{
      cout<<"Recharge Successful";
    cout << "new balance is " << balance - amount << endl;
    }
      }
    
      
    

    break;

  default:
    cout << "Lol";
    break;
  }
    }
  