#ifndef _Discriminant_PatternList_Categories_h_
#define _Discriminant_PatternList_Categories_h_
/* Discriminant_PatternList_Categories.h
 *
 * Copyright (C) 2004-2011, 2015 David Weenink
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
 djmw 20040422 Initial version
 djmw 20110307 Latest modification
*/


#include "Discriminant.h"
#include "PatternList.h"
#include "Categories.h"


autoDiscriminant PatternList_and_Categories_to_Discriminant (PatternList me, Categories thee);

autoCategories Discriminant_and_PatternList_to_Categories (Discriminant me, PatternList thee, int poolCovarianceMatrices, int useAprioriProbabilities);

#endif /* _Discriminant_PatternList_Categories_h_ */
