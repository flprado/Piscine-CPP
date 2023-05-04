#pragma once
#include <stdint.h>
#include <iostream>


class Data
{
    private:
        int _value;

    public:
        Data();
        Data(const Data &data);
        virtual ~Data();

        Data &operator=(const Data &data);
        int getValue(void)const;

};