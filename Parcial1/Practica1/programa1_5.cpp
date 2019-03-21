#include<iostream>
using namespace std;

int main(){
  int n=2;
  n = n+(++n);
  cout<<"Valor de n = "<<n<<endl;
  return 0;
}
