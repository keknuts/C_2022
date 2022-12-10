

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    
    string chislo;
  
  	ifstream input ("output.txt");
  	
  		
  	if (input.is_open() )
  	{
  		int nomer = 1;
  		
  		while (getline(input, chislo))
  		
  		{
  			
  			cout<<nomer <<". " << chislo <<"\n";
  			
  			nomer++;
		}
	}
		
	else cout <<":(((";
  	
  	return 0;
  	}
  
  	
