/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:24:37 by olly              #+#    #+#             */
/*   Updated: 2025/01/30 13:20:40 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

    public:
    
        MateriaSource( void );
        MateriaSource( MateriaSource const & src );
        
        ~MateriaSource();
       
        MateriaSource &             operator=( MateriaSource const & rhs );


        virtual void                learnMateria( AMateria * m);
        virtual AMateria            *createMateria( std::string const & type);
        int                         inLearningInventory( AMateria * m);

    protected:

    private: 
    
        AMateria                    *prototypes_[4];
};

std::ostream & operator<<( std::ostream & lhs, IMateriaSource const & rhs );
