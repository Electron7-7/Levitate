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
#include <peel/Gtk/IconView.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::IconView::DropPosition>
{
  typedef Gtk::IconView::DropPosition UnownedType;

  static Gtk::IconView::DropPosition
  get (const ::GValue *value)
  {
    return static_cast<Gtk::IconView::DropPosition> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::IconView::DropPosition m)
  {
    g_value_set_enum (value, static_cast<::GtkIconViewDropPosition> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::IconView::DropPosition m)
  {
    set (value, m);
  }

  static Gtk::IconView::DropPosition
  cast_for_create (Gtk::IconView::DropPosition m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::IconView::DropPosition> ()
{
  return gtk_icon_view_drop_position_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::IconView::DropPosition>
{
  Gtk::IconView::DropPosition default_value;

  constexpr PspecTraits (Gtk::IconView::DropPosition default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_icon_view_drop_position_get_type (),
                              static_cast<::GtkIconViewDropPosition> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class IconView::DropPosition : std::underlying_type<::GtkIconViewDropPosition>::type
{
  NO_DROP = GTK_ICON_VIEW_NO_DROP,
  DROP_INTO = GTK_ICON_VIEW_DROP_INTO,
  DROP_LEFT = GTK_ICON_VIEW_DROP_LEFT,
  DROP_RIGHT = GTK_ICON_VIEW_DROP_RIGHT,
  DROP_ABOVE = GTK_ICON_VIEW_DROP_ABOVE,
  DROP_BELOW = GTK_ICON_VIEW_DROP_BELOW,
}; /* enum IconView::DropPosition */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
