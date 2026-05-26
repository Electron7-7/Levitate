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
enum class TabAlign : std::underlying_type<::PangoTabAlign>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::TabAlign>
{
  typedef Pango::TabAlign UnownedType;

  static Pango::TabAlign
  get (const ::GValue *value)
  {
    return static_cast<Pango::TabAlign> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::TabAlign m)
  {
    g_value_set_enum (value, static_cast<::PangoTabAlign> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::TabAlign m)
  {
    set (value, m);
  }

  static Pango::TabAlign
  cast_for_create (Pango::TabAlign m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::TabAlign> ()
{
  return pango_tab_align_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::TabAlign>
{
  Pango::TabAlign default_value;

  constexpr PspecTraits (Pango::TabAlign default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_tab_align_get_type (),
                              static_cast<::PangoTabAlign> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class TabAlign : std::underlying_type<::PangoTabAlign>::type
{
  LEFT = PANGO_TAB_LEFT,
  RIGHT = PANGO_TAB_RIGHT,
  CENTER = PANGO_TAB_CENTER,
  DECIMAL = PANGO_TAB_DECIMAL,
}; /* enum TabAlign */


} /* namespace Pango */
} /* namespace peel */

peel_end_header
