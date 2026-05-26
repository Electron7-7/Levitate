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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Variant;
} /* namespace GLib */

namespace Gio
{
class /* interface */ Icon;
class Notification;
enum class NotificationPriority : std::underlying_type<::GNotificationPriority>::type;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Notification> ()
{
  return g_notification_get_type ();
}


namespace Gio
{
class Notification : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Notification () = delete;
  Notification (const Notification &) = delete;
  Notification (Notification &&) = delete;
  Notification &
  operator = (const Notification &) = delete;
  Notification &
  operator = (Notification &&) = delete;
  ~Notification () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<Notification>
  create (const char *title) noexcept
  {
    ::GNotification *_peel_return = g_notification_new (title);
    peel_assume (_peel_return);
    return peel::RefPtr<Notification>::adopt_ref (reinterpret_cast<Notification *> (_peel_return));
  }

  peel_nonnull_args (2, 3)
  void
  add_button (const char *label, const char *detailed_action) noexcept
  {
    ::GNotification *_peel_this = reinterpret_cast<::GNotification *> (this);
    g_notification_add_button (_peel_this, label, detailed_action);
  }

  template<typename... Args>
  peel_nonnull_args (2, 3)
  void
  add_button_with_target (const char *label, const char *action, const char *target_format, Args &&...args) noexcept
  {
    ::GNotification *_peel_this = reinterpret_cast<::GNotification *> (this);
    g_notification_add_button_with_target (_peel_this, label, action, target_format, GLib::Variant::Traits<typename std::decay<Args>::type>::cast_for_create (std::forward<Args> (args))...);
  }

  peel_nonnull_args (2, 3)
  void
  add_button_with_target_value (const char *label, const char *action, peel::FloatPtr<GLib::Variant> target) noexcept
  {
    ::GNotification *_peel_this = reinterpret_cast<::GNotification *> (this);
    ::GVariant *_peel_target = reinterpret_cast<::GVariant *> (std::move (target).release_floating_ptr ());
    g_notification_add_button_with_target_value (_peel_this, label, action, _peel_target);
  }

  void
  set_body (const char *body) noexcept
  {
    ::GNotification *_peel_this = reinterpret_cast<::GNotification *> (this);
    g_notification_set_body (_peel_this, body);
  }

  void
  set_category (const char *category) noexcept
  {
    ::GNotification *_peel_this = reinterpret_cast<::GNotification *> (this);
    g_notification_set_category (_peel_this, category);
  }

  peel_nonnull_args (2)
  void
  set_default_action (const char *detailed_action) noexcept
  {
    ::GNotification *_peel_this = reinterpret_cast<::GNotification *> (this);
    g_notification_set_default_action (_peel_this, detailed_action);
  }

  template<typename... Args>
  peel_nonnull_args (2)
  void
  set_default_action_and_target (const char *action, const char *target_format, Args &&...args) noexcept
  {
    ::GNotification *_peel_this = reinterpret_cast<::GNotification *> (this);
    g_notification_set_default_action_and_target (_peel_this, action, target_format, GLib::Variant::Traits<typename std::decay<Args>::type>::cast_for_create (std::forward<Args> (args))...);
  }

  peel_nonnull_args (2)
  void
  set_default_action_and_target_value (const char *action, peel::FloatPtr<GLib::Variant> target) noexcept
  {
    ::GNotification *_peel_this = reinterpret_cast<::GNotification *> (this);
    ::GVariant *_peel_target = reinterpret_cast<::GVariant *> (std::move (target).release_floating_ptr ());
    g_notification_set_default_action_and_target_value (_peel_this, action, _peel_target);
  }

  peel_nonnull_args (2)
  void
  set_icon (Icon *icon) noexcept
  {
    ::GNotification *_peel_this = reinterpret_cast<::GNotification *> (this);
    ::GIcon *_peel_icon = reinterpret_cast<::GIcon *> (icon);
    g_notification_set_icon (_peel_this, _peel_icon);
  }

  void
  set_priority (NotificationPriority priority) noexcept
  {
    ::GNotification *_peel_this = reinterpret_cast<::GNotification *> (this);
    ::GNotificationPriority _peel_priority = static_cast<::GNotificationPriority> (priority);
    g_notification_set_priority (_peel_this, _peel_priority);
  }

  peel_nonnull_args (2)
  void
  set_title (const char *title) noexcept
  {
    ::GNotification *_peel_this = reinterpret_cast<::GNotification *> (this);
    g_notification_set_title (_peel_this, title);
  }

  void
  set_urgent (bool urgent) noexcept
  {
    ::GNotification *_peel_this = reinterpret_cast<::GNotification *> (this);
    gboolean _peel_urgent = static_cast<gboolean> (urgent);
    g_notification_set_urgent (_peel_this, _peel_urgent);
  }
}; /* class Notification */

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Variant.h>
