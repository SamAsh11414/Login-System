#include <iostream>
#include <fstream>
using namespace std;

void signup() {
  string username;
  string password;

  cout << "Please type your username\n";
  cin >> username;

  cout << "Please type your password\n";
  cin >> password;

  ofstream Logins("logins.txt");

  Logins << username + "\n";
  Logins << password;

  Logins.close();
}

void login() {
  string username;
  string password;

  cout << "Please type your username\n";
  cin >> username;

  cout << "Please type your password\n";
  cin >> password;
  
  bool founduser = false;
  bool foundpass = false;
  string line;

  ifstream Logins("logins.txt");

  while(std::getline(Logins, line)) {
      if(line.find(username) && line.find(password) != string::npos){
          cout << "Username Found\n";
          cout << "Password Found\n";
          founduser = true;
          foundpass = true;
  }
}

  if (!founduser){
      cout << "Did not find username";
  }
    
  if (!foundpass){
      cout << "Did not find password";
  }
}

int main() {
    string Choice;
    cout << "do you want to login or signup?\n";
    cin >> Choice;

    if (Choice == "login") {
        login();
    }

    if (Choice == "signup") {
        signup();
    }
}