#include <cstdlib>
#include <exception>
#include <iostream>

template <typename T>
class Array
{
      public:
        // Constructs an empty array
        Array() : m_size(0), m_data(nullptr) {}
      
        // Constructs an array with n elements initialized to the default value of T
        explicit Array(unsigned int n) : m_size(n), m_data(new T[n]) {}
      
        // Copy constructor
        Array(const Array &other) : m_size(other.m_size), m_data(new T[other.m_size])
        {
          for (unsigned int i = 0; i < m_size; i++)
          {
            m_data[i] = other.m_data[i];
          }
        }
      
        // Assignment operator
        Array &operator=(const Array &other)
        {
          // Check for self-assignment
          if (this == &other)
          {
            return *this;
          }
      
          // Deallocate current memory and allocate new memory
          delete[] m_data;
          m_size = other.m_size;
          m_data = new T[m_size];
      
          // Copy elements
          for (unsigned int i = 0; i < m_size; i++)
          {
            m_data[i] = other.m_data[i];
          }
      
          return *this;
        }
      
        // Destructor
        ~Array()
        {
          delete[] m_data;
        }
      
        // Subscript operator
        T &operator[](unsigned int index)
        {
          if (index >= m_size)
          {
            throw std::out_of_range("Index out of bounds");
          }
          return m_data[index];
        }
      
        // Returns the number of elements in the array
        unsigned int size() const
        {
          return m_size;
        }
      
      private:
        unsigned int m_size;
        T *m_data;
      };
      
      int main()
      {
        // Create an array of 5 integers
        Array<int> a(5);
      
        // Initialize the elements to 0
        for (unsigned int i = 0; i < a.size(); i++)
        {
          a[i] = 0;
        }
      
        // Print the elements
        for (unsigned int i = 0; i < a.size(); i++)
        {
          std::cout << a[i] << " ";
        }
        std::cout << std::endl;
      
        // Modify the second element
        a[1] = 10;
      
        // Create a copy of the array
        Array<int> b = a;
      
        // Modify the second element of the original array
        a[1] = 20;
      
        // Print the elements of the copy
        for (unsigned int i = 0; i < b.size(); i++)
        {
          std::cout << b[i] << " ";
        }
        std::cout << std::endl;
      
        return 0;
}

// class b{
//   public:
//     int r;
// };
// class a{
//   public:
//     int r;
// };
// int main()
// {
//   // b *B = new b;
//   // a *A = new a;
//   // h = dy_cast<double>(13);
//    char *as;
//   as = dynamic_cast<char*>(97);
//   std::cout << as << std::endl;
// }