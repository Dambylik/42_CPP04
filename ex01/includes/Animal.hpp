/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:55:09 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/05 15:53:45 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Colors.hpp"

class Animal {

    public:

        Animal( void );
        Animal( Animal const & src);
        Animal( std::string name );
  
        virtual ~Animal();
        
        Animal &        operator=( Animal const & rhs );

        virtual void    makeSound() const;
        std::string     getType() const;

    protected:
     
        std::string     type_;

    private:
};

std::ostream & operator<<( std::ostream & lhs, Animal const & rhs );

