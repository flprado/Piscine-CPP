#pragma once

template <typename T > void swap (T &a, T &b)
{
    T save;

    save = b;
    b = a;
    a = save;
}

template <typename T > const T &max(T &a, T &b)
{
    return (a > b ? a : b);
}

template <typename T> const T &min (T &a, T &b)
{
    return (a < b ? a : b);
}