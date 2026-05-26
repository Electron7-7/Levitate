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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
struct Quark;
class /* record */ Variant;
} /* namespace GLib */

namespace Gio
{
class DBusConnection;
class DBusMessage;
struct DBusMethodInfo;
class DBusMethodInvocation;
struct DBusPropertyInfo;
class UnixFDList;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusMethodInvocation> ()
{
  return g_dbus_method_invocation_get_type ();
}


namespace Gio
{
class DBusMethodInvocation : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DBusMethodInvocation () = delete;
  DBusMethodInvocation (const DBusMethodInvocation &) = delete;
  DBusMethodInvocation (DBusMethodInvocation &&) = delete;
  DBusMethodInvocation &
  operator = (const DBusMethodInvocation &) = delete;
  DBusMethodInvocation &
  operator = (DBusMethodInvocation &&) = delete;
  ~DBusMethodInvocation () = delete;
public:

  peel_returns_nonnull
  DBusConnection *
  get_connection () noexcept
  {
    ::GDBusMethodInvocation *_peel_this = reinterpret_cast<::GDBusMethodInvocation *> (this);
    ::GDBusConnection *_peel_return = g_dbus_method_invocation_get_connection (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<DBusConnection *> (_peel_return);
  }

  const char *
  get_interface_name () noexcept
  {
    ::GDBusMethodInvocation *_peel_this = reinterpret_cast<::GDBusMethodInvocation *> (this);
    return g_dbus_method_invocation_get_interface_name (_peel_this);
  }

  peel_returns_nonnull
  DBusMessage *
  get_message () noexcept
  {
    ::GDBusMethodInvocation *_peel_this = reinterpret_cast<::GDBusMethodInvocation *> (this);
    ::GDBusMessage *_peel_return = g_dbus_method_invocation_get_message (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<DBusMessage *> (_peel_return);
  }

  const DBusMethodInfo *
  get_method_info () noexcept
  {
    ::GDBusMethodInvocation *_peel_this = reinterpret_cast<::GDBusMethodInvocation *> (this);
    const ::GDBusMethodInfo *_peel_return = g_dbus_method_invocation_get_method_info (_peel_this);
    return reinterpret_cast<const DBusMethodInfo *> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_method_name () noexcept
  {
    ::GDBusMethodInvocation *_peel_this = reinterpret_cast<::GDBusMethodInvocation *> (this);
    return g_dbus_method_invocation_get_method_name (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_object_path () noexcept
  {
    ::GDBusMethodInvocation *_peel_this = reinterpret_cast<::GDBusMethodInvocation *> (this);
    return g_dbus_method_invocation_get_object_path (_peel_this);
  }

  peel_returns_nonnull
  GLib::Variant *
  get_parameters () noexcept
  {
    ::GDBusMethodInvocation *_peel_this = reinterpret_cast<::GDBusMethodInvocation *> (this);
    ::GVariant *_peel_return = g_dbus_method_invocation_get_parameters (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<GLib::Variant *> (_peel_return);
  }

  const DBusPropertyInfo *
  get_property_info () noexcept
  {
    ::GDBusMethodInvocation *_peel_this = reinterpret_cast<::GDBusMethodInvocation *> (this);
    const ::GDBusPropertyInfo *_peel_return = g_dbus_method_invocation_get_property_info (_peel_this);
    return reinterpret_cast<const DBusPropertyInfo *> (_peel_return);
  }

  const char *
  get_sender () noexcept
  {
    ::GDBusMethodInvocation *_peel_this = reinterpret_cast<::GDBusMethodInvocation *> (this);
    return g_dbus_method_invocation_get_sender (_peel_this);
  }

  void *
  get_user_data () noexcept
  {
    ::GDBusMethodInvocation *_peel_this = reinterpret_cast<::GDBusMethodInvocation *> (this);
    return g_dbus_method_invocation_get_user_data (_peel_this);
  }

  peel_nonnull_args (2, 3)
  static void
  return_dbus_error (peel::RefPtr<DBusMethodInvocation> invocation, const char *error_name, const char *error_message) noexcept
  {
    ::GDBusMethodInvocation *_peel_invocation = reinterpret_cast<::GDBusMethodInvocation *> (std::move (invocation).release_ref ());
    g_dbus_method_invocation_return_dbus_error (_peel_invocation, error_name, error_message);
  }

  template<typename... Args>
  peel_nonnull_args (4)
  static void
  return_error (peel::RefPtr<DBusMethodInvocation> invocation, GLib::Quark domain, int code, const char *format, Args ...args) noexcept
  {
    ::GDBusMethodInvocation *_peel_invocation = reinterpret_cast<::GDBusMethodInvocation *> (std::move (invocation).release_ref ());
    g_dbus_method_invocation_return_error (_peel_invocation, domain, code, format, args...);
  }

  peel_nonnull_args (4)
  static void
  return_error_literal (peel::RefPtr<DBusMethodInvocation> invocation, GLib::Quark domain, int code, const char *message) noexcept
  {
    ::GDBusMethodInvocation *_peel_invocation = reinterpret_cast<::GDBusMethodInvocation *> (std::move (invocation).release_ref ());
    g_dbus_method_invocation_return_error_literal (_peel_invocation, domain, code, message);
  }

  peel_nonnull_args (4)
  static void
  return_error_valist (peel::RefPtr<DBusMethodInvocation> invocation, GLib::Quark domain, int code, const char *format, va_list var_args) noexcept
  {
    ::GDBusMethodInvocation *_peel_invocation = reinterpret_cast<::GDBusMethodInvocation *> (std::move (invocation).release_ref ());
    g_dbus_method_invocation_return_error_valist (_peel_invocation, domain, code, format, var_args);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  static void
  return_gerror (peel::RefPtr<DBusMethodInvocation> invocation, const GLib::Error *error) noexcept
  {
    ::GDBusMethodInvocation *_peel_invocation = reinterpret_cast<::GDBusMethodInvocation *> (std::move (invocation).release_ref ());
    const ::GError *_peel_error = reinterpret_cast<const ::GError *> (error);
    g_dbus_method_invocation_return_gerror (_peel_invocation, _peel_error);
  }

  static void
  return_value (peel::RefPtr<DBusMethodInvocation> invocation, peel::FloatPtr<GLib::Variant> parameters) noexcept
  {
    ::GDBusMethodInvocation *_peel_invocation = reinterpret_cast<::GDBusMethodInvocation *> (std::move (invocation).release_ref ());
    ::GVariant *_peel_parameters = reinterpret_cast<::GVariant *> (std::move (parameters).release_floating_ptr ());
    g_dbus_method_invocation_return_value (_peel_invocation, _peel_parameters);
  }

#ifdef G_OS_UNIX
  static void
  return_value_with_unix_fd_list (peel::RefPtr<DBusMethodInvocation> invocation, peel::FloatPtr<GLib::Variant> parameters, UnixFDList *fd_list) noexcept
  {
    ::GDBusMethodInvocation *_peel_invocation = reinterpret_cast<::GDBusMethodInvocation *> (std::move (invocation).release_ref ());
    ::GVariant *_peel_parameters = reinterpret_cast<::GVariant *> (std::move (parameters).release_floating_ptr ());
    ::GUnixFDList *_peel_fd_list = reinterpret_cast<::GUnixFDList *> (fd_list);
    g_dbus_method_invocation_return_value_with_unix_fd_list (_peel_invocation, _peel_parameters, _peel_fd_list);
  }
#endif /* G_OS_UNIX */

  static void
  take_error (peel::RefPtr<DBusMethodInvocation> invocation, peel::UniquePtr<GLib::Error> error) noexcept
  {
    ::GDBusMethodInvocation *_peel_invocation = reinterpret_cast<::GDBusMethodInvocation *> (std::move (invocation).release_ref ());
    ::GError *_peel_error = reinterpret_cast<::GError *> (std::move (error).release_ref ());
    g_dbus_method_invocation_take_error (_peel_invocation, _peel_error);
  }
}; /* class DBusMethodInvocation */

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GLib/Variant.h>
