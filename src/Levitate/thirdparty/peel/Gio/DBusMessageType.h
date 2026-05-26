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
#include <peel/Gio/DBusMessage.h>

peel_begin_header

namespace peel
{
namespace Gio
{
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::DBusMessage::Type>
{
  typedef Gio::DBusMessage::Type UnownedType;

  static Gio::DBusMessage::Type
  get (const ::GValue *value)
  {
    return static_cast<Gio::DBusMessage::Type> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::DBusMessage::Type m)
  {
    g_value_set_enum (value, static_cast<::GDBusMessageType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DBusMessage::Type m)
  {
    set (value, m);
  }

  static Gio::DBusMessage::Type
  cast_for_create (Gio::DBusMessage::Type m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DBusMessage::Type> ()
{
  return g_dbus_message_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DBusMessage::Type>
{
  Gio::DBusMessage::Type default_value;

  constexpr PspecTraits (Gio::DBusMessage::Type default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_dbus_message_type_get_type (),
                              static_cast<::GDBusMessageType> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class DBusMessage::Type : std::underlying_type<::GDBusMessageType>::type
{
  INVALID = G_DBUS_MESSAGE_TYPE_INVALID,
  METHOD_CALL = G_DBUS_MESSAGE_TYPE_METHOD_CALL,
  METHOD_RETURN = G_DBUS_MESSAGE_TYPE_METHOD_RETURN,
  ERROR_ = G_DBUS_MESSAGE_TYPE_ERROR,
  SIGNAL = G_DBUS_MESSAGE_TYPE_SIGNAL,
}; /* enum DBusMessage::Type */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
