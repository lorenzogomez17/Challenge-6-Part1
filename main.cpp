#include <iostream> 
using namespace std;
#include <array>
#include <string>
//LD=Letter Differnce 
int LD (string one, string two){
  int sum=0;
  for (unsigned i=0; i<one.size (); i++){
  sum +=abs(int(one[i])- int(two[i]));
  }
  return sum;
}
int main () {
  cout << LD("word","werd");

  return 0;
}