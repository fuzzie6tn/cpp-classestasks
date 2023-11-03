#include<iostream>
#include<string>
using namespace std;

class Area {
    private:
    int length, breadth;

    public:
    void setDim(int l, int b){
        length = l;
        breadth = b;
    }
    int getArea(){
        return length*breadth;
    }
};

int main(){
    Area Obj;
    int b,l;
    cout<<"Enter the value of breadth and length: ";
    cin>>b>>l;

    Obj.setDim(l,b);
    cout<<"Area: "<<Obj.getArea()<<endl;
    return 0;
}