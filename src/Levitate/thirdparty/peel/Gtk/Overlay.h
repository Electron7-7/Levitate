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
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
struct Rectangle;
} /* namespace Gdk */

namespace Gtk
{
class Overlay;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Overlay> ()
{
  return gtk_overlay_get_type ();
}


namespace Gtk
{
class Overlay : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Overlay () = delete;
  Overlay (const Overlay &) = delete;
  Overlay (Overlay &&) = delete;
  Overlay &
  operator = (const Overlay &) = delete;
  Overlay &
  operator = (Overlay &&) = delete;
  ~Overlay () = delete;
public:

  static peel::FloatPtr<Overlay>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_overlay_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<Overlay> (reinterpret_cast<Overlay *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  add_overlay (Widget *widget) noexcept
  {
    ::GtkOverlay *_peel_this = reinterpret_cast<::GtkOverlay *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_overlay_add_overlay (_peel_this, _peel_widget);
  }

  Widget *
  get_child () noexcept
  {
    ::GtkOverlay *_peel_this = reinterpret_cast<::GtkOverlay *> (this);
    ::GtkWidget *_peel_return = gtk_overlay_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  get_clip_overlay (Widget *widget) noexcept
  {
    ::GtkOverlay *_peel_this = reinterpret_cast<::GtkOverlay *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gboolean _peel_return = gtk_overlay_get_clip_overlay (_peel_this, _peel_widget);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  get_measure_overlay (Widget *widget) noexcept
  {
    ::GtkOverlay *_peel_this = reinterpret_cast<::GtkOverlay *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gboolean _peel_return = gtk_overlay_get_measure_overlay (_peel_this, _peel_widget);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  remove_overlay (Widget *widget) noexcept
  {
    ::GtkOverlay *_peel_this = reinterpret_cast<::GtkOverlay *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_overlay_remove_overlay (_peel_this, _peel_widget);
  }

  void
  set_child (Widget *child) noexcept
  {
    ::GtkOverlay *_peel_this = reinterpret_cast<::GtkOverlay *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_overlay_set_child (_peel_this, _peel_child);
  }

  peel_nonnull_args (2)
  void
  set_clip_overlay (Widget *widget, bool clip_overlay) noexcept
  {
    ::GtkOverlay *_peel_this = reinterpret_cast<::GtkOverlay *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gboolean _peel_clip_overlay = static_cast<gboolean> (clip_overlay);
    gtk_overlay_set_clip_overlay (_peel_this, _peel_widget, _peel_clip_overlay);
  }

  peel_nonnull_args (2)
  void
  set_measure_overlay (Widget *widget, bool measure) noexcept
  {
    ::GtkOverlay *_peel_this = reinterpret_cast<::GtkOverlay *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gboolean _peel_measure = static_cast<gboolean> (measure);
    gtk_overlay_set_measure_overlay (_peel_this, _peel_widget, _peel_measure);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_get_child_position (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Overlay, bool (Widget *, Gdk::Rectangle *)>::_peel_connect_by_name (this, "get-child-position", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_get_child_position (HandlerObject *object, bool (HandlerObject::*handler_method) (Overlay *, Widget *, Gdk::Rectangle *), bool after = false) noexcept
  {
    return Signal<Overlay, bool (Widget *, Gdk::Rectangle *)>::_peel_connect_by_name (this, "get-child-position", object, handler_method, after);
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }
}; /* class Overlay */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
