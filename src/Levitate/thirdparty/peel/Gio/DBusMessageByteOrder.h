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
struct GObject::Value::Traits<Gio::DBusMessage::ByteOrder>
{
  typedef Gio::DBusMessage::ByteOrder UnownedType;

  static Gio::DBusMessage::ByteOrder
  get (const ::GValue *value)
  {
    return static_cast<Gio::DBusMessage::ByteOrder> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::DBusMessage::ByteOrder m)
  {
    g_value_set_enum (value, static_cast<::GDBusMessageByteOrder> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::DBusMessage::ByteOrder m)
  {
    set (value, m);
  }

  static Gio::DBusMessage::ByteOrder
  cast_for_create (Gio::DBusMessage::ByteOrder m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::DBusMessage::ByteOrder> ()
{
  return g_dbus_message_byte_order_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::DBusMessage::ByteOrder>
{
  Gio::DBusMessage::ByteOrder default_value;

  constexpr PspecTraits (Gio::DBusMessage::ByteOrder default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_dbus_message_byte_order_get_type (),
                              static_cast<::GDBusMessageByteOrder> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class DBusMessage::ByteOrder : std::underlying_type<::GDBusMessageByteOrder>::type
{
  BIG_ENDIAN_ = G_DBUS_MESSAGE_BYTE_ORDER_BIG_ENDIAN,
  LITTLE_ENDIAN_ = G_DBUS_MESSAGE_BYTE_ORDER_LITTLE_ENDIAN,
}; /* enum DBusMessage::ByteOrder */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
