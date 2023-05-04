#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data    *deserealise(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}

int main (void)
{
    Data *data;
    uintptr_t serialized;
    Data *deserealised;

    data = new Data();
    std::cout << "data ptr = " << data << std::endl;
    std::cout << "value = " << data->getValue() << std::endl;

    serialized = serialize(data);
    std::cout << "serialize(data ptr) = " << serialized << std::endl;

    deserealised = deserealise(serialized);
    std::cout << "deserialize(serialize(data ptr)) = " << deserealised << std::endl;
    std::cout << "value = " << deserealised->getValue() << std::endl;

    delete data;
    return 0;
}