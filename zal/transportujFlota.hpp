#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if (towar == 0) return 0;
    else
    {
        Stocznia stocznia{};
        int z = 0;
	unsigned int tmp = 0;
        do
        {
            Statek* s1 = stocznia();
            if (dynamic_cast<Zaglowiec*>(s1))++z;
            tmp += s1->transportuj();
            delete s1;
        } while (tmp < towar);
        return z;
    }
}
