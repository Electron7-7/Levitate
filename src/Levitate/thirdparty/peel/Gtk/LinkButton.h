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
#include <peel/Gtk/Button.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class LinkButton;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::LinkButton> ()
{
  return gtk_link_button_get_type ();
}


namespace Gtk
{
class LinkButton : public Button
/* non-derivable */
/* implements Accessible, Actionable, Buildable, Constraint::Target */
{
private:
  using Button::create_from_icon_name;
  using Button::create_with_mnemonic;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  LinkButton () = delete;
  LinkButton (const LinkButton &) = delete;
  LinkButton (LinkButton &&) = delete;
  LinkButton &
  operator = (const LinkButton &) = delete;
  LinkButton &
  operator = (LinkButton &&) = delete;
  ~LinkButton () = delete;
public:

  peel_nonnull_args (1)
  static peel::FloatPtr<LinkButton>
  create (const char *uri) noexcept
  {
    ::GtkWidget *_peel_return = gtk_link_button_new (uri);
    peel_assume (_peel_return);
    return peel::FloatPtr<LinkButton> (reinterpret_cast<LinkButton *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<LinkButton>
  create_with_label (const char *uri, const char *label) noexcept
  {
    ::GtkWidget *_peel_return = gtk_link_button_new_with_label (uri, label);
    peel_assume (_peel_return);
    return peel::FloatPtr<LinkButton> (reinterpret_cast<LinkButton *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_uri () noexcept
  {
    ::GtkLinkButton *_peel_this = reinterpret_cast<::GtkLinkButton *> (this);
    return gtk_link_button_get_uri (_peel_this);
  }

  bool
  get_visited () noexcept
  {
    ::GtkLinkButton *_peel_this = reinterpret_cast<::GtkLinkButton *> (this);
    gboolean _peel_return = gtk_link_button_get_visited (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  set_uri (const char *uri) noexcept
  {
    ::GtkLinkButton *_peel_this = reinterpret_cast<::GtkLinkButton *> (this);
    gtk_link_button_set_uri (_peel_this, uri);
  }

  void
  set_visited (bool visited) noexcept
  {
    ::GtkLinkButton *_peel_this = reinterpret_cast<::GtkLinkButton *> (this);
    gboolean _peel_visited = static_cast<gboolean> (visited);
    gtk_link_button_set_visited (_peel_this, _peel_visited);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate_link (Handler &&handler, bool after = false) noexcept
  {
    return Signal<LinkButton, bool ()>::_peel_connect_by_name (this, "activate-link", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate_link (HandlerObject *object, bool (HandlerObject::*handler_method) (LinkButton *), bool after = false) noexcept
  {
    return Signal<LinkButton, bool ()>::_peel_connect_by_name (this, "activate-link", object, handler_method, after);
  }

  static peel::Property<const char *>
  prop_uri ()
  {
    return peel::Property<const char *> { "uri" };
  }

  static peel::Property<bool>
  prop_visited ()
  {
    return peel::Property<bool> { "visited" };
  }
}; /* class LinkButton */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
