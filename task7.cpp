#include<iostream>
#include<string>
using namespace std;

class Date{
    private:
    int day, month, year;

    public:
    void setData(int d, int m, int y){
        day = d;
        month = m;
        year = y;
    }
    void getData(){
        cout<<"Enter day, month and year: ";
        cin>>day>>month>>year;
    }
    void validate(){
        if (day<=30 && month<=12 || year<=3000){
            cout<<"Valid Date"<<endl;
        }else
         cout<<"Invalid date, try again!";
    }
};
int main(){
    Date date;
    date.getData();
    date.validate();
}