/* rand example: guess the number */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
#include <conio.h>
#include <unistd.h>

using namespace std;

int main ()
{
  int a, b, c, guess;
  string diffculty;
  string restart;
  /* initialize random seed: */
  do{srand (time(NULL));

  cout << "Enter diffuclty: easy/medium/hard/superhard" << endl;
  cin >> diffculty;

  if (diffculty == "easy") {
    a = rand() % 10 + 1;
    b = rand() % 10 + 1;
    cout << "a" << " = " << a << endl << "b" << " = " << b << endl;
    cout << "You have 5 seconds to remember";
    sleep(5);
    system("cls");
    cout << "Guess a: " << endl;
    cin >> guess;
    if (guess == a) {
    cout << "you got it right" << endl;
  
  
  }else if (guess != a) {
    cout << "You got this number wrong" << endl;
  }

  cout << "Guess b" << endl;
  cin >> guess;
  if (guess == b) {
    cout << "you got it right" << endl;
  
  } else if (guess != b) {
    cout << "You got this number wrong" << endl;
}
  }

  else if (diffculty == "medium") {
    a = rand() % 100 + 1;
    b = rand() % 100 + 1;
    c = rand() % 100 + 1;
    cout << "a" << " = " << a << endl << "b" << " = " << b << endl << "c" << " = " << c << endl;
    cout << "You have 15 seconds to remember";
    sleep(15);
    system("cls");
    cout << "Guess a: " << endl;
    cin >> guess;
    if (guess == a) {
    cout << "you got it right" << endl;
  
  }else if (guess != a) {
    cout << "You got this number wrong" << endl;
  }

  cout << "Guess b" << endl;
  cin >> guess;
  if (guess == b) {
  cout << "you got it right" << endl;
  
  }else if (guess != b) {
  cout << "You got this number wrong" << endl;
  }
  cout << "Guess C" << endl;
  cin >> guess;

  if (guess == c) {
    cout << "you got it right" << endl;
  }
  else if (guess != c) {
    cout << "you got it wrong" << endl;
  
  }
}

  
  else if (diffculty == "hard") {
    a = rand() % 1000 + 1;
    b = rand() % 1000 + 1;
    c = rand() % 1000 + 1;
    cout << "a" << " = " << a << endl << "b" << " = " << b << endl << "c" << " = " << c << endl;
    cout << "You have 15 seconds to remember";
    sleep(15);
    system("cls");
    cout << "Guess a: " << endl;
    cin >> guess;
    if (guess == a) {
    cout << "you got it right" << endl;
  
  }else if (guess != a) {
    cout << "You got this number wrong" << endl;
  }

  cout << "Guess b" << endl;
  cin >> guess;
  if (guess == b) {
  cout << "you got it right" << endl;
  
  }else if (guess != b) {
  cout << "You got this number wrong" << endl;
  }
  cout << "Guess C" << endl;
  cin >> guess;

  if (guess == c) {
    cout << "you got it right" << endl;
  }
  else if (guess != c) {
    cout << "you got it wrong" << endl;
  
  }
  }
  
  else if (diffculty == "superhard") {
    a = rand() % 1100 + 1;
    b = rand() % 1300 + 1;
    c = rand() % 1200 + 1;
    cout << "a" << " = " << a << endl << "b" << " = " << b << endl << "c" << " = " << c << endl;
    cout << "ONLY 3 SECOND HURRY" << endl;
    sleep(3.5);
    system("cls");
    cout << "Guess a: " << endl;
    cin >> guess;
    if (guess == a) {
    cout << "you got it right" << endl;
  
  }else if (guess != a) {
    cout << "You got this number wrong" << endl;
  }

  cout << "Guess b" << endl;
  cin >> guess;
  if (guess == b) {
  cout << "you got it right" << endl;
  
  }else if (guess != b) {
  cout << "You got this number wrong" << endl;
  }
  cout << "Guess C" << endl;
  cin >> guess;

  if (guess == c) {
    cout << "you got it right" << endl;
  }
  else if (guess != c) {
    cout << "you got it wrong" << endl;
  
  }
  }

cout << "Do you wanna play again: yes/no" << endl;
cin >> restart;}

while (restart == "yes");
}