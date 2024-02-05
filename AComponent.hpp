/*
** EPITECH PROJECT, 2024
** NTS_BS
** File description:
** AComponent
*/

#ifndef ACOMPONENT_HPP_
    #define ACOMPONENT_HPP_

#include "IComponent.hpp"

namespace nts {
    class AComponent : public IComponent {
        public:
            virtual ~AComponent() = default;

            void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) override;
            void getLink(std::size_t pin) const;

        protected:
        private:
    };
};

std::ostream &operator<<(std::ostream &os, nts::Tristate const &value)
{
    os << value;
    return os;
}

#endif /* !ACOMPONENT_HPP_ */
