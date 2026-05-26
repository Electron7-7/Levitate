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
#include <peel/GLib/List.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class Window;
class WindowGroup;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::WindowGroup> ()
{
  return gtk_window_group_get_type ();
}


namespace Gtk
{
class WindowGroup : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GtkWindowGroup) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  WindowGroup () = delete;
  WindowGroup (const WindowGroup &) = delete;
  WindowGroup (WindowGroup &&) = delete;
  WindowGroup &
  operator = (const WindowGroup &) = delete;
  WindowGroup &
  operator = (WindowGroup &&) = delete;
protected:
  ~WindowGroup () = default;
public:

  static peel::RefPtr<WindowGroup>
  create () noexcept
  {
    ::GtkWindowGroup *_peel_return = gtk_window_group_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<WindowGroup>::adopt_ref (reinterpret_cast<WindowGroup *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  add_window (Window *window) noexcept
  {
    ::GtkWindowGroup *_peel_this = reinterpret_cast<::GtkWindowGroup *> (this);
    ::GtkWindow *_peel_window = reinterpret_cast<::GtkWindow *> (window);
    gtk_window_group_add_window (_peel_this, _peel_window);
  }

  GLib::List<Window *>
  list_windows () noexcept
  {
    ::GtkWindowGroup *_peel_this = reinterpret_cast<::GtkWindowGroup *> (this);
    GList *_peel_return = gtk_window_group_list_windows (_peel_this);
    return GLib::List<Window *>::adopt_list (_peel_return);
  }

  peel_nonnull_args (2)
  void
  remove_window (Window *window) noexcept
  {
    ::GtkWindowGroup *_peel_this = reinterpret_cast<::GtkWindowGroup *> (this);
    ::GtkWindow *_peel_window = reinterpret_cast<::GtkWindow *> (window);
    gtk_window_group_remove_window (_peel_this, _peel_window);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<WindowGroup> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkWindowGroupClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GtkWindowGroupClass),
                 "WindowGroup::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkWindowGroupClass),
                 "WindowGroup::Class align mismatch");
}; /* class WindowGroup */

static_assert (sizeof (WindowGroup) == sizeof (::GtkWindowGroup),
               "WindowGroup size mismatch");
static_assert (alignof (WindowGroup) == alignof (::GtkWindowGroup),
               "WindowGroup align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Window.h>
