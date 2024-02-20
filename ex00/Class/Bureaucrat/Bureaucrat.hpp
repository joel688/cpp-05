/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:41:17 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/20 15:54:22 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define LOWEST 150
#define HIGHEST 1

#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat
{
	private:
		std::string			name;
		int					grade;
		bool 				IsValidGrade(int grade) const;
		void				SetName(std::string name);
		void				SetGrade(int grade);
	public:
							Bureaucrat();
							Bureaucrat(std::string name);
							Bureaucrat(int grade);
							Bureaucrat(std::string name, int grade);
							~Bureaucrat();
		const std::string	getName(void) const;
		int					getGrade(void) const;
		void				IncreaseGrade(void);
		void				DecreaseGrade(void);
		class GradeTooHighException : public std::exception
		{
			public:
			const char *msg() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
			const char *msg() const throw();
		};
};

	std::ostream & operator<<(std::ostream & o, Bureaucrat const & src);
#endif
