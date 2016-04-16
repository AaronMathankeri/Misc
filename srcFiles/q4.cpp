// 4 Write fibbonaci iteratively and recursively 
//(bonus: use dynamic programming)


#include <iostream>

using namespace std;

unsigned Fibonacci(unsigned x){
      
      if (x <= 2)
	    return 1;

      else
	    return (Fibonacci(x - 1) + Fibonacci(x - 2) );

}

int main(int argc, char *argv[])
{
      cout << "Fibonacci Baby" << endl;
  

      int N = 10;

      //iteratively
      cout << " Iteratively " << endl;
      int last1 = 1;
      int last2 = 0;
      int current = 1;
      for (int iter = 0; iter < N; ++iter) 
	    {
		  cout << current << " ";
		  current = last1 + last2;
		  last2 = last1;
		  last1 = current;
	    }

      //recursively
      //f(x) = f(x - 1) + f(x -2)
      cout << "\n Recursively " <<endl;

      for (unsigned iter = 1; iter < N + 1; ++iter) 
	    {
		  cout << Fibonacci(iter) << " ";		  
	    }
      

    return 0;
}
