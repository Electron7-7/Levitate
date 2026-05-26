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
#include <gtk/gtk.h>
#include <peel/GLib/Quark.h>
#include <peel/Gtk/RecentManager.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
} /* namespace GLib */

namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::RecentManager::Error>
{
  typedef Gtk::RecentManager::Error UnownedType;

  static Gtk::RecentManager::Error
  get (const ::GValue *value)
  {
    return static_cast<Gtk::RecentManager::Error> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::RecentManager::Error m)
  {
    g_value_set_enum (value, static_cast<::GtkRecentManagerError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::RecentManager::Error m)
  {
    set (value, m);
  }

  static Gtk::RecentManager::Error
  cast_for_create (Gtk::RecentManager::Error m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::RecentManager::Error> ()
{
  return gtk_recent_manager_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::RecentManager::Error>
{
  Gtk::RecentManager::Error default_value;

  constexpr PspecTraits (Gtk::RecentManager::Error default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_recent_manager_error_get_type (),
                              static_cast<::GtkRecentManagerError> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class RecentManager::Error : std::underlying_type<::GtkRecentManagerError>::type
{
  NOT_FOUND = GTK_RECENT_MANAGER_ERROR_NOT_FOUND,
  INVALID_URI = GTK_RECENT_MANAGER_ERROR_INVALID_URI,
  INVALID_ENCODING = GTK_RECENT_MANAGER_ERROR_INVALID_ENCODING,
  NOT_REGISTERED = GTK_RECENT_MANAGER_ERROR_NOT_REGISTERED,
  READ = GTK_RECENT_MANAGER_ERROR_READ,
  WRITE = GTK_RECENT_MANAGER_ERROR_WRITE,
  UNKNOWN = GTK_RECENT_MANAGER_ERROR_UNKNOWN,
}; /* enum RecentManager::Error */

peel_no_warn_unused
static GLib::Quark
recent_manager_error_quark () noexcept
{
  ::GQuark _peel_return = gtk_recent_manager_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
