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
enum class NotificationPriority : std::underlying_type<::GNotificationPriority>::type;
} /* namespace Gio */

template<>
struct GObject::Value::Traits<Gio::NotificationPriority>
{
  typedef Gio::NotificationPriority UnownedType;

  static Gio::NotificationPriority
  get (const ::GValue *value)
  {
    return static_cast<Gio::NotificationPriority> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gio::NotificationPriority m)
  {
    g_value_set_enum (value, static_cast<::GNotificationPriority> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gio::NotificationPriority m)
  {
    set (value, m);
  }

  static Gio::NotificationPriority
  cast_for_create (Gio::NotificationPriority m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gio::NotificationPriority> ()
{
  return g_notification_priority_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gio::NotificationPriority>
{
  Gio::NotificationPriority default_value;

  constexpr PspecTraits (Gio::NotificationPriority default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              g_notification_priority_get_type (),
                              static_cast<::GNotificationPriority> (default_value),
                              basics.flags);
  }
};


namespace Gio
{
enum class NotificationPriority : std::underlying_type<::GNotificationPriority>::type
{
  NORMAL = G_NOTIFICATION_PRIORITY_NORMAL,
  LOW = G_NOTIFICATION_PRIORITY_LOW,
  HIGH = G_NOTIFICATION_PRIORITY_HIGH,
  URGENT = G_NOTIFICATION_PRIORITY_URGENT,
}; /* enum NotificationPriority */


} /* namespace Gio */
} /* namespace peel */

peel_end_header
