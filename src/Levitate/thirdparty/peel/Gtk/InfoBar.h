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
class Button;
class InfoBar;
enum class MessageType : std::underlying_type<::GtkMessageType>::type;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::InfoBar> ()
{
  return gtk_info_bar_get_type ();
}


namespace Gtk
{
class InfoBar : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  InfoBar () = delete;
  InfoBar (const InfoBar &) = delete;
  InfoBar (InfoBar &&) = delete;
  InfoBar &
  operator = (const InfoBar &) = delete;
  InfoBar &
  operator = (InfoBar &&) = delete;
  ~InfoBar () = delete;
public:

  static peel::FloatPtr<InfoBar>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_info_bar_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<InfoBar> (reinterpret_cast<InfoBar *> (_peel_return));
  }

  /* Unsupported for now: new_with_buttons: varargs */
  static void
  create_with_buttons (UnsupportedForNowToken);

  peel_nonnull_args (2)
  void
  add_action_widget (Widget *child, int response_id) noexcept
  {
    ::GtkInfoBar *_peel_this = reinterpret_cast<::GtkInfoBar *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_info_bar_add_action_widget (_peel_this, _peel_child, response_id);
  }

  peel_nonnull_args (2) peel_returns_nonnull
  Button *
  add_button (const char *button_text, int response_id) noexcept
  {
    ::GtkInfoBar *_peel_this = reinterpret_cast<::GtkInfoBar *> (this);
    ::GtkWidget *_peel_return = gtk_info_bar_add_button (_peel_this, button_text, response_id);
    peel_assume (_peel_return);
    return reinterpret_cast<Button *> (_peel_return);
  }

  /* Unsupported for now: add_buttons: varargs */
  static void
  add_buttons (UnsupportedForNowToken);

  peel_nonnull_args (2)
  void
  add_child (Widget *widget) noexcept
  {
    ::GtkInfoBar *_peel_this = reinterpret_cast<::GtkInfoBar *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_info_bar_add_child (_peel_this, _peel_widget);
  }

  MessageType
  get_message_type () noexcept
  {
    ::GtkInfoBar *_peel_this = reinterpret_cast<::GtkInfoBar *> (this);
    ::GtkMessageType _peel_return = gtk_info_bar_get_message_type (_peel_this);
    return static_cast<MessageType> (_peel_return);
  }

  bool
  get_revealed () noexcept
  {
    ::GtkInfoBar *_peel_this = reinterpret_cast<::GtkInfoBar *> (this);
    gboolean _peel_return = gtk_info_bar_get_revealed (_peel_this);
    return !!_peel_return;
  }

  bool
  get_show_close_button () noexcept
  {
    ::GtkInfoBar *_peel_this = reinterpret_cast<::GtkInfoBar *> (this);
    gboolean _peel_return = gtk_info_bar_get_show_close_button (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  remove_action_widget (Widget *widget) noexcept
  {
    ::GtkInfoBar *_peel_this = reinterpret_cast<::GtkInfoBar *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_info_bar_remove_action_widget (_peel_this, _peel_widget);
  }

  peel_nonnull_args (2)
  void
  remove_child (Widget *widget) noexcept
  {
    ::GtkInfoBar *_peel_this = reinterpret_cast<::GtkInfoBar *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_info_bar_remove_child (_peel_this, _peel_widget);
  }

  void
  response (int response_id) noexcept
  {
    ::GtkInfoBar *_peel_this = reinterpret_cast<::GtkInfoBar *> (this);
    gtk_info_bar_response (_peel_this, response_id);
  }

  void
  set_default_response (int response_id) noexcept
  {
    ::GtkInfoBar *_peel_this = reinterpret_cast<::GtkInfoBar *> (this);
    gtk_info_bar_set_default_response (_peel_this, response_id);
  }

  void
  set_message_type (MessageType message_type) noexcept
  {
    ::GtkInfoBar *_peel_this = reinterpret_cast<::GtkInfoBar *> (this);
    ::GtkMessageType _peel_message_type = static_cast<::GtkMessageType> (message_type);
    gtk_info_bar_set_message_type (_peel_this, _peel_message_type);
  }

  void
  set_response_sensitive (int response_id, bool setting) noexcept
  {
    ::GtkInfoBar *_peel_this = reinterpret_cast<::GtkInfoBar *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_info_bar_set_response_sensitive (_peel_this, response_id, _peel_setting);
  }

  void
  set_revealed (bool revealed) noexcept
  {
    ::GtkInfoBar *_peel_this = reinterpret_cast<::GtkInfoBar *> (this);
    gboolean _peel_revealed = static_cast<gboolean> (revealed);
    gtk_info_bar_set_revealed (_peel_this, _peel_revealed);
  }

  void
  set_show_close_button (bool setting) noexcept
  {
    ::GtkInfoBar *_peel_this = reinterpret_cast<::GtkInfoBar *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_info_bar_set_show_close_button (_peel_this, _peel_setting);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_close (Handler &&handler, bool after = false) noexcept
  {
    return Signal<InfoBar, void ()>::_peel_connect_by_name (this, "close", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_close (HandlerObject *object, void (HandlerObject::*handler_method) (InfoBar *), bool after = false) noexcept
  {
    return Signal<InfoBar, void ()>::_peel_connect_by_name (this, "close", object, handler_method, after);
  }

  void
  emit_close () noexcept
  {
    return Signal<InfoBar, void ()>::_peel_emit_by_name (this, "close");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_response (Handler &&handler, bool after = false) noexcept
  {
    return Signal<InfoBar, void (int)>::_peel_connect_by_name (this, "response", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_response (HandlerObject *object, void (HandlerObject::*handler_method) (InfoBar *, int), bool after = false) noexcept
  {
    return Signal<InfoBar, void (int)>::_peel_connect_by_name (this, "response", object, handler_method, after);
  }

  static peel::Property<MessageType>
  prop_message_type ()
  {
    return peel::Property<MessageType> { "message-type" };
  }

  static peel::Property<bool>
  prop_revealed ()
  {
    return peel::Property<bool> { "revealed" };
  }

  static peel::Property<bool>
  prop_show_close_button ()
  {
    return peel::Property<bool> { "show-close-button" };
  }
}; /* class InfoBar */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
