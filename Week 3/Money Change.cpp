#include <iostream>

int get_change(int amt) {
  //write your code here
  int money = 0;
  int x, y;

  //corner cases
  if (amt < 5){
    money += amt;
  }else if (5 <= amt < 10){
    money += 1;
    money = money + (amt - 5);
  }else {
    x = (amt / 10);
    money += x;
    amt = amt - (x * 10);
    y = (amt / 5);

    if (y >= 1){
      money += y;
      amt = amt - (y * 5);
      money += amt;
    }else{ 
      money += y;
    }
  }

  return money;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
  return 0;
}
