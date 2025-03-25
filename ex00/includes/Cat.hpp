/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:05:08 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/30 12:10:07 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Colors.hpp"

class Cat : public Animal { 

    public:

        Cat( void );
        Cat( std::string const name );
        Cat( Cat const & src);
        
        ~Cat();
        
        Cat &           operator=( Cat const & rhs );

        void            makeSound() const;

    protected:

    private:
     
};

std::ostream & operator<<( std::ostream & lhs, Cat const & rhs );
