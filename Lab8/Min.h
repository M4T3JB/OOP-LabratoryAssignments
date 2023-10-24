#pragma once
template<typename TYPE>
TYPE min(TYPE& a, TYPE& b)
{
	if (a < b)
		return a;
	return b;
}

