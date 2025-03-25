/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olly <olly@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:24:03 by olly              #+#    #+#             */
/*   Updated: 2025/01/28 14:05:33 by olly             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria {

    public:
      
        Ice( void );
        Ice( Ice const & src);
        Ice( std::string name );
        
        ~Ice();
        
        Ice &               operator=( Ice const & rhs );

        virtual AMateria    *clone() const;
        void                use( ICharacter & target );
    
    protected:

    private:
};

std::ostream & operator<<( std::ostream & lhs, Ice const & rhs );

