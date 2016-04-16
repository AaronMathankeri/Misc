#include <iostream>
#include <fstream>	    
#include <math.h> 
using namespace std;

int main(int argc, char *argv[])
{
      cout << " generate  rand1 from rand5" << endl;
      int v5, v7;

      ofstream myfile, myotherFile;
      myfile.open ("rand1.txt");
      myotherFile.open("rand7.txt");

      for (int iter = 0; iter < 100; ++iter) 
	    {
		  v5= rand() % 5 ;
		  myfile << v5 << endl;
		  //cout <<"v5 "<< v5 << endl;

		  v7 = sqrt(12*v5 + 1 );
		  myotherFile << v7 << endl;
		  //cout <<"v7 "<< v7 << endl;
	    }
      myfile.close();
      myotherFile.close();
      return 0;
}
///pdf transformation: 
