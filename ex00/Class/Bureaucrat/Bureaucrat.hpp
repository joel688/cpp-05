/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:41:17 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/21 21:30:22 by joakoeni         ###   ########.fr       */
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
		const std::string	name;
		int					grade;
		bool 				IsValidGrade(int grade) const;
		void				SetGrade(int grade);
	public:
							Bureaucrat();
							Bureaucrat(std::string name);
							Bureaucrat(int grade);
							Bureaucrat(std::string name, int grade);
							Bureaucrat(const Bureaucrat &src);
							~Bureaucrat();
		const std::string	getName(void) const;
		int					getGrade(void) const;
		void				IncreaseGrade(void);
		void				DecreaseGrade(void);
		Bureaucrat& operator=(const Bureaucrat& src);
		class GradeTooHighException : public std::exception
		{
			public:
			const std::string msg() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
			const std::string msg() const throw();
		};
};

		std::ostream & operator<<(std::ostream & o, Bureaucrat const & src);


#endif
