/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:12:12 by olly              #+#    #+#             */
/*   Updated: 2025/01/30 13:14:51 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Colors.hpp"

class Brain {
    
    public:

        Brain( void );
        Brain( Brain const & src );
        ~Brain();

        Brain &         operator=( Brain const & rhs );

        std::string     getIdea( int i ) const;

    protected:
    
        std::string     ideas_[100];
    
    private:  
};
