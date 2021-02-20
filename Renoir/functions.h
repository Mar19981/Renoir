#pragma once
namespace renoir
{
	template <typename T>
	T remap(T value, T low1, T high1, T low2, T high2)
	{
		return low2 + (value - low1) * (high2 - low2) / (high1 - low1);
	}
}