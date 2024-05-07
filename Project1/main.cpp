#include <iostream>
using namespace std;

template <typename T>
struct Vec 
{
    T x;
    T y;

};

template <typename T>
T length(Vec<T>& vec) 
{
    return (vec.x * vec.x + vec.y * vec.y); //’·‚³ŒvŽZ
}


template <typename T>
int MaxLen(Vec<T>& a , Vec<T>& b)
{
    T Len = length(a);
    T Len2 = length(b);

    if (Len > Len2) 
        return 1;
    else
        return 2;
}

int main() 
{

    Vec<double> vec1 = { 3.0, 4.0 }; 
    Vec<double> vec2 = { 5.0, 6.0 }; 

    int max = MaxLen(vec1, vec2);

    if (max == 1) 
    {
        cout <<" vec1 ‚Ì•û‚ª‘å‚«‚¢" << endl;
    }
    else if (max == 2) 
    {
        cout <<" vec2 ‚Ì•û‚ª‘å‚«‚¢" << endl;
    }

    return 0;
}