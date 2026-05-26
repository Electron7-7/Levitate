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
#include <peel/Gtk/Window.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class ShortcutsSection;
class ShortcutsWindow;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ShortcutsWindow> ()
{
  return gtk_shortcuts_window_get_type ();
}


namespace Gtk
{
class ShortcutsWindow : public Window
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, Native, Root, ShortcutManager */
{
private:
  using Window::create;
  using Window::get_default_icon_name;
  using Window::get_toplevels;
  using Window::list_toplevels;
  using Window::set_auto_startup_notification;
  using Window::set_default_icon_name;
  using Window::set_interactive_debugging;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ShortcutsWindow () = delete;
  ShortcutsWindow (const ShortcutsWindow &) = delete;
  ShortcutsWindow (ShortcutsWindow &&) = delete;
  ShortcutsWindow &
  operator = (const ShortcutsWindow &) = delete;
  ShortcutsWindow &
  operator = (ShortcutsWindow &&) = delete;
  ~ShortcutsWindow () = delete;
public:

  peel_nonnull_args (2)
  void
  add_section (ShortcutsSection *section) noexcept
  {
    ::GtkShortcutsWindow *_peel_this = reinterpret_cast<::GtkShortcutsWindow *> (this);
    ::GtkShortcutsSection *_peel_section = reinterpret_cast<::GtkShortcutsSection *> (section);
    gtk_shortcuts_window_add_section (_peel_this, _peel_section);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_close (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ShortcutsWindow, void ()>::_peel_connect_by_name (this, "close", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_close (HandlerObject *object, void (HandlerObject::*handler_method) (ShortcutsWindow *), bool after = false) noexcept
  {
    return Signal<ShortcutsWindow, void ()>::_peel_connect_by_name (this, "close", object, handler_method, after);
  }

  void
  emit_close () noexcept
  {
    return Signal<ShortcutsWindow, void ()>::_peel_emit_by_name (this, "close");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_search (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ShortcutsWindow, void ()>::_peel_connect_by_name (this, "search", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_search (HandlerObject *object, void (HandlerObject::*handler_method) (ShortcutsWindow *), bool after = false) noexcept
  {
    return Signal<ShortcutsWindow, void ()>::_peel_connect_by_name (this, "search", object, handler_method, after);
  }

  void
  emit_search () noexcept
  {
    return Signal<ShortcutsWindow, void ()>::_peel_emit_by_name (this, "search");
  }

  static peel::Property<const char *>
  prop_section_name ()
  {
    return peel::Property<const char *> { "section-name" };
  }

  static peel::Property<const char *>
  prop_view_name ()
  {
    return peel::Property<const char *> { "view-name" };
  }
}; /* class ShortcutsWindow */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
