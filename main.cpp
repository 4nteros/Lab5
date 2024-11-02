#include <iostream>

int main()
{
 /* 
    long long multi = 1;
    int min = 0;
    bool first = true;
    int min_index = 0;
    int n = 0;
    std::cout << "Enter the number of sequence members: "; 
    std::cin >> n;
    for (int i = 0; i<n; i++)
    {
          int x;
          std::cout << "Enter sequence member: "; 
          std::cin >> x;

          if ((x%10 == 2) || (x%10 == 4))
          {
            multi *= x;
            if (first)
            {
              min = x;
              first = false;
            }
            if (min > x)
            {
              min = x;
              min_index = i;
            }
          }
   
    }
    if (min == 0)
    {
      std::cout << "Could not find suitable sequence members";
      return 0;
    }
    std::cout << "Result of multiplication:                         " << multi << std::endl;
    std::cout << "The value of the minimum sequence term:           " << min << std::endl;
    std::cout << "Number of the first minimal term of the sequence: " << min_index + 1 << std::endl;

*/




    
   
    int N = 0;
    int max_digit_in_N = 0;
    std::cout << "Enter N: ";
    std::cin >> N;
    for (int i = 0; i<N; i++)
    while (N>0)
    {
      int digit = N%10;
      N /= 10;
      if(max_digit_in_N < digit)
      {
        max_digit_in_N = digit;
      }
      
    }
    std::cout << "The maximum digit in the number is: " << max_digit_in_N << std::endl;
    
}