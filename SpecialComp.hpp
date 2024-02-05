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

        protected:
        private:
    };

    class OutputComponent : public AComponent {
        public:
            ~OutputComponent() = default;

        protected:
        private:
    };

    class TrueComponent : public AComponent {
        public:
            ~TrueComponent() = default;

        protected:
        private:
    };

    class FalseComponent : public AComponent {
        public:
            ~FalseComponent() = default;
            
        protected:
        private:
    };

}

#endif /* !SPECIALCOMP_HPP_ */
