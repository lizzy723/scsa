#include <iostream>

template<typename T> 
class Vector
{
	T* ptr;
	int size;
public:
	Vector(int sz)
	{
		size = sz;
		ptr = new T[size];
	}
	~Vector()
	{
		delete[] ptr;
	}

	void resize(int newsize)
	{
		if (size < newsize)
		{
			T* temp = new T[newsize];
			memcpy(temp, ptr, sizeof(T)*size);
			delete[] ptr;
			ptr = temp;
			size = newsize;

		}
	}
	void setAt(int idx, T value)
	{
	
		ptr[idx] = value;
	}
	T  getAt(int idx) { return ptr[idx]; }
};

int main()
{
	Vector<double> v2(10);

	Vector<int> v(5);

	v.setAt(0, 10); 
	v.setAt(1, 15); 

	v.resize(10);

	std::cout << v.getAt(1) << std::endl; 
}