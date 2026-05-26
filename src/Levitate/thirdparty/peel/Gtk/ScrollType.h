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
enum class ScrollType : std::underlying_type<::GtkScrollType>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::ScrollType>
{
  typedef Gtk::ScrollType UnownedType;

  static Gtk::ScrollType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::ScrollType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::ScrollType m)
  {
    g_value_set_enum (value, static_cast<::GtkScrollType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::ScrollType m)
  {
    set (value, m);
  }

  static Gtk::ScrollType
  cast_for_create (Gtk::ScrollType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::ScrollType> ()
{
  return gtk_scroll_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::ScrollType>
{
  Gtk::ScrollType default_value;

  constexpr PspecTraits (Gtk::ScrollType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_scroll_type_get_type (),
                              static_cast<::GtkScrollType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class ScrollType : std::underlying_type<::GtkScrollType>::type
{
  NONE = GTK_SCROLL_NONE,
  JUMP = GTK_SCROLL_JUMP,
  STEP_BACKWARD = GTK_SCROLL_STEP_BACKWARD,
  STEP_FORWARD = GTK_SCROLL_STEP_FORWARD,
  PAGE_BACKWARD = GTK_SCROLL_PAGE_BACKWARD,
  PAGE_FORWARD = GTK_SCROLL_PAGE_FORWARD,
  STEP_UP = GTK_SCROLL_STEP_UP,
  STEP_DOWN = GTK_SCROLL_STEP_DOWN,
  PAGE_UP = GTK_SCROLL_PAGE_UP,
  PAGE_DOWN = GTK_SCROLL_PAGE_DOWN,
  STEP_LEFT = GTK_SCROLL_STEP_LEFT,
  STEP_RIGHT = GTK_SCROLL_STEP_RIGHT,
  PAGE_LEFT = GTK_SCROLL_PAGE_LEFT,
  PAGE_RIGHT = GTK_SCROLL_PAGE_RIGHT,
  START = GTK_SCROLL_START,
  END = GTK_SCROLL_END,
}; /* enum ScrollType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
