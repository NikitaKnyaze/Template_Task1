
#include <iostream>
#include <vector>

template <typename T>
T sqr(T a)
{
   return a * a;
};

template<typename T>
void sqr(std::vector<T>& a)
{

   for (int i = 0; i < size(a); ++i)
   {
      a[i] = a[i] * a[i];
   }
}

int main()
{
   int some = 8;
   std::vector<int> some_v{-1, 4, 8};
   std::cout << sqr(some)<<std::endl;
   sqr(some_v);
   for(const auto c : some_v)
   std::cout << c << " ";
   return 0;
}
