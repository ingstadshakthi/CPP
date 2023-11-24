#include <iostream>
#include<queue>
using namespace std;

int main() {
  queue<int> q;
  q.push(5);
  cout<<"Queue size is "<<q.size()<<endl;

  if(q.empty()){
    cout<<"Queue Empty"<<endl;
  }else{
    cout<<"Queue is Not Empty"<<endl;
  }

  q.pop();
  cout<<"Queue size is "<<q.size()<<endl;

  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);

  cout<<"Queue front "<<q.front()<<endl;
  cout<<"Queue rear "<<q.back()<<endl;

  return 0;
}
