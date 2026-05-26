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
class Expander;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Expander> ()
{
  return gtk_expander_get_type ();
}


namespace Gtk
{
class Expander : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Expander () = delete;
  Expander (const Expander &) = delete;
  Expander (Expander &&) = delete;
  Expander &
  operator = (const Expander &) = delete;
  Expander &
  operator = (Expander &&) = delete;
  ~Expander () = delete;
public:

  static peel::FloatPtr<Expander>
  create (const char *label) noexcept
  {
    ::GtkWidget *_peel_return = gtk_expander_new (label);
    peel_assume (_peel_return);
    return peel::FloatPtr<Expander> (reinterpret_cast<Expander *> (_peel_return));
  }

  static peel::FloatPtr<Expander>
  create_with_mnemonic (const char *label) noexcept
  {
    ::GtkWidget *_peel_return = gtk_expander_new_with_mnemonic (label);
    peel_assume (_peel_return);
    return peel::FloatPtr<Expander> (reinterpret_cast<Expander *> (_peel_return));
  }

  Widget *
  get_child () noexcept
  {
    ::GtkExpander *_peel_this = reinterpret_cast<::GtkExpander *> (this);
    ::GtkWidget *_peel_return = gtk_expander_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_expanded () noexcept
  {
    ::GtkExpander *_peel_this = reinterpret_cast<::GtkExpander *> (this);
    gboolean _peel_return = gtk_expander_get_expanded (_peel_this);
    return !!_peel_return;
  }

  const char *
  get_label () noexcept
  {
    ::GtkExpander *_peel_this = reinterpret_cast<::GtkExpander *> (this);
    return gtk_expander_get_label (_peel_this);
  }

  Widget *
  get_label_widget () noexcept
  {
    ::GtkExpander *_peel_this = reinterpret_cast<::GtkExpander *> (this);
    ::GtkWidget *_peel_return = gtk_expander_get_label_widget (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_resize_toplevel () noexcept
  {
    ::GtkExpander *_peel_this = reinterpret_cast<::GtkExpander *> (this);
    gboolean _peel_return = gtk_expander_get_resize_toplevel (_peel_this);
    return !!_peel_return;
  }

  bool
  get_use_markup () noexcept
  {
    ::GtkExpander *_peel_this = reinterpret_cast<::GtkExpander *> (this);
    gboolean _peel_return = gtk_expander_get_use_markup (_peel_this);
    return !!_peel_return;
  }

  bool
  get_use_underline () noexcept
  {
    ::GtkExpander *_peel_this = reinterpret_cast<::GtkExpander *> (this);
    gboolean _peel_return = gtk_expander_get_use_underline (_peel_this);
    return !!_peel_return;
  }

  void
  set_child (Widget *child) noexcept
  {
    ::GtkExpander *_peel_this = reinterpret_cast<::GtkExpander *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_expander_set_child (_peel_this, _peel_child);
  }

  void
  set_expanded (bool expanded) noexcept
  {
    ::GtkExpander *_peel_this = reinterpret_cast<::GtkExpander *> (this);
    gboolean _peel_expanded = static_cast<gboolean> (expanded);
    gtk_expander_set_expanded (_peel_this, _peel_expanded);
  }

  void
  set_label (const char *label) noexcept
  {
    ::GtkExpander *_peel_this = reinterpret_cast<::GtkExpander *> (this);
    gtk_expander_set_label (_peel_this, label);
  }

  void
  set_label_widget (Widget *label_widget) noexcept
  {
    ::GtkExpander *_peel_this = reinterpret_cast<::GtkExpander *> (this);
    ::GtkWidget *_peel_label_widget = reinterpret_cast<::GtkWidget *> (label_widget);
    gtk_expander_set_label_widget (_peel_this, _peel_label_widget);
  }

  void
  set_resize_toplevel (bool resize_toplevel) noexcept
  {
    ::GtkExpander *_peel_this = reinterpret_cast<::GtkExpander *> (this);
    gboolean _peel_resize_toplevel = static_cast<gboolean> (resize_toplevel);
    gtk_expander_set_resize_toplevel (_peel_this, _peel_resize_toplevel);
  }

  void
  set_use_markup (bool use_markup) noexcept
  {
    ::GtkExpander *_peel_this = reinterpret_cast<::GtkExpander *> (this);
    gboolean _peel_use_markup = static_cast<gboolean> (use_markup);
    gtk_expander_set_use_markup (_peel_this, _peel_use_markup);
  }

  void
  set_use_underline (bool use_underline) noexcept
  {
    ::GtkExpander *_peel_this = reinterpret_cast<::GtkExpander *> (this);
    gboolean _peel_use_underline = static_cast<gboolean> (use_underline);
    gtk_expander_set_use_underline (_peel_this, _peel_use_underline);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Expander, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (Expander *), bool after = false) noexcept
  {
    return Signal<Expander, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<Expander, void ()>::_peel_emit_by_name (this, "activate");
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<bool>
  prop_expanded ()
  {
    return peel::Property<bool> { "expanded" };
  }

  static peel::Property<const char *>
  prop_label ()
  {
    return peel::Property<const char *> { "label" };
  }

  static peel::Property<Widget>
  prop_label_widget ()
  {
    return peel::Property<Widget> { "label-widget" };
  }

  static peel::Property<bool>
  prop_resize_toplevel ()
  {
    return peel::Property<bool> { "resize-toplevel" };
  }

  static peel::Property<bool>
  prop_use_markup ()
  {
    return peel::Property<bool> { "use-markup" };
  }

  static peel::Property<bool>
  prop_use_underline ()
  {
    return peel::Property<bool> { "use-underline" };
  }
}; /* class Expander */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
