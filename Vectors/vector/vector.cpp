#include <iostream>
#include <vector>

using namespace std;

// In here, you have to create a vector, with the number of elements in the vector passed as a parameter to this function
// Note, the return type is a pointer to a vector
// The elements in the vector must be random integers, so find out how to get a random integer
vector<int>* create_vector_with_random_elements(int numberOfElementsInVector) {
  return 0;
}

// In here, you must arrange the elements of the vector in order (from smallest to biggest)
void order_vector_elements(vector<int>* vectorToOrder) {
}

// In here, you must arrange the elements of the vector in descending order (from biggest to smallest)
void reverse_the_order_of_elements(vector<int>* vectorToReverse) {
}

// In here, you must loop over all of the elements, and print them to the screen, only add a newline at the end
void print_vector_elements(vector<int>& vectorToPrint) {
}

int main()
{
  vector<int>* elements = create_vector_with_random_elements(20);
  print_vector_elements(*elements);

  order_vector_elements(elements);
  print_vector_elements(*elements);

  reverse_the_order_of_elements(elements);
  print_vector_elements(*elements);
  
	system("pause");
  return 0;
}

