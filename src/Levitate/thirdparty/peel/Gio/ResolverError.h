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

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
} /* namespace GLib */

namespace Gio
{
enum class ResolverError : std::underlying_type<::GResolverError>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::ResolverError>
{
  typedef Gio::ResolverError UnownedType;

  static Gio::ResolverError
  get (const ::GValue *value)
  {
    return static_cast<Gio::ResolverError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::ResolverError m)
  {
    g_value_set_enum (value, static_cast<::GResolverError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::ResolverError m)
  {
    set (value, m);
  }

  static Gio::ResolverError
  cast_for_create (Gio::ResolverError m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::ResolverError> ()
{
  return g_resolver_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::ResolverError>
{
  Gio::ResolverError default_value;

  constexpr PspecTraits (Gio::ResolverError default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_resolver_error_get_type (),
                              static_cast<::GResolverError> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class ResolverError : std::underlying_type<::GResolverError>::type
{
  NOT_FOUND = G_RESOLVER_ERROR_NOT_FOUND,
  TEMPORARY_FAILURE = G_RESOLVER_ERROR_TEMPORARY_FAILURE,
  INTERNAL = G_RESOLVER_ERROR_INTERNAL,
}; /* enum ResolverError */

peel_no_warn_unused
static GLib::Quark
resolver_error_quark () noexcept
{
  ::GQuark _peel_return = g_resolver_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace Gio */
} /* namespace peel */

peel_end_header
