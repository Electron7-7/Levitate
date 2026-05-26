#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>

peel_begin_header

namespace peel
{
namespace Gio
{
enum class BusType : std::underlying_type<::GBusType>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::BusType>
{
  typedef Gio::BusType UnownedType;

  static Gio::BusType
  get (const ::GValue *value)
  {
    return static_cast<Gio::BusType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::BusType m)
  {
    g_value_set_enum (value, static_cast<::GBusType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::BusType m)
  {
    set (value, m);
  }

  static Gio::BusType
  cast_for_create (Gio::BusType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::BusType> ()
{
  return g_bus_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::BusType>
{
  Gio::BusType default_value;

  constexpr PspecTraits (Gio::BusType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_bus_type_get_type (),
                              static_cast<::GBusType> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class BusType : std::underlying_type<::GBusType>::type
{
  STARTER = G_BUS_TYPE_STARTER,
  NONE = G_BUS_TYPE_NONE,
  SYSTEM = G_BUS_TYPE_SYSTEM,
  SESSION = G_BUS_TYPE_SESSION,
}; /* enum BusType */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
