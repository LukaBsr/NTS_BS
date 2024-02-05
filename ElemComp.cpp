/*
** EPITECH PROJECT, 2024
** NTS_BS
** File description:
** ElemComp
*/

#include "ElemComp.hpp"

namespace nts {

    Tristate AndComponent::compute(std::size_t pin)
    {
        bool a = getLink(1);
        bool b = getLink(2);
        return (a && b) ? True : False;
    }

    Tristate OrComponent::compute(std::size_t pin)
    {
        bool a = getLink(1);
        bool b = getLink(2);
        return (a || b) ? True : False;
    }

    Tristate XorComponent::compute(std::size_t pin)
    {
        bool a = getLink(1);
        bool b = getLink(2);
        return (a ^ b) ? True : False;
    }

    Tristate NotComponent::compute(std::size_t pin)
    {
        bool a = getLink(1);
        return (!a) ? True : False;
    }

}
