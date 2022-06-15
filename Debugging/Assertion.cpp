#include <iostream>     
#include <cassert>  
using namespace std;
void display_number(int* myInt) {
  assert (myInt!=NULL);
  cout<<"myInt contains value" << " = "<<*myInt<<endl;
}
int main ()
{
  int myptr=5;
  int * second_ptr = NULL;
  int * third_ptr = NULL;
  second_ptr=&myptr;
  display_number (second_ptr);
  display_number (third_ptr);
  return 0;
}

// runtime error: it compiles but executable will show error
//compile-time error: static_assertion: compilation error