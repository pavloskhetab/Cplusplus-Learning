#include <iostream>
using namespace std;

int main() 
{
  
  int wow = 100; 
  
  int* ptr = nullptr;
  
  char letter[] = "Dear Self,\nI hope you learn a lot on C++. Once you master the basics of C++ maybe you can try building a simple app;\nif it's a game then even better";

  // char* ptr = nullptr;
  
  // *ptr = &letter; need to find a way to point to char arry some ideas maybe use for loop to pass characters to pointer?
  
  ptr = &wow;
  
  cout << "The memory address of ptr is " << ptr << ".\n";
  
  cout << "The value of ptr is " << *ptr << ".\n\n";
  
  cout << letter << "\n";
}
