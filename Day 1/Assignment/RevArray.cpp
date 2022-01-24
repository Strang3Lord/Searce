//An array is a data structure that keeps items of the same kind in a single memory block. Each memory position in an array, P, of //size Q, has a unique index, I (where 0=i=Q), which may be referred as P[i] or Pi. Reverse an integer array.

#include <iostream>
using namespace std;

void reverseArray(int p[], int q) {
  for(int i = q-1 ; i >= 0 ; i--){
       cout<<p[i]<<" ";
   }
}

int main() {
   
   int q;
   cout<<"Enter the size of array = ";
   cin>>q;
   
   int p[q];
   
   for(int i = 0 ; i < q ; i++){
       cin>>p[i];
   }
   
   cout<<"Reversed Array = ";
   reverseArray(p,q);
  
   return 0;
}
