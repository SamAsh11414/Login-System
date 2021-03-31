#include <iostream>
#include <fstream>
using namespace std;

void signup() {
  string username;
  string password;

  cout << "Please type your username";
  cin >> username;

  cout << "Please type your password";
  cin >> password;

  ofstream Logins("logins.txt");

  Logins << username + "\n";
  Logins << password;

  Logins.close();
}

int main() {
    signup();
}