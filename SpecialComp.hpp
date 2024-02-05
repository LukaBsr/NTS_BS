/*
** EPITECH PROJECT, 2024
** NTS_BS
** File description:
** SpecialComp
*/

#ifndef SPECIALCOMP_HPP_
    #define SPECIALCOMP_HPP_

#include "AComponent.hpp"

namespace nts
{
    class InputComponent : public AComponent {
        public:
            ~InputComponent() = default;
            nts::Tristate compute(std::size_t pin) override;

        protected:
        private:
    };

    class OutputComponent : public AComponent {
        public:
            ~OutputComponent() = default;
            nts::Tristate compute(std::size_t pin) override;

        protected:
        private:
    };

    class TrueComponent : public AComponent {
        public:
            ~TrueComponent() = default;
            nts::Tristate compute(std::size_t pin) override;

        protected:
        private:
    };

    class FalseComponent : public AComponent {
        public:
            ~FalseComponent() = default;
            nts::Tristate compute(std::size_t pin) override;

        protected:
        private:
    };

}

#endif /* !SPECIALCOMP_HPP_ */
