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

        protected:
        private:
    };

    class OrComponent : public AComponent {
        public:
            ~OrComponent() = default;

        protected:
        private:
    };

    class XorComponent : public AComponent {
        public:
            ~XorComponent() = default;

        protected:
        private:
    };

    class NotComponent : public AComponent {
        public:
            ~NotComponent() = default;

        protected:
        private:
    };
    
}

#endif /* !ELEMCOMP_HPP_ */
