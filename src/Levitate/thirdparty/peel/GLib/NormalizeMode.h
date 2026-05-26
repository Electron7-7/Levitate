#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>

peel_begin_header

namespace peel
{
namespace GLib
{
enum class NormalizeMode : std::underlying_type<::GNormalizeMode>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::NormalizeMode>
{
  typedef GLib::NormalizeMode UnownedType;

  static GLib::NormalizeMode
  get (const ::GValue *value)
  {
    return static_cast<GLib::NormalizeMode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::NormalizeMode m)
  {
    g_value_set_enum (value, static_cast<::GNormalizeMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::NormalizeMode m)
  {
    set (value, m);
  }

  static GLib::NormalizeMode
  cast_for_create (GLib::NormalizeMode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<GLib::NormalizeMode> ()
{
  return g_normalize_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<GLib::NormalizeMode>
{
  GLib::NormalizeMode default_value;

  constexpr PspecTraits (GLib::NormalizeMode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_normalize_mode_get_type (),
                              static_cast<::GNormalizeMode> (default_value),
                              basics.flags);
  }
};


namespace GLib
{
enum class NormalizeMode : std::underlying_type<::GNormalizeMode>::type
{
  DEFAULT = G_NORMALIZE_DEFAULT,
  NFD = G_NORMALIZE_NFD,
  DEFAULT_COMPOSE = G_NORMALIZE_DEFAULT_COMPOSE,
  NFC = G_NORMALIZE_NFC,
  ALL = G_NORMALIZE_ALL,
  NFKD = G_NORMALIZE_NFKD,
  ALL_COMPOSE = G_NORMALIZE_ALL_COMPOSE,
  NFKC = G_NORMALIZE_NFKC,
}; /* enum NormalizeMode */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
