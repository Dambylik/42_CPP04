/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olly <olly@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:22:34 by olly              #+#    #+#             */
/*   Updated: 2025/01/28 14:01:53 by olly             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure : public AMateria {

    public:
      
        Cure( void );
        Cure( Cure const & src);
        Cure( std::string name );
        
        ~Cure();
        
        Cure &               operator=( Cure const & rhs );

        virtual AMateria    *clone() const;
        void                 use( ICharacter & target );
    
    protected:

    private:
};

std::ostream & operator<<( std::ostream & lhs, Cure const & rhs );