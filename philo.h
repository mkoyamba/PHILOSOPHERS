/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:08:26 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/04/01 18:16:46 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

/*  		==================(     INCLUDES     )==================		  */

# include <unistd.h>
# include <stddef.h>

/*  		==================(      MACROS      )==================		  */

# define ERROR_ARG "Il n'y a pas le bon nombre d'arguments"

/*  		==================(    PROTOTYPES    )==================		  */

size_t	ft_strlen(char *str);
void	error_out(char *str);

#endif