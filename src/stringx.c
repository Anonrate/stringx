/**
 * @file	stringx.c
 * @brief	stringx.c
 * @version	v.1
 * @date	02/11/2017 21:01:39
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

#include  <stdio.h>
#include  <stdlib.h>
#include  <stdint.h>
#include  <ctype.h>
#include  <string.h>
#define DEBUG 1

#include  "../../dbgr/inc/dbgr.h"
#include  "../inc/stringx.h"

#ifdef  DEV
int
main(void)
{
    char *stra = "COCK";
    char *strb  = "cock";

    return strcmpigor(stra, strb);
    return 0;
}
#endif  /* DEV */

int
strcmpigor(char *stra, char *strb)
{
    /*
     * Don't need to check if either string is 0 or not because they are being
     *  compared with each other, and if both or 0, they are both equal to that
     *  of eachother.
     */
    char *tmpstra = strtolower(stra);
    char *tmpstrb = strtolower(strb);
    
    return strcmp(tmpstra, tmpstrb);
}

char*
strtolower(char *str)
{
    if (!str)
    {
        DEBUG_OUTF(DBGF_STRZ, str);
        return str;
    }

    char *tmpstr      = malloc(strlen(str) + 1);
    char *ptmpstrstrt = strcpy(tmpstr, str);
    for (; *tmpstr; tmpstr++) { *tmpstr = tolower(*tmpstr); }

    return ptmpstrstrt;

}
