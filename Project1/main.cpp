#include<iostream>

using std::cout;
using std::cin;
using std::endl;

// 関数テンプレート
template <typename T>
T tMax(T a, T b)
{
	if (a > b)
		return a;
	else
		return b;

}

//クラステンプレート
template <typename T>
class Vec
{
public:
	T x;
	T y;
	
	T GetX() { return (x); }
	void SetX(T _x) { x = _x; }
	void PrintVec() { cout << "(a,b) = " << "(" << x << "," << y << ")" << endl; } //インライン定義

};


template <typename T>
class Vec2
{
public:
	T x;
	T y;
	T GetX() { return (x); }
	void SetX(T _x) { x = _x; }
	void PrintVec() { cout << "(x , y) = (" << x << " , " << y << ")" << endl; }
	T Length() const { return (sqrt(x * x + y * y)); }

	bool operator >(const Vec2<T>& other) {
		return (this->Length() > other.Length());
	}


};


int main()
{

	//// クラステンプレート
	/*Vec2<double> v;
	v.x = 2;
	v.y = 3;
	v.PrintVec();*/

	Vec2<double> v1;
	v1.x = { 2.3 };
	v1.y = { 5.0 };

	Vec2<double> v2;
	v2.x = { 1.0 };
	v2.y = { 4.0 };

	/*if(v1 > v2)
		v1.PrintVec();
	else
		v2.PrintVec();*/

	Vec2<double> res = tMax(v1, v2);
	res.PrintVec();

	return 0;
}