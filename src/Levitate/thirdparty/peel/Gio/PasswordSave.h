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
enum class PasswordSave : std::underlying_type<::GPasswordSave>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::PasswordSave>
{
  typedef Gio::PasswordSave UnownedType;

  static Gio::PasswordSave
  get (const ::GValue *value)
  {
    return static_cast<Gio::PasswordSave> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::PasswordSave m)
  {
    g_value_set_enum (value, static_cast<::GPasswordSave> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::PasswordSave m)
  {
    set (value, m);
  }

  static Gio::PasswordSave
  cast_for_create (Gio::PasswordSave m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::PasswordSave> ()
{
  return g_password_save_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::PasswordSave>
{
  Gio::PasswordSave default_value;

  constexpr PspecTraits (Gio::PasswordSave default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_password_save_get_type (),
                              static_cast<::GPasswordSave> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class PasswordSave : std::underlying_type<::GPasswordSave>::type
{
  NEVER = G_PASSWORD_SAVE_NEVER,
  FOR_SESSION = G_PASSWORD_SAVE_FOR_SESSION,
  PERMANENTLY = G_PASSWORD_SAVE_PERMANENTLY,
}; /* enum PasswordSave */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
