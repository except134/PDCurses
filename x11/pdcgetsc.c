/************************************************************************ 
 * This file is part of PDCurses. PDCurses is public domain software;	*
 * you may use it for any purpose. This software is provided AS IS with	*
 * NO WARRANTY whatsoever.						*
 *									*
 * If you use PDCurses in an application, an acknowledgement would be	*
 * appreciated, but is not mandatory. If you make corrections or	*
 * enhancements to PDCurses, please forward them to the current		*
 * maintainer for the benefit of other users.				*
 *									*
 * See the file maintain.er for details of the current maintainer.	*
 ************************************************************************/

#include "pdcx11.h"

RCSID("$Id: pdcgetsc.c,v 1.22 2007/01/02 15:57:57 wmcbrine Exp $");

/* return width of screen/viewport */

int PDC_get_columns(void)
{
	PDC_LOG(("PDC_get_columns() - called\n"));

	return XCursesCOLS;
}

/* get the cursor size/shape */

int PDC_get_cursor_mode(void)
{
	return 0;
}

/* return number of screen rows */

int PDC_get_rows(void)
{
	PDC_LOG(("PDC_get_rows() - called\n"));

	return XCursesLINES;
}
