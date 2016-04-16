// 1 Find the most frequent integer in an array

//easy way: use switch cases
//better way: use hash table
#include <iostream>
#include <vector>
#include <map>
#include <time.h>

using namespace std;



int *getRandomArray(){
      static int array[10000000];
      
      int size = 10000000;
      srand((unsigned)time(0)); 
     
      for(int i=0; i<size; i++){ 
	    array[i] = (rand()%5)+1; 
	    //cout << array[i] << " ";
      } 
      cout << endl;
      return array;

}

int main(int argc, char *argv[])
{
      cout << "Find Mode of Int Array" << endl;
      int size = 10000000;
      int *ptr = getRandomArray();

      //////////////time code below
      clock_t t1,t2, t3, t4;
      t1=clock();

      map<int, int> myHashTable;
      int keys[] = {1, 2, 3, 4, 5};
      
      for (int iter = 0; iter < size; ++iter) 
	    {
		  myHashTable[ptr[iter]]++;
	    }

      //Find Max:
      int max = -1;
      int index = -1;
      for (int iter = 0; iter < 5; ++iter) 
	    {
		  if(max < myHashTable[iter])
			{
			      max = myHashTable[iter];
			      index = iter;
			}
	    }


      cout << endl;
      cout << index <<" is the mode appearing " << max << " times" << endl;

      t2=clock();
      double diff ((double)t2-(double)t1);
      double seconds = diff/CLOCKS_PER_SEC;
      cout<<seconds<<endl;

      return 0;
}

      /*      //print out map
      for (auto it = myHashTable.begin(); it != myHashTable.end(); ++it) 
	    {

		  if( it != myHashTable.end())
			cout << it->first << " " <<it->second << endl;
	    }
      */
