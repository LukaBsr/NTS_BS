/*
** EPITECH PROJECT, 2024
** NTS_BS
** File description:
** AComponent
*/

#ifndef ACOMPONENT_HPP_
    #define ACOMPONENT_HPP_

#include "IComponent.hpp"
#include <map>

namespace nts {
    class AComponent : public IComponent {
        public:
            virtual ~AComponent() = default;

            void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) override;
            nts::Tristate getLink(std::size_t pin) const;
            virtual void simulate(std::size_t tick) {};

        protected:
            Tristate _value;
            std::map<std::size_t, std::pair<nts::IComponent *, std::size_t>> _links;

        private:
    };
};

#endif /* !ACOMPONENT_HPP_ */
