#include <iostream>
#include <chrono>

#include "Matrix.h"

int main()
{
	cppmath::Matrix<double> m1(250, 250, -1.3);
	cppmath::Matrix<double> m2(250, 250, -1.3);

  //cppmath::Matrix<float> m2(250, 250, -1.3); in dem Beispiel failed der static_assert weil der data typ kein double ist



  auto start = std::chrono::high_resolution_clock::now();
  cppmath::Matrix<double> m3 = m1 * m2;
  auto end = std::chrono::high_resolution_clock::now();

  std::chrono::duration<double, std::milli> ms = end - start;
  std::cout << std::endl << "Time in ms: " << ms.count();


	return 0;
}