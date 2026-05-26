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
struct GObject::Value::Traits<Gio::DBusMessage::HeaderField>
{
  typedef Gio::DBusMessage::HeaderField UnownedType;

  static Gio::DBusMessage::HeaderField
  get (const ::GValue *value)
  {
    return static_cast<Gio::DBusMessage::HeaderField> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::DBusMessage::HeaderField m)
  {
    g_value_set_enum (value, static_cast<::GDBusMessageHeaderField> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DBusMessage::HeaderField m)
  {
    set (value, m);
  }

  static Gio::DBusMessage::HeaderField
  cast_for_create (Gio::DBusMessage::HeaderField m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DBusMessage::HeaderField> ()
{
  return g_dbus_message_header_field_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DBusMessage::HeaderField>
{
  Gio::DBusMessage::HeaderField default_value;

  constexpr PspecTraits (Gio::DBusMessage::HeaderField default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_dbus_message_header_field_get_type (),
                              static_cast<::GDBusMessageHeaderField> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class DBusMessage::HeaderField : std::underlying_type<::GDBusMessageHeaderField>::type
{
  INVALID = G_DBUS_MESSAGE_HEADER_FIELD_INVALID,
  PATH = G_DBUS_MESSAGE_HEADER_FIELD_PATH,
  INTERFACE = G_DBUS_MESSAGE_HEADER_FIELD_INTERFACE,
  MEMBER = G_DBUS_MESSAGE_HEADER_FIELD_MEMBER,
  ERROR_NAME = G_DBUS_MESSAGE_HEADER_FIELD_ERROR_NAME,
  REPLY_SERIAL = G_DBUS_MESSAGE_HEADER_FIELD_REPLY_SERIAL,
  DESTINATION = G_DBUS_MESSAGE_HEADER_FIELD_DESTINATION,
  SENDER = G_DBUS_MESSAGE_HEADER_FIELD_SENDER,
  SIGNATURE = G_DBUS_MESSAGE_HEADER_FIELD_SIGNATURE,
  NUM_UNIX_FDS = G_DBUS_MESSAGE_HEADER_FIELD_NUM_UNIX_FDS,
}; /* enum DBusMessage::HeaderField */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
