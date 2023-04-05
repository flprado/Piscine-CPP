#include "../inc/harl.hpp"

int main(void)
{
    Harl harl = Harl();
    harl.complain("info");
    harl.complain("qwerqwerqwer");
    harl.complain("debug");
    harl.complain("warning");
    harl.complain("error");
    return 0;
}