#include <iostream>
using namespace std;

class Queue{
  private:
    int front;
    int rear;
    int *arr;
    int size;
  public:
    Queue(int size){
      this->size = size;
      arr = new int[size];
      front = -1;
      rear = -1;
    }

    void push(int data){
      // Overflow
      // Empty
      // circular 
      // normal
      if((front == 0 && rear == size -1) || (front = rear + 1))
        cout<<"Overflow"<<endl;
      else if(front == -1 && rear == -1){
        arr[++rear] = data;
        front++;
      }
      else if(front != 0 && rear == size -1){
        rear = 0;
        arr[rear] = fata; 
      }else{
        arr[++rear] = data;
      }
    }

    void print(){
      cout<<endl;
      cout<<"Queue Elements ";
      for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }

    void pop(){
      // Underflow
      if(rear == -1 && front == -1){
        cout<<"Queue Underflow"<<endl;
      }
      // Last element
      else if(front == rear){
        arr[front] = -1;
        front = -1;
        rear = -1;
      }
      else if(front == size - 1){
        arr[front] = -1;
        front = 0;
      }
      // Normal Case
      else {
        arr[front++] = -1;
      }
    }
    bool empty(){
      return rear == -1;
    }

    int getSize(){
      return rear - front + 1;
    }

    int getFront(){
      if(front == -1){
        cout<<"No Element in Queue"<<endl;
      }else{
        return arr[front];
      }
    }

    int getRear(){
      if(rear == -1){
        cout<<"No Element in Queue"<<endl;
      }else{
        return arr[rear];
      }
    }
};

int main() {

  Queue q(5);
  q.print();
  q.push(5);
  q.push(10);
  q.push(15);
  q.push(25);
  q.print();
  cout<<"front element "<<q.getFront()<<endl;
  cout<<"Rear element "<<q.getRear()<<endl;
  cout<<"Queue Size "<<q.getSize()<<endl;
  q.pop();
  q.pop();
  q.pop();
  q.print();
  if(q.empty()){
    cout<<"Queue is Empty"<<endl;
  }else{
    cout<<"Queue is not Empty"<<endl;
  }
  q.print();
  return 0;
}
