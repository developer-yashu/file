// 1. 1 1 2 3 5 8 13 .....
//     a=1 b=1 c =a+b 

#include <iostream>
using namespace std;
// 1 1 2 3 5 8 13 .....
// a=1 b=1 c =a+b
// a3=a1+a2
// c=a+b
// a4=a2+a3
// d=b+c
// a5=a3+a4
// a6=a4+a5
// an=a(n-2)+a(n-1)
int main()
{
   int a=1,b=1,c;
   cout<<" "<<a<<" ";
   for(int i=3;i<9;i++){
      
       c=a+b;
       cout<<b<<" ";
       a=b;
       b=c;
   }
    return 0;
}

----------------------------------------------------------------------------------------------------------

// 2. 1 2 2 4 8 32 ....
//   a=1 b=2 c =a*b

#include <iostream>
using namespace std;

int main()
{
   int a=1,b=2,c;
   cout<<" "<<a<<" ";
   for(int i=3;i<8;i++){
      
       c=a*b;
       cout<<b<<" ";
       a=b;
       b=c;
   }
    return 0;
}

----------------------------------------------------------------------------------------------------------
3
1 2 3 6 11 20 ....
a=1 b=2 c=3  d =a+b+c
 
#include <iostream>
using namespace std;

int main()
{
   int a=1,b=2,c=3,d;
    cout<<" "<<a<<" ";
   for(int i=3;i<8;i++){
      
       d=a+b+c;
       cout<<b<<" ";
       a=b;
       b=c;
       c=d;
   }
    return 0;
}

----------------------------------------------------------------------------------------------------------
4
// 1 2 4 8 32 ....
// a=1 b=2 c= power of 2 

#include <iostream>
using namespace std;
int main()
{
   int a=1,b=2,c;
   cout<<" "<<a<<" ";
   for(int i=3;i<8;i++){
      
       c=a*b;
       cout<<c<<" ";
       a=b;
       b=c;
   }
    return 0;
}

----------------------------------------------------------------------------------------------------------
5

// 1 2 3 6 18 .....
// a =1 b=2 c=3 d =c*b 

#include <iostream>
using namespace std;

int main()
{
   int a=1,b=2,c=3,d=c*b;
    cout<<" "<<a<<" ";
   for(int i=3;i<8;i++){
      
       d=c*b;
       cout<<b<<" ";
       a=b;
       b=c;
       c=d;
   }
    return 0;
}






