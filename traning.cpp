#include <iostream>
#include <random>
using namespace std;
int number_gues() {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dist(1, 100);

  int randomNumber = dist(gen);
  int number{};
  int counter{};
  bool cond = true;

  cout << "Try to guess number from 1 to 100--> ";
  while (cond) {
    ++counter;
    cin >> number;
    if (number == randomNumber) {
      cout << "U make " << counter << " tries!!";
      cond = false;
    } else if (number < randomNumber && (randomNumber - number) <= 10) {
      cout << "U r so close little bit higher) " << endl;
    } else if (number < randomNumber && (randomNumber - number) <= 25) {
      cout << "U r close  bit higher) " << endl;
    } else if (number < randomNumber && (randomNumber - number) < 35) {
      cout << "Nah man higher) " << endl;
    } else if (number > randomNumber && (number - randomNumber) <= 10) {
      cout << "U r so close little bit lower) " << endl;
    } else if (number > randomNumber && (number - randomNumber) <= 25) {
      cout << "U r close bit lower) " << endl;
    } else if (number > randomNumber && (number - randomNumber) < 35) {
      cout << "Nah man lower) " << endl;
    }
  }
  return counter;
}
int main() {
  cout << "Hello this is my first programm in C++, wish me luck in future)" << endl;
  number_gues();
  return 0;
}
