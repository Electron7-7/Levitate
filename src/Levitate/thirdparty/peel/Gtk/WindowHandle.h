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
class Widget;
class WindowHandle;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::WindowHandle> ()
{
  return gtk_window_handle_get_type ();
}


namespace Gtk
{
class WindowHandle : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  WindowHandle () = delete;
  WindowHandle (const WindowHandle &) = delete;
  WindowHandle (WindowHandle &&) = delete;
  WindowHandle &
  operator = (const WindowHandle &) = delete;
  WindowHandle &
  operator = (WindowHandle &&) = delete;
  ~WindowHandle () = delete;
public:

  static peel::FloatPtr<WindowHandle>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_window_handle_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<WindowHandle> (reinterpret_cast<WindowHandle *> (_peel_return));
  }

  Widget *
  get_child () noexcept
  {
    ::GtkWindowHandle *_peel_this = reinterpret_cast<::GtkWindowHandle *> (this);
    ::GtkWidget *_peel_return = gtk_window_handle_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  void
  set_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkWindowHandle *_peel_this = reinterpret_cast<::GtkWindowHandle *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_window_handle_set_child (_peel_this, _peel_child);
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

  static_assert (sizeof (Class) == sizeof (::GtkWindowHandleClass),
                 "WindowHandle::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkWindowHandleClass),
                 "WindowHandle::Class align mismatch");
}; /* class WindowHandle */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
