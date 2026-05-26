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
namespace Gtk
{
class Adjustment;
class /* record */ ScrollInfo;
class Viewport;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Viewport> ()
{
  return gtk_viewport_get_type ();
}


namespace Gtk
{
class Viewport : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, Scrollable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Viewport () = delete;
  Viewport (const Viewport &) = delete;
  Viewport (Viewport &&) = delete;
  Viewport &
  operator = (const Viewport &) = delete;
  Viewport &
  operator = (Viewport &&) = delete;
  ~Viewport () = delete;
public:

  static peel::FloatPtr<Viewport>
  create (Adjustment *hadjustment, Adjustment *vadjustment) noexcept
  {
    ::GtkAdjustment *_peel_hadjustment = reinterpret_cast<::GtkAdjustment *> (hadjustment);
    ::GtkAdjustment *_peel_vadjustment = reinterpret_cast<::GtkAdjustment *> (vadjustment);
    ::GtkWidget *_peel_return = gtk_viewport_new (_peel_hadjustment, _peel_vadjustment);
    peel_assume (_peel_return);
    return peel::FloatPtr<Viewport> (reinterpret_cast<Viewport *> (_peel_return));
  }

  Widget *
  get_child () noexcept
  {
    ::GtkViewport *_peel_this = reinterpret_cast<::GtkViewport *> (this);
    ::GtkWidget *_peel_return = gtk_viewport_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_scroll_to_focus () noexcept
  {
    ::GtkViewport *_peel_this = reinterpret_cast<::GtkViewport *> (this);
    gboolean _peel_return = gtk_viewport_get_scroll_to_focus (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  scroll_to (Widget *descendant, peel::RefPtr<ScrollInfo> scroll) noexcept
  {
    ::GtkViewport *_peel_this = reinterpret_cast<::GtkViewport *> (this);
    ::GtkWidget *_peel_descendant = reinterpret_cast<::GtkWidget *> (descendant);
    ::GtkScrollInfo *_peel_scroll = reinterpret_cast<::GtkScrollInfo *> (std::move (scroll).release_ref ());
    gtk_viewport_scroll_to (_peel_this, _peel_descendant, _peel_scroll);
  }

  void
  set_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkViewport *_peel_this = reinterpret_cast<::GtkViewport *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_viewport_set_child (_peel_this, _peel_child);
  }

  void
  set_scroll_to_focus (bool scroll_to_focus) noexcept
  {
    ::GtkViewport *_peel_this = reinterpret_cast<::GtkViewport *> (this);
    gboolean _peel_scroll_to_focus = static_cast<gboolean> (scroll_to_focus);
    gtk_viewport_set_scroll_to_focus (_peel_this, _peel_scroll_to_focus);
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<bool>
  prop_scroll_to_focus ()
  {
    return peel::Property<bool> { "scroll-to-focus" };
  }
}; /* class Viewport */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/ScrollInfo.h>
