#include <iostream>

using namespace std;

int main()
{
    int a = 1, i = 0;
    
    while(a < 1000)
    
    {
        if(a % 7 == 0) 
        
        i = i+a;
        a = a + 4;
        
    }
    
    cout<<i;
    
    return 0;


}
