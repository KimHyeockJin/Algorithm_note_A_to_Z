

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> arr){
  for(int i=0; i<arr.size(); i++){
    cout << arr.at(i) << " ";
  }
}
void mySort(vector<int> arr){
  vector<int> out;
  auto loc = out.begin();
  int size = arr.size();
  out.push_back(arr.at(0));
  for(int i=1; i < size; i++){
    //cout << min_element(arr.begin(), arr.end()) - arr.begin();
    loc = upper_bound(out.begin(),out.end(), arr.at(i));
    out.insert(loc, arr.at(i));
  }
  print(out);
}

int main(){
  int n = 6;
  vector<int> arr = {6, 15,  4,  7,  3,  6,  1};
  mySort(arr);
}
