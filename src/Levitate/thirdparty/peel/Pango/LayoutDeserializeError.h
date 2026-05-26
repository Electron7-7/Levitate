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
#include <peel/GLib/Quark.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
} /* namespace GLib */

namespace Pango
{
enum class LayoutDeserializeError : std::underlying_type<::PangoLayoutDeserializeError>::type;
} /* namespace Pango */

template<>
struct GObject::Value::Traits<Pango::LayoutDeserializeError>
{
  typedef Pango::LayoutDeserializeError UnownedType;

  static Pango::LayoutDeserializeError
  get (const ::GValue *value)
  {
    return static_cast<Pango::LayoutDeserializeError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Pango::LayoutDeserializeError m)
  {
    g_value_set_enum (value, static_cast<::PangoLayoutDeserializeError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Pango::LayoutDeserializeError m)
  {
    set (value, m);
  }

  static Pango::LayoutDeserializeError
  cast_for_create (Pango::LayoutDeserializeError m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Pango::LayoutDeserializeError> ()
{
  return pango_layout_deserialize_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Pango::LayoutDeserializeError>
{
  Pango::LayoutDeserializeError default_value;

  constexpr PspecTraits (Pango::LayoutDeserializeError default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              pango_layout_deserialize_error_get_type (),
                              static_cast<::PangoLayoutDeserializeError> (default_value),
                              basics.flags);
  }
};


namespace Pango
{
enum class LayoutDeserializeError : std::underlying_type<::PangoLayoutDeserializeError>::type
{
  INVALID = PANGO_LAYOUT_DESERIALIZE_INVALID,
  INVALID_VALUE = PANGO_LAYOUT_DESERIALIZE_INVALID_VALUE,
  MISSING_VALUE = PANGO_LAYOUT_DESERIALIZE_MISSING_VALUE,
}; /* enum LayoutDeserializeError */

peel_no_warn_unused
static GLib::Quark
layout_deserialize_error_quark () noexcept
{
  ::GQuark _peel_return = pango_layout_deserialize_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace Pango */
} /* namespace peel */

peel_end_header
