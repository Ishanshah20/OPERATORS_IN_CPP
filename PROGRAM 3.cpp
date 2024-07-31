//ARYAN THORAT 23070123032
#include <iostream>

using namespace std;

int main() {
    int m1,m2,m3,m4,m5,avg;
    cout<<"Enter the marks for 5 subjects:"<<endl;
    cin>>m1>>m2>>m3>>m4>>m5;
    avg = (m1+m2+m3+m4+m5)/5 ;
    if(avg>=90)
    cout<<"the grade is O"<<endl;
    else if(80<avg<90)
    cout<<"the grade is A+"<<endl;
    else if(70<avg<80)
    cout<<"the grade is A"<<endl;
    else if(60<avg<70)
    cout<<"the grade is B"<<endl;
    else 
    cout<<"the grade is F"<<endl;
    
}
