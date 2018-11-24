/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   create_rpoint.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmonacho <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/24 06:47:42 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/24 06:48:32 by gmonacho    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#include "../includes/fdf.h"

t_point		create_rpoint(double x, double y)
{
	t_point		point;

	point.x = x;
	point.y = y;
	return (point);
}
