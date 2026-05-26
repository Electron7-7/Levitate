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
#include <peel/Gtk/Root.h>

peel_begin_header

namespace peel
{
namespace GObject
{
struct Value;
} /* namespace GObject */

namespace Gdk
{
class Drag;
class /* interface */ Paintable;
} /* namespace Gdk */

namespace Gtk
{
class DragIcon;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::DragIcon> ()
{
  return gtk_drag_icon_get_type ();
}


namespace Gtk
{
class DragIcon : public Root
/* non-derivable */
/* extends Widget */
/* implements Accessible, Buildable, Constraint::Target, Native, Root */
{
private:
  using Root::get_default_direction;
  using Root::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DragIcon () = delete;
  DragIcon (const DragIcon &) = delete;
  DragIcon (DragIcon &&) = delete;
  DragIcon &
  operator = (const DragIcon &) = delete;
  DragIcon &
  operator = (DragIcon &&) = delete;
  ~DragIcon () = delete;
public:

  peel_nonnull_args (1)
  static peel::FloatPtr<DragIcon>
  get_for_drag (Gdk::Drag *drag) noexcept
  {
    ::GdkDrag *_peel_drag = reinterpret_cast<::GdkDrag *> (drag);
    ::GtkWidget *_peel_return = gtk_drag_icon_get_for_drag (_peel_drag);
    peel_assume (_peel_return);
    return peel::FloatPtr<DragIcon> (reinterpret_cast<DragIcon *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<Widget>
  create_widget_for_value (const GObject::Value *value) noexcept
  {
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    ::GtkWidget *_peel_return = gtk_drag_icon_create_widget_for_value (_peel_value);
    return peel::RefPtr<Widget>::adopt_ref (reinterpret_cast<Widget *> (_peel_return));
  }

  peel_nonnull_args (1, 2)
  static void
  set_from_paintable (Gdk::Drag *drag, Gdk::Paintable *paintable, int hot_x, int hot_y) noexcept
  {
    ::GdkDrag *_peel_drag = reinterpret_cast<::GdkDrag *> (drag);
    ::GdkPaintable *_peel_paintable = reinterpret_cast<::GdkPaintable *> (paintable);
    gtk_drag_icon_set_from_paintable (_peel_drag, _peel_paintable, hot_x, hot_y);
  }

  Widget *
  get_child () noexcept
  {
    ::GtkDragIcon *_peel_this = reinterpret_cast<::GtkDragIcon *> (this);
    ::GtkWidget *_peel_return = gtk_drag_icon_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  void
  set_child (Widget *child) noexcept
  {
    ::GtkDragIcon *_peel_this = reinterpret_cast<::GtkDragIcon *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_drag_icon_set_child (_peel_this, _peel_child);
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkDragIconClass),
                 "DragIcon::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkDragIconClass),
                 "DragIcon::Class align mismatch");
}; /* class DragIcon */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Widget.h>
