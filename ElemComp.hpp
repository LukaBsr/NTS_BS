/*
** EPITECH PROJECT, 2024
** NTS_BS
** File description:
** ElemComp
*/

#ifndef ELEMCOMP_HPP_
    #define ELEMCOMP_HPP_

#include "AComponent.hpp"

namespace nts
{
    class AndComponent : public AComponent {
        public:
            ~AndComponent() = default;
            nts::Tristate compute(std::size_t pin);

        protected:
        private:
    };

    class OrComponent : public AComponent {
        public:
            ~OrComponent() = default;
            nts::Tristate compute(std::size_t pin);

        protected:
        private:
    };

    class XorComponent : public AComponent {
        public:
            ~XorComponent() = default;
            nts::Tristate compute(std::size_t pin);

        protected:
        private:
    };

    class NotComponent : public AComponent {
        public:
            ~NotComponent() = default;
            nts::Tristate compute(std::size_t pin);

        protected:
        private:
    };
    
}

#endif /* !ELEMCOMP_HPP_ */
