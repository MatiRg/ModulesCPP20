module;

#include <cmath>

export module Hello;
export import Hello2;

export namespace Hello
{
    float Sqr(float x)
    {
        return std::sqrt(x);
    }
}
