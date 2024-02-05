/*
** EPITECH PROJECT, 2024
** NTS_BS
** File description:
** SpecialComp
*/

#include "SpecialComp.hpp"

namespace nts {

    Tristate InputComponent::compute(std::size_t pin)
    {
        return (pin == 1) ? True : False;
    }   

    Tristate OutputComponent::compute(std::size_t pin)
    {
        return getLink(1);
    }

    Tristate TrueComponent::compute(std::size_t pin)
    {
        return True;
    }

    Tristate FalseComponent::compute(std::size_t pin)
    {
        return False;
    }
    
}
