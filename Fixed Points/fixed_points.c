/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed_points.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:37:29 by rimartin          #+#    #+#             */
/*   Updated: 2021/12/18 20:34:55 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

# define FIXED_FRACTIONAL_SIZE 8

typedef uint16_t fixed_point_t;


// Convert 11.5 format -> double
double	fixed_to_double(fixed_point_t input)
{
	printf("input: %d\ninput(double): %f\nFrational bits: %d\nFrational Bits(double): %f\n", 
			input, (double)input, FIXED_FRACTIONAL_SIZE << 1, (double)(1 << FIXED_FRACTIONAL_SIZE)); 
	printf("Fractional size %f\n", (double)FIXED_FRACTIONAL_SIZE);
	return ((double)input / (double)(1 << FIXED_FRACTIONAL_SIZE));
}

// Convert double to 11.5 format
//fixed_point_t	double_to_fixed(double input)
//{
//
//}
//

int main(void)
{
	fixed_point_t fds = 11;
	fixed_to_double(fds);
	printf("fds %hu\n", fds);
}
