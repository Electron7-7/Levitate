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
class Statusbar;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Statusbar> ()
{
  return gtk_statusbar_get_type ();
}


namespace Gtk
{
class Statusbar : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Statusbar () = delete;
  Statusbar (const Statusbar &) = delete;
  Statusbar (Statusbar &&) = delete;
  Statusbar &
  operator = (const Statusbar &) = delete;
  Statusbar &
  operator = (Statusbar &&) = delete;
  ~Statusbar () = delete;
public:

  static peel::FloatPtr<Statusbar>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_statusbar_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<Statusbar> (reinterpret_cast<Statusbar *> (_peel_return));
  }

  peel_nonnull_args (2)
  unsigned
  get_context_id (const char *context_description) noexcept
  {
    ::GtkStatusbar *_peel_this = reinterpret_cast<::GtkStatusbar *> (this);
    return gtk_statusbar_get_context_id (_peel_this, context_description);
  }

  void
  pop (unsigned context_id) noexcept
  {
    ::GtkStatusbar *_peel_this = reinterpret_cast<::GtkStatusbar *> (this);
    gtk_statusbar_pop (_peel_this, context_id);
  }

  peel_nonnull_args (3)
  unsigned
  push (unsigned context_id, const char *text) noexcept
  {
    ::GtkStatusbar *_peel_this = reinterpret_cast<::GtkStatusbar *> (this);
    return gtk_statusbar_push (_peel_this, context_id, text);
  }

  void
  remove (unsigned context_id, unsigned message_id) noexcept
  {
    ::GtkStatusbar *_peel_this = reinterpret_cast<::GtkStatusbar *> (this);
    gtk_statusbar_remove (_peel_this, context_id, message_id);
  }

  void
  remove_all (unsigned context_id) noexcept
  {
    ::GtkStatusbar *_peel_this = reinterpret_cast<::GtkStatusbar *> (this);
    gtk_statusbar_remove_all (_peel_this, context_id);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_text_popped (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Statusbar, void (unsigned, const char *)>::_peel_connect_by_name (this, "text-popped", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_text_popped (HandlerObject *object, void (HandlerObject::*handler_method) (Statusbar *, unsigned, const char *), bool after = false) noexcept
  {
    return Signal<Statusbar, void (unsigned, const char *)>::_peel_connect_by_name (this, "text-popped", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_text_pushed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Statusbar, void (unsigned, const char *)>::_peel_connect_by_name (this, "text-pushed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_text_pushed (HandlerObject *object, void (HandlerObject::*handler_method) (Statusbar *, unsigned, const char *), bool after = false) noexcept
  {
    return Signal<Statusbar, void (unsigned, const char *)>::_peel_connect_by_name (this, "text-pushed", object, handler_method, after);
  }
}; /* class Statusbar */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
