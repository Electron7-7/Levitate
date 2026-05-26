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

peel_begin_header

namespace peel
{
namespace Gtk
{
enum class License : std::underlying_type<::GtkLicense>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::License>
{
  typedef Gtk::License UnownedType;

  static Gtk::License
  get (const ::GValue *value)
  {
    return static_cast<Gtk::License> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::License m)
  {
    g_value_set_enum (value, static_cast<::GtkLicense> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::License m)
  {
    set (value, m);
  }

  static Gtk::License
  cast_for_create (Gtk::License m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::License> ()
{
  return gtk_license_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::License>
{
  Gtk::License default_value;

  constexpr PspecTraits (Gtk::License default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_license_get_type (),
                              static_cast<::GtkLicense> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class License : std::underlying_type<::GtkLicense>::type
{
  UNKNOWN = GTK_LICENSE_UNKNOWN,
  CUSTOM = GTK_LICENSE_CUSTOM,
  GPL_2_0 = GTK_LICENSE_GPL_2_0,
  GPL_3_0 = GTK_LICENSE_GPL_3_0,
  LGPL_2_1 = GTK_LICENSE_LGPL_2_1,
  LGPL_3_0 = GTK_LICENSE_LGPL_3_0,
  BSD = GTK_LICENSE_BSD,
  MIT_X11 = GTK_LICENSE_MIT_X11,
  ARTISTIC = GTK_LICENSE_ARTISTIC,
  GPL_2_0_ONLY = GTK_LICENSE_GPL_2_0_ONLY,
  GPL_3_0_ONLY = GTK_LICENSE_GPL_3_0_ONLY,
  LGPL_2_1_ONLY = GTK_LICENSE_LGPL_2_1_ONLY,
  LGPL_3_0_ONLY = GTK_LICENSE_LGPL_3_0_ONLY,
  AGPL_3_0 = GTK_LICENSE_AGPL_3_0,
  AGPL_3_0_ONLY = GTK_LICENSE_AGPL_3_0_ONLY,
  BSD_3 = GTK_LICENSE_BSD_3,
  APACHE_2_0 = GTK_LICENSE_APACHE_2_0,
  MPL_2_0 = GTK_LICENSE_MPL_2_0,
  _0BSD = GTK_LICENSE_0BSD,
}; /* enum License */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
