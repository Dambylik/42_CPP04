/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:05:08 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/27 17:14:47 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal { 

    public:

        Dog( void );
        Dog( Dog const & src);
        Dog( std::string const name );
        
        ~Dog();
        
        Dog &           operator=( Dog const & rhs );

        void            makeSound() const;

    protected:
     
    private:
};

std::ostream & operator<<( std::ostream & lhs, Dog const & rhs );