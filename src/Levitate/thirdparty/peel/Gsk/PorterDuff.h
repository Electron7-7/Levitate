#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

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
#include <gsk/gsk.h>

peel_begin_header

namespace peel
{
namespace Gsk
{
enum class PorterDuff : std::underlying_type<::GskPorterDuff>::type;
} /* namespace Gsk */

template<>
struct GObject::Value::Traits<Gsk::PorterDuff>
{
  typedef Gsk::PorterDuff UnownedType;

  static Gsk::PorterDuff
  get (const ::GValue *value)
  {
    return static_cast<Gsk::PorterDuff> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gsk::PorterDuff m)
  {
    g_value_set_enum (value, static_cast<::GskPorterDuff> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gsk::PorterDuff m)
  {
    set (value, m);
  }

  static Gsk::PorterDuff
  cast_for_create (Gsk::PorterDuff m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gsk::PorterDuff> ()
{
  return gsk_porter_duff_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gsk::PorterDuff>
{
  Gsk::PorterDuff default_value;

  constexpr PspecTraits (Gsk::PorterDuff default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gsk_porter_duff_get_type (),
                              static_cast<::GskPorterDuff> (default_value),
                              basics.flags);
  }
};


namespace Gsk
{
enum class PorterDuff : std::underlying_type<::GskPorterDuff>::type
{
  SOURCE = GSK_PORTER_DUFF_SOURCE,
  DEST = GSK_PORTER_DUFF_DEST,
  SOURCE_OVER_DEST = GSK_PORTER_DUFF_SOURCE_OVER_DEST,
  DEST_OVER_SOURCE = GSK_PORTER_DUFF_DEST_OVER_SOURCE,
  SOURCE_IN_DEST = GSK_PORTER_DUFF_SOURCE_IN_DEST,
  DEST_IN_SOURCE = GSK_PORTER_DUFF_DEST_IN_SOURCE,
  SOURCE_OUT_DEST = GSK_PORTER_DUFF_SOURCE_OUT_DEST,
  DEST_OUT_SOURCE = GSK_PORTER_DUFF_DEST_OUT_SOURCE,
  SOURCE_ATOP_DEST = GSK_PORTER_DUFF_SOURCE_ATOP_DEST,
  DEST_ATOP_SOURCE = GSK_PORTER_DUFF_DEST_ATOP_SOURCE,
  XOR = GSK_PORTER_DUFF_XOR,
  CLEAR = GSK_PORTER_DUFF_CLEAR,
}; /* enum PorterDuff */


} /* namespace Gsk */
} /* namespace peel */

peel_end_header
