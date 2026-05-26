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
#include <peel/GLib/Quark.h>
#include <peel/Gio/Resource.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
} /* namespace GLib */

namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::Resource::Error>
{
  typedef Gio::Resource::Error UnownedType;

  static Gio::Resource::Error
  get (const ::GValue *value)
  {
    return static_cast<Gio::Resource::Error> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::Resource::Error m)
  {
    g_value_set_enum (value, static_cast<::GResourceError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::Resource::Error m)
  {
    set (value, m);
  }

  static Gio::Resource::Error
  cast_for_create (Gio::Resource::Error m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::Resource::Error> ()
{
  return g_resource_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::Resource::Error>
{
  Gio::Resource::Error default_value;

  constexpr PspecTraits (Gio::Resource::Error default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_resource_error_get_type (),
                              static_cast<::GResourceError> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class Resource::Error : std::underlying_type<::GResourceError>::type
{
  NOT_FOUND = G_RESOURCE_ERROR_NOT_FOUND,
  INTERNAL = G_RESOURCE_ERROR_INTERNAL,
}; /* enum Resource::Error */

peel_no_warn_unused
static GLib::Quark
resource_error_quark () noexcept
{
  ::GQuark _peel_return = g_resource_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
