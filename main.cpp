#include "DoubleLinkedList.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  DoubleLinkedList<int> list;
  list.addFront(1);
  list.addFront(2);
  list.addBack(3);

  cout<<"Current list:"<<endl;
  list.printList();
  list.addFront(2);

  cout<<endl;
  cout<<"Current list:"<<endl;
  list.printList();

  cout<<endl;
  cout<<"List has duplicates?"<<endl;
  if (list.containsDups()) {

    cout<<"YES"<<endl;

  }
  else {

    cout<<"NO"<<endl;

  }

  list.removeAt(1);

  cout<<endl;
  cout<<"Current list:"<<endl;
  list.printList();

  cout<<"List has duplicates?"<<endl;
  if (list.containsDups()) {

    cout<<"YES"<<endl;

  }
  else {

    cout<<"NO"<<endl;

  }

  return 0;
}
