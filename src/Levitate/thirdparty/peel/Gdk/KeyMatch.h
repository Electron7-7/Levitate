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
#include <gdk/gdk.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
enum class KeyMatch : std::underlying_type<::GdkKeyMatch>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::KeyMatch>
{
  typedef Gdk::KeyMatch UnownedType;

  static Gdk::KeyMatch
  get (const ::GValue *value)
  {
    return static_cast<Gdk::KeyMatch> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::KeyMatch m)
  {
    g_value_set_enum (value, static_cast<::GdkKeyMatch> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::KeyMatch m)
  {
    set (value, m);
  }

  static Gdk::KeyMatch
  cast_for_create (Gdk::KeyMatch m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::KeyMatch> ()
{
  return gdk_key_match_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::KeyMatch>
{
  Gdk::KeyMatch default_value;

  constexpr PspecTraits (Gdk::KeyMatch default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_key_match_get_type (),
                              static_cast<::GdkKeyMatch> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class KeyMatch : std::underlying_type<::GdkKeyMatch>::type
{
  NONE = GDK_KEY_MATCH_NONE,
  PARTIAL = GDK_KEY_MATCH_PARTIAL,
  EXACT = GDK_KEY_MATCH_EXACT,
}; /* enum KeyMatch */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
