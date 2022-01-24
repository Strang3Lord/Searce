#include <iostream>
using namespace std;

#define INT_MAX 100


int stack[INT_MAX], n=INT_MAX, top=-1;


void push(int data) {
   if(top>=n-1){
      cout<<"Overflow"<<endl;
   }else{
      top++;
      stack[top]=data;
   }
}

void pop() {
   if(top<=-1)
   cout<<"Underflow"<<endl;
   else {
      cout<< stack[top]<< " is popped" <<endl;
      top--;
   }
}

void print() {
    
    cout<<"Stack elements -> ";
   if(top>=0) {
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty"<<endl;
}

int peek()
{
    if (top < 0) {
        return -1;
    }
    else {
        int x = stack[top];
        return x;
    }
}
 

int main() {
    
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    
    pop();
    print();
    
    cout<<"Top element -> "<<peek();

   return 0;
}
