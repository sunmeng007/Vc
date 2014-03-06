/*  This file is part of the Vc library. {{{

    Copyright (C) 2013 Matthias Kretz <kretz@kde.org>

    Vc is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as
    published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version.

    Vc is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with Vc.  If not, see <http://www.gnu.org/licenses/>.

}}}*/

#ifndef COMMON_ALGORITHMS_H
#define COMMON_ALGORITHMS_H

#include "macros.h"

namespace Vc_VERSIONED_NAMESPACE
{

/**
 * \ingroup Utilities
 *
 * \name Boolean Reductions
 */
//@{
/** \ingroup Utilities
 *  Returns whether all entries in the mask \p m are \c true.
 */
template<typename Mask> constexpr bool all_of(const Mask &m) { return m.isFull(); }
/** \ingroup Utilities
 *  Returns \p b
 */
constexpr bool all_of(bool b) { return b; }

/** \ingroup Utilities
 *  Returns whether at least one entry in the mask \p m is \c true.
 */
template<typename Mask> constexpr bool any_of(const Mask &m) { return m.isNotEmpty(); }
/** \ingroup Utilities
 *  Returns \p b
 */
constexpr bool any_of(bool b) { return b; }

/** \ingroup Utilities
 *  Returns whether all entries in the mask \p m are \c false.
 */
template<typename Mask> constexpr bool none_of(const Mask &m) { return m.isEmpty(); }
/** \ingroup Utilities
 *  Returns \p !b
 */
constexpr bool none_of(bool b) { return !b; }

/** \ingroup Utilities
 *  Returns whether at least one entry in \p m is \c true and at least one entry in \p m is \c
 *  false.
 */
template<typename Mask> constexpr bool some_of(const Mask &m) { return m.isMix(); }
/** \ingroup Utilities
 *  Returns \c false
 */
constexpr bool some_of(bool) { return false; }
//@}


// import to Implementation namespaces for automatic namespace lookup
namespace Scalar
{
    using Vc::all_of;
    using Vc::any_of;
    using Vc::none_of;
    using Vc::some_of;
}
namespace SSE
{
    using Vc::all_of;
    using Vc::any_of;
    using Vc::none_of;
    using Vc::some_of;
}
namespace AVX
{
    using Vc::all_of;
    using Vc::any_of;
    using Vc::none_of;
    using Vc::some_of;
}
namespace AVX2
{
    using Vc::all_of;
    using Vc::any_of;
    using Vc::none_of;
    using Vc::some_of;
}
namespace MIC
{
    using Vc::all_of;
    using Vc::any_of;
    using Vc::none_of;
    using Vc::some_of;
}
}

#include "undomacros.h"

#endif // COMMON_ALGORITHMS_H