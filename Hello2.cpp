module;

#include <cmath>

export module Hello2;

export namespace Hello
{
    float Abs(float x)
    {
        return std::abs(x);
    }
}
