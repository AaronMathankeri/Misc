// 5 Find the only element in an array that only occurs once.

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(int argc, char *argv[])
{
      cout << "Opposite of Mode" << endl;

      vector<int> myVctr{ 1, 2, 1, 1, 3, 3, 1, 3, 3, 3, 1, 1};

      for (auto itr : myVctr)
	    cout << itr << " ";
      cout << endl;

      map<int, int> myMap;
      int keys[] = {1, 2, 3};

      for( auto itr: myVctr)   
		  myMap[itr]++;

      for (auto it = myMap.begin(); it != myMap.end(); ++it) 
	    {
		  if(it != myMap.end())
			cout << it->first << " " << it->second <<endl;
	    }
      
      int idx = -1;
      int onlyOnce = 2;

      for (int iter = 0; iter < 3; ++iter) 
	    {
		  if( myMap[iter] == 1)
			{
			      idx = iter;
			      onlyOnce = myMap[iter];
			}
	    }

      cout << idx << " only appears " << onlyOnce << " times" << endl;


      return 0;
}
