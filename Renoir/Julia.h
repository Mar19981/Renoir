#pragma once
#include "Mandelbrot.h"
#include <complex>
namespace renoir
{
	class Julia final : public Mandelbrot
	{
		std::complex<double> c;
	public:
		Julia(int width, int height, int iter, float scale, std::complex<double> complexNumber);
		void generate() override;
		//void setComplexNumber(const std::complex <float>& c);
	};
}

