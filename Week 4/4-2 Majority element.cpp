Good job! (Max time used: 0.04/1.00, max memory used: 22155264/536870912.)

#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>


using std::vector;
using namespace std;

int get_majority_element(vector<int> &a, int right) {
  // if (left == right) return -1;
  // if (left + 1 == right) return a[left];
  //write your code here

  unordered_map<int, int> mp;

  for(int i = 0; i < right; i++){
    mp[a[i]]++;
  }
  int s = right / 2;
  // cout<<"sum half : "<< s<<endl;
  int flag;

  for(auto i: mp){
    // cout<<i.first<<" "<<i.second<<endl;
    if (i.second > s){
      // cout<< i.second;
      flag = 1;
      return flag;
      break;
    }
    else if (i.second <= s){
      flag = 0;
    }
  }
  return flag;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << (get_majority_element(a, a.size())) << '\n';
}
