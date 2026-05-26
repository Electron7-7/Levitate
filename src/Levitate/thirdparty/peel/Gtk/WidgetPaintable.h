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
#include <peel/Gdk/Paintable.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class Widget;
class WidgetPaintable;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::WidgetPaintable> ()
{
  return gtk_widget_paintable_get_type ();
}


namespace Gtk
{
class WidgetPaintable : public Gdk::Paintable
/* non-derivable */
/* extends GObject::Object */
/* implements Gdk::Paintable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  WidgetPaintable () = delete;
  WidgetPaintable (const WidgetPaintable &) = delete;
  WidgetPaintable (WidgetPaintable &&) = delete;
  WidgetPaintable &
  operator = (const WidgetPaintable &) = delete;
  WidgetPaintable &
  operator = (WidgetPaintable &&) = delete;
  ~WidgetPaintable () = delete;
public:

  static peel::RefPtr<WidgetPaintable>
  create (Widget *widget) noexcept
  {
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GdkPaintable *_peel_return = gtk_widget_paintable_new (_peel_widget);
    peel_assume (_peel_return);
    return peel::RefPtr<WidgetPaintable>::adopt_ref (reinterpret_cast<WidgetPaintable *> (_peel_return));
  }

  Widget *
  get_widget () noexcept
  {
    ::GtkWidgetPaintable *_peel_this = reinterpret_cast<::GtkWidgetPaintable *> (this);
    ::GtkWidget *_peel_return = gtk_widget_paintable_get_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  void
  set_widget (Widget *widget) noexcept
  {
    ::GtkWidgetPaintable *_peel_this = reinterpret_cast<::GtkWidgetPaintable *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_widget_paintable_set_widget (_peel_this, _peel_widget);
  }

  static peel::Property<Widget>
  prop_widget ()
  {
    return peel::Property<Widget> { "widget" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkWidgetPaintableClass),
                 "WidgetPaintable::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkWidgetPaintableClass),
                 "WidgetPaintable::Class align mismatch");
}; /* class WidgetPaintable */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
