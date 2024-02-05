/*
** EPITECH PROJECT, 2024
** NTS_BS
** File description:
** AComponent
*/

#include "AComponent.hpp"

namespace nts {

    void AComponent::setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin)
    {
        _links[pin] = std::make_pair(&other, otherPin);
    }

    nts::Tristate AComponent::getLink(std::size_t pin) const
    {
        if (_links.find(pin) == _links.end())
            return Undefined;
        return _links.at(pin).first->compute(_links.at(pin).second);
    }

}
