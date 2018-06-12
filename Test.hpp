/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 07/30/43 by mafernan          #+#    #+#             */
/*   Updated: 2018/06/12 07/30/43 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		TEST_HPP
# define	TEST_HPP

class Test {
	public:
		Test();
		Test(Test const & src);
		~Test();
		Test & operator=(Test const & src);
	private:

	protected:

};

#endif
