// 6 Find the common elements of 2 int arrays
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(int argc, char *argv[])
{
      cout << "Find the Common Ground" << endl;

      int size = 5;
      vector<int> vec1(size);
      vector<int> vec2(size);


      srand((unsigned)time(0)); 
     
      for(int i = 0; i< size; ++i){ 
	    vec1[i] = (rand()%10)+1; 
	    vec2[i] = (rand()%10)+1; 
      } 

      cout << "Vector 1 " << endl;
      for ( auto it: vec1)
	    cout << it << " ";
      cout << endl;

      cout << "Vector 2 " << endl;
      for ( auto it: vec2)
	    cout << it << " ";
      cout << endl;

      for ( auto it: vec1)
	    {
		        for ( auto cnt: vec2)
			      {
				    if(it == cnt)
					  {
						cout << " Found a Match! " << it << " " << cnt << endl;
					  }
			      }
	    }

      return 0;
}

