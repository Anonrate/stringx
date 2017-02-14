/**
 * @file	stringx.h
 * @brief	stringx.h
 * @version	v.1
 * @date	02/11/2017 21:01:47
 * @author	Anonrate
 * @copyright	
 * 	\parblock
 * 		GNU General Public License
 *
 * 		Copyright (C) 2017 Anonrate
 *
 * 		This program is free software: you can redistribute it and/or modify 
 * 		it under the terms of the GNU General Public License as published by 
 * 		the Free Software Foundation, either version 3 of the License, or 
 * 		(at your option) any later version.
 *
 * 		This program is distributed in the hope that it will be useful, 
 * 		but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * 		MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * 		GNU General Public License for more details.
 *
 * 		You should have received a copy of the GNU General Public License
 * 		along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 	\endparblock
 */

#ifndef STRINGX_H
#define STRINGX_H /**< Include guard for 'stringx.h'. */

#include  "dbgstringx.h"

/**
 * @brief   string compare ignore
 * @details Compares \p stra with \p strb ignoring the case.
 * @param[in] stra  The string to be compared with \p strb.
 * @param[in] strb  The string \p stra will be compared with.
 * @return  Returns an integer less than, equal to or greater than \c 0 if 
 *            \p stra is found, respectively, to less than, to match, or be
 *            greater than \p strb.
 */
int
strcmpigor(char *stra, char *strb);

/**
 * @brief   string to lower
 * @details Converts each character in \p pstr to its uppercase form.
 * @param[in]  pstr  The string to have its contents converted to its
 *                      upperform.
 * @return  Returns a pointer to the starting index of the newly converted
 *            string.
 */
char*
strtolower(char *str);
#endif  /* STRINGX_H */
