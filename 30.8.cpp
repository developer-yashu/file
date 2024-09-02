#include <iostream>
using namespace std;
class Abc
{   public:
    Abc(){
    cout<<"Hello World";
}
 };
int main()
{
    Abc obj
}


-----------------------------------------------------------
#include <iostream>
using namespace std;
class Abc
{   public:
    Abc(){
    cout<<"\nHello World";
}
 };
int main()
{
    Abc obj;
    Abc obj1;
}

-----------------------------------------------------------------------------------
#include <iostream>
using namespace std;
class Abc
{   public:
    Abc(int k){
    cout<<"k is value is "<<k<<"\n";
}
 };
int main()
{
    Abc obj(100);
    // Abc obj1;
}

---------------------------------------------------------------------------------------------


#include <iostream>
using namespace std;
class Abc
{   public:
    Abc(){
        cout<<"enter the number\n";
    }
    Abc(int k){
    cout<<"k is value is "<<k<<"\n";
}
 };
int main()
{
    Abc obj(100);
    Abc obj1;
    Abc obj2;
}
---------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;
class Abc
{
    public:
    Abc()
    {
        cout<<"\nenter the number";
    }
    Abc (int k,int y){
    cout<<"\nk value"<<k<<"\n"<<y;
}
};
int main()
{
   Abc obj1;
   Abc obj(19,99);
}

---------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;
class Abc
{
    public:
    Abc(string k)
    {
        cout<<k<<endl;
    }
};
int main()
{
   Abc obj("kittu");
   Abc obj1("yashu");
};