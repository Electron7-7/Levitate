#pragma once

/* Auto-generated, do not modify */
/* Package pango */

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
#include <pango/pango.h>

peel_begin_header

namespace peel
{
namespace Pango
{
enum class EllipsizeMode : std::underlying_type<::PangoEllipsizeMode>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::EllipsizeMode>
{
  typedef Pango::EllipsizeMode UnownedType;

  static Pango::EllipsizeMode
  get (const ::GValue *value)
  {
    return static_cast<Pango::EllipsizeMode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::EllipsizeMode m)
  {
    g_value_set_enum (value, static_cast<::PangoEllipsizeMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::EllipsizeMode m)
  {
    set (value, m);
  }

  static Pango::EllipsizeMode
  cast_for_create (Pango::EllipsizeMode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::EllipsizeMode> ()
{
  return pango_ellipsize_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::EllipsizeMode>
{
  Pango::EllipsizeMode default_value;

  constexpr PspecTraits (Pango::EllipsizeMode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_ellipsize_mode_get_type (),
                              static_cast<::PangoEllipsizeMode> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class EllipsizeMode : std::underlying_type<::PangoEllipsizeMode>::type
{
  NONE = PANGO_ELLIPSIZE_NONE,
  START = PANGO_ELLIPSIZE_START,
  MIDDLE = PANGO_ELLIPSIZE_MIDDLE,
  END = PANGO_ELLIPSIZE_END,
}; /* enum EllipsizeMode */


} /* namespace Pango */
} /* namespace peel */

peel_end_header
