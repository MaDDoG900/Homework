#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"rus");

  double number, cels, fareng, kelven, ed;

  cout << "Введите единицу измерений:\n 0-Без единицы измерений \n 1-C \n 2-F \n 3-K " ;
  cin >> ed;
   if (ed == 0) {
     cout << "Введите число: ";
      cin >> number;
    cels == number;
    fareng == number*1,8 + 32;
    kelven == number + 273;
    cout << "Вы ввели: "<< number <<"\n";
     cout <<"C: " << cels <<"\n" <<"F: " << fareng <<"\n" <<"K: " << kelven;
  }
  else {
   if (ed == 1) {
     cout << "Введите число: ";
      cin >> number;
    cels == number;
    fareng == number*1,8 + 32;
    kelven == number + 273;
    cout << "Вы ввели: "<< number <<"\n";
     cout <<"C: " << cels <<"\n" <<"F: " << fareng <<"\n" <<"K: " << kelven;
  }
  else {
    if (ed == 2) {
     cout << "Введите число: ";
      cin >> number;
    cels == (number - 32) / 1,8;
    fareng == number;
    kelven == 5*(number-32)/9 + 273;
    cout << "Вы ввели: "<< number <<"\n";
     cout <<"C: " << cels <<"\n" <<"F: " << fareng <<"\n" <<"K: " << kelven;
  }
  else {
    if (ed == 3) {
     cout << "Введите число: ";
      cin >> number;
    cels == number - 273;
    fareng == 9*(number-273) / 5 + 32;
    kelven == number;
    cout << "Вы ввели: "<< number <<"\n";
     cout <<"C: " << cels <<"\n" <<"F: " << fareng <<"\n" <<"K: " << kelven;
  }
  else {
    cout << "Ошибка ";
  /*cout << "Введите число: ";
  cin >> number;
  //cin >> cels;
  cin.ignore();
  //cout << "Вы ввели: "<< number <<"\n" << cels ;
fareng = number * 2;
cout <<   << fareng ;*/

}
  }
  }
  }
return 0;
  }
