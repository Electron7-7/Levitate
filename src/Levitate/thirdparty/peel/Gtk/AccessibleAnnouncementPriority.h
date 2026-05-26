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
#include <peel/Gtk/Accessible.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Accessible::AnnouncementPriority>
{
  typedef Gtk::Accessible::AnnouncementPriority UnownedType;

  static Gtk::Accessible::AnnouncementPriority
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Accessible::AnnouncementPriority> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Accessible::AnnouncementPriority m)
  {
    g_value_set_enum (value, static_cast<::GtkAccessibleAnnouncementPriority> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Accessible::AnnouncementPriority m)
  {
    set (value, m);
  }

  static Gtk::Accessible::AnnouncementPriority
  cast_for_create (Gtk::Accessible::AnnouncementPriority m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Accessible::AnnouncementPriority> ()
{
  return gtk_accessible_announcement_priority_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Accessible::AnnouncementPriority>
{
  Gtk::Accessible::AnnouncementPriority default_value;

  constexpr PspecTraits (Gtk::Accessible::AnnouncementPriority default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_accessible_announcement_priority_get_type (),
                              static_cast<::GtkAccessibleAnnouncementPriority> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Accessible::AnnouncementPriority : std::underlying_type<::GtkAccessibleAnnouncementPriority>::type
{
  LOW = GTK_ACCESSIBLE_ANNOUNCEMENT_PRIORITY_LOW,
  MEDIUM = GTK_ACCESSIBLE_ANNOUNCEMENT_PRIORITY_MEDIUM,
  HIGH = GTK_ACCESSIBLE_ANNOUNCEMENT_PRIORITY_HIGH,
}; /* enum Accessible::AnnouncementPriority */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
