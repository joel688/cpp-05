/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:41:10 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/19 15:00:27 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Bureaucrat/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a;
		Bureaucrat b("Jacques", 140);
		Bureaucrat c("Richard");
		Bureaucrat d(120);
		Bureaucrat e("Gilles", 160);
	}
	catch ()
	{

	}


}
