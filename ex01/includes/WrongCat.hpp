/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:28:13 by okapshai          #+#    #+#             */
/*   Updated: 2025/01/27 13:28:59 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"
#include "Colors.hpp"

class WrongCat : public WrongAnimal { 

    public:

        WrongCat( void );
        WrongCat( std::string const name );
        WrongCat( WrongCat const & src);
        
        ~WrongCat();
        
        WrongCat &      operator=( WrongCat const & rhs );

        void            makeSound() const;

    protected:

    private:
     
};

std::ostream & operator<<( std::ostream & lhs, WrongCat const & rhs );