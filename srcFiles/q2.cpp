// 2 Find pairs in an integer array whose sum is equal to 10 (bonus: do it in linear time)
#include <iostream>

using namespace std;

const int size = 10;


int *getRandomArray(){
      static int array[size];
      
      srand((unsigned)time(0)); 
     
      for(int i=0; i<size; i++){ 
	    array[i] = (rand()%9)+1; 
	    // cout << array[i] << " ";
      } 
      cout << endl;
      return array;

}

bool addNumbers(int x, int y){
      int sum = x + y;
      return bool(sum == 10);
}

int main(int argc, char *argv[])
{
      cout << " Pairs in an integer array who add up to 10" << endl;

      //int *ptr = getRandomArray();

      //int myArray[] = { 1, 4, 5, 6, 5, 9, 8, 7, 2};
      int *myArray = getRandomArray();

      int x, y;

      for (int iter = 0; iter < size; ++iter) 
	    {
		  for (int cnt = 0; cnt < size; ++cnt) 
			{
			      x = myArray[iter];
			      y = myArray[cnt];
			      if (addNumbers(x,y)) 
				    {
					  cout << x << " and " << y << " add up to 10" << endl;
				    }
			}

	    }


      
      return 0;
}

