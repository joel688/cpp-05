#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		std::string			name;
		int					grade;
		bool 				IsValidGrade(int grade) const;
		void				SetName(std::string name);
		void				SetGrade(int grade);
		void				IncreaseGrade(void);
		void				DecreaseGrade(void);
	public:
							Bureaucrat();
							~Bureaucrat();
		const std::string	getName(void) const;
		int					getGrade(void) const;
};

#endif

