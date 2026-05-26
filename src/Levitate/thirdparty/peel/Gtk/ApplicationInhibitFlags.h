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
#include <peel/Gtk/Application.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Application::InhibitFlags>
{
  typedef Gtk::Application::InhibitFlags UnownedType;

  static Gtk::Application::InhibitFlags
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Application::InhibitFlags> (g_value_get_flags (value));
  }

  static void
  set (::GValue *value, Gtk::Application::InhibitFlags flags)
  {
    g_value_set_flags (value, static_cast<::GtkApplicationInhibitFlags> (flags));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Application::InhibitFlags flags)
  {
    set (value, flags);
  }

  static Gtk::Application::InhibitFlags
  cast_for_create (Gtk::Application::InhibitFlags flags) noexcept
  {
    return flags;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Application::InhibitFlags> ()
{
  return gtk_application_inhibit_flags_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Application::InhibitFlags>
{
  Gtk::Application::InhibitFlags default_value;

  constexpr PspecTraits (Gtk::Application::InhibitFlags default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_flags (basics.name, basics.nick, basics.blurb,
                               gtk_application_inhibit_flags_get_type (),
                               static_cast<::GtkApplicationInhibitFlags> (default_value),
                               basics.flags);
  }
};


namespace Gtk
{
enum class /* bitfield */ Application::InhibitFlags : std::underlying_type<::GtkApplicationInhibitFlags>::type
{
  LOGOUT = GTK_APPLICATION_INHIBIT_LOGOUT,
  SWITCH = GTK_APPLICATION_INHIBIT_SWITCH,
  SUSPEND = GTK_APPLICATION_INHIBIT_SUSPEND,
  IDLE = GTK_APPLICATION_INHIBIT_IDLE,
}; /* bitfield Application::InhibitFlags */

static constexpr inline Application::InhibitFlags
operator | (Application::InhibitFlags lhs, Application::InhibitFlags rhs)
{
  return Application::InhibitFlags (static_cast<::GtkApplicationInhibitFlags> (lhs) | static_cast<::GtkApplicationInhibitFlags> (rhs));
}

static constexpr inline Application::InhibitFlags
operator & (Application::InhibitFlags lhs, Application::InhibitFlags rhs)
{
  return Application::InhibitFlags (static_cast<::GtkApplicationInhibitFlags> (lhs) & static_cast<::GtkApplicationInhibitFlags> (rhs));
}

static constexpr inline Application::InhibitFlags
operator ^ (Application::InhibitFlags lhs, Application::InhibitFlags rhs)
{
  return Application::InhibitFlags (static_cast<::GtkApplicationInhibitFlags> (lhs) ^ static_cast<::GtkApplicationInhibitFlags> (rhs));
}

static constexpr inline Application::InhibitFlags
operator ~ (Application::InhibitFlags lhs)
{
  return Application::InhibitFlags (~static_cast<::GtkApplicationInhibitFlags> (lhs));
}

static inline Application::InhibitFlags &
operator |= (Application::InhibitFlags &lhs, Application::InhibitFlags rhs)
{
  lhs = lhs | rhs;
  return lhs;
}

static inline Application::InhibitFlags &
operator &= (Application::InhibitFlags &lhs, Application::InhibitFlags rhs)
{
  lhs = lhs & rhs;
  return lhs;
}

static inline Application::InhibitFlags &
operator ^= (Application::InhibitFlags &lhs, Application::InhibitFlags rhs)
{
  lhs = lhs ^ rhs;
  return lhs;
}

static constexpr inline bool
operator ! (Application::InhibitFlags lhs)
{
  return !static_cast<::GtkApplicationInhibitFlags> (lhs);
}

static constexpr inline bool
operator + (Application::InhibitFlags lhs)
{
  return !!static_cast<::GtkApplicationInhibitFlags> (lhs);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
