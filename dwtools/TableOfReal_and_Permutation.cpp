/* TableOfReal_and_Permutation.cpp
 *
 * Copyright (C) 2005-2017 David Weenink
 *
 * This code is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This code is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this work. If not, see <http://www.gnu.org/licenses/>.
 */

/*
 djmw 20050708
*/

#include "TableOfReal_and_Permutation.h"
#include "TableOfReal_extensions.h"
#include "NUM2.h"

autoTableOfReal TableOfReal_and_Permutation_permuteRows (TableOfReal me, Permutation thee) {
	try {
		Melder_require (my numberOfRows == thy numberOfElements,
			U"The number of rows in the table and the number of elements in the Permutation must be equal.");
		
		autoTableOfReal him = TableOfReal_create (my numberOfRows, my numberOfColumns);

		for (long i = 1; i <= thy numberOfElements; i ++) {
			TableOfReal_copyOneRowWithLabel (me, him.get(), thy p [i], i);
		}
		for (long j = 1; j <= my numberOfColumns; j ++) {
			TableOfReal_setColumnLabel (him.get(), j, my columnLabels [j]);
		}
		return him;
	} catch (MelderError) {
		Melder_throw (me, U": not permuted.");
	}
}

autoPermutation TableOfReal_to_Permutation_sortRowLabels (TableOfReal me) {
	try {
		autoPermutation thee = Permutation_create (my numberOfRows);
		NUMindexx_s (my rowLabels, my numberOfRows, thy p);
		return thee;
	} catch (MelderError) {
		Melder_throw (me, U": no Permutation created.");
	}
}

/* End of file TableOfReal_and_Permutation.cpp */
