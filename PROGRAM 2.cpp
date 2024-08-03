//ISHAN SHAH 23070123063
#include <iostream>

using namespace std;

int main()
{
int x,y;
cout<<"enter the x coordinate:"<<endl;
cin>>x;
cout<<"enter the y coordinate:"<<endl;
cin>>y;
    
if(x > 0 &&  y > 0)
{
    cout<<"the number is in first quadrant"<<endl;
}
else if(x < 0 && y < 0)
cout<<"the number is in fourth quadrant"<<endl;
    
else if(x < 0 && y > 0)
cout<<"the number is in second quadrant"<<endl;

else 
cout<<"the number is in third quadrant"<<endl;
    
}
/*
enter the x coordinate:
2
enter the y coordinate:
4
the number is in first quadrant
enter the x coordinate:
-2
enter the y coordinate:
3
the number is in second quadrant
enter the x coordinate:
-2
enter the y coordinate:
-4
the number is in fourth quadrant

*/
