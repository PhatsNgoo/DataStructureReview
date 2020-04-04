
#include <iostream>

int main(){
    int realValue=5;
    int *pointerToValue=&realValue;
    std::cout<<realValue<<"\n";
    std::cout<<"Pointer value:"<<pointerToValue<<"\n";
    std::cout<<"Get value through pointer:"<<*pointerToValue<<"\n";
    std::cout<<"Pointer of value:"<<&realValue<<"\n";

    std::cout<<"After change value"<<"\n";
    realValue+=1;
    std::cout<<realValue<<"\n";
    std::cout<<"Pointer value:"<<pointerToValue<<"\n";
    std::cout<<"Get value through pointer:"<<*pointerToValue<<"\n";
    std::cout<<"Pointer of value:"<<&realValue<<"\n";

    std::cout<<"Changing by using pointer"<<"\n";
    *pointerToValue+=7;
    std::cout<<realValue<<"\n";
    std::cout<<"Pointer value:"<<pointerToValue<<"\n";
    std::cout<<"Get value through pointer:"<<*pointerToValue<<"\n";
    std::cout<<"Pointer of value:"<<&realValue<<"\n";
	return 0;
}
