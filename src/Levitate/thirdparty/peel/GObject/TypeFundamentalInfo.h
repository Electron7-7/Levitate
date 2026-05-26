#pragma once

/* Auto-generated, do not modify */
/* Package gobject-2.0 */

#include <peel/GObject/Type.h>
#include <peel/RefPtr.h>
#include <peel/FloatPtr.h>
#include <peel/UniquePtr.h>
#include <peel/ArrayRef.h>
#include <peel/String.h>
#include <peel/signal.h>
#include <peel/callback.h>
#include <peel/property.h>
#include <peel/lang.h>
#include <cstdint>
#include <utility>
#include <glib-object.h>

peel_begin_header

namespace peel
{
namespace GObject
{
enum class TypeFundamentalFlags : std::underlying_type<::GTypeFundamentalFlags>::type;
struct TypeFundamentalInfo;
} /* namespace GObject */


namespace GObject
{
struct TypeFundamentalInfo
{
private:
  TypeFundamentalInfo () = delete;
  TypeFundamentalInfo (const TypeFundamentalInfo &) = delete;
  TypeFundamentalInfo (TypeFundamentalInfo &&) = delete;
  ~TypeFundamentalInfo ();

public:
  TypeFundamentalFlags type_flags;
}; /* record TypeFundamentalInfo */

static_assert (sizeof (TypeFundamentalInfo) == sizeof (::GTypeFundamentalInfo),
               "TypeFundamentalInfo size mismatch");
static_assert (alignof (TypeFundamentalInfo) == alignof (::GTypeFundamentalInfo),
               "TypeFundamentalInfo align mismatch");

} /* namespace GObject */
} /* namespace peel */

peel_end_header
