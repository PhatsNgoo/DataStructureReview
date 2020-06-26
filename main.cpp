
#include <iostream>
#include "stack.cpp"

int main(){
    Stack<int> stack(10);
    bool checkFull=stack.isFull();
    bool checkEmpty=stack.isEmpty();
    cout<<checkEmpty<<"/"<<checkFull;
    int size=stack.size();
    cout<<"asdasdasdasdasdasd";
    cout<<size;
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(7);
    stack.push(5);
	return 0;
}
