/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hapryl <hapryl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:01:27 by hapryl            #+#    #+#             */
/*   Updated: 2021/06/01 17:02:34 by hapryl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char    to_upper(char c) {
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    return c;
}

int     main(int arg, char **argc) {
    
    if (arg < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (size_t i = 1; argc[i]; i++)
        {
            for (size_t j = 0; argc[i][j]; j++)
                std::cout << to_upper(argc[i][j]);
        }
    }
    std::cout << std::endl;
    return 0;
}