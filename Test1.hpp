/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test1.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 14:59:54 by mafernan          #+#    #+#             */
/*   Updated: 2018/06/11 14:59:54 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		TEST1_HPP
# define	TEST1_HPP

class Test1 {
	public:
		Test1();
		Test1(Test1 const & src);
		Test1 operator=(Test1 const & src);
		~Test1();
	private:

	protected:

};

#endif
