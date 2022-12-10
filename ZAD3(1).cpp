

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  
  		int A, B; 
  		cout << "Введите A,B : " ;
  		cin>>A>>B;
  		
  		ofstream output ("output.txt");

  		if (output.is_open() )
  		{
  			for(int i = A ; i <= B ; i++)
  			output <<3 * i<< "\n";
  		}
  		
  		else cout << ":( ";
  		
  		return 0;
  	}
  
  	
