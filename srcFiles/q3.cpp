// 3 Given 2 integer arrays, determine of the 2nd array is a rotated version of the 1st array. 
//   Ex. Original Array A={1,2,3,5,6,7,8} Rotated Array B={5,6,7,8,1,2,3}
/*
trick: concatenate orig with itself. if second is within orig,
then it is a cyclic permutaion
*/



#include <iostream>
#include <vector>
#include <algorithm>  //needed for includes algorithm

using namespace std;

int main(int argc, char *argv[])
{
      cout << "Rotated arrays " << endl;

      vector <int> origArray {1, 2, 3, 4, 5, 6, 7, 8};
      vector <int> rotArray {5, 6, 7, 8, 1, 2, 3, 4};


      for(auto itr : origArray)
	    cout << itr << " ";
      cout << endl;

      for(auto itr : rotArray)
	    cout << itr << " ";
      cout << endl;

      //make a concatenated version of origArray
      origArray.insert(origArray.end(), origArray.begin(), origArray.end());
      for(auto itr : origArray)
	    cout << itr << " ";
      cout << endl;

      //now ask: is rotArray inside vector?
      //includes(conCatOrig.begin(), conCatOrig.end())

      if (includes(origArray.begin(), origArray.end(), rotArray.begin(), rotArray.end() ) )
	    cout << "its a rotated array alright" << endl;



      return 0;
}

