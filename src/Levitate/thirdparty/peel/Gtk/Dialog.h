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
class Box;
class Dialog;
class HeaderBar;
class Widget;
class Window;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Dialog> ()
{
  return gtk_dialog_get_type ();
}


namespace Gtk
{
class Dialog : public Window
/* implements Accessible, Buildable, Constraint::Target, Native, Root, ShortcutManager */
{
private:
  using Window::get_default_icon_name;
  using Window::get_toplevels;
  using Window::list_toplevels;
  using Window::set_auto_startup_notification;
  using Window::set_default_icon_name;
  using Window::set_interactive_debugging;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Dialog () = delete;
  Dialog (const Dialog &) = delete;
  Dialog (Dialog &&) = delete;
  Dialog &
  operator = (const Dialog &) = delete;
  Dialog &
  operator = (Dialog &&) = delete;
protected:
  ~Dialog () = default;
public:
  enum class Flags : std::underlying_type<::GtkDialogFlags>::type;

  peel_returns_nonnull
  static Dialog *
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_dialog_new ();
    peel_assume (_peel_return);
    return reinterpret_cast<Dialog *> (_peel_return);
  }

  /* Unsupported for now: new_with_buttons: varargs */
  static void
  create_with_buttons (UnsupportedForNowToken);

  peel_nonnull_args (2)
  void
  add_action_widget (Widget *child, int response_id) noexcept
  {
    ::GtkDialog *_peel_this = reinterpret_cast<::GtkDialog *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_dialog_add_action_widget (_peel_this, _peel_child, response_id);
  }

  peel_nonnull_args (2) peel_returns_nonnull
  Widget *
  add_button (const char *button_text, int response_id) noexcept
  {
    ::GtkDialog *_peel_this = reinterpret_cast<::GtkDialog *> (this);
    ::GtkWidget *_peel_return = gtk_dialog_add_button (_peel_this, button_text, response_id);
    peel_assume (_peel_return);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  /* Unsupported for now: add_buttons: varargs */
  static void
  add_buttons (UnsupportedForNowToken);

  peel_returns_nonnull
  Box *
  get_content_area () noexcept
  {
    ::GtkDialog *_peel_this = reinterpret_cast<::GtkDialog *> (this);
    ::GtkWidget *_peel_return = gtk_dialog_get_content_area (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Box *> (_peel_return);
  }

  peel_returns_nonnull
  HeaderBar *
  get_header_bar () noexcept
  {
    ::GtkDialog *_peel_this = reinterpret_cast<::GtkDialog *> (this);
    ::GtkWidget *_peel_return = gtk_dialog_get_header_bar (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<HeaderBar *> (_peel_return);
  }

  peel_nonnull_args (2)
  int
  get_response_for_widget (Widget *widget) noexcept
  {
    ::GtkDialog *_peel_this = reinterpret_cast<::GtkDialog *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    return gtk_dialog_get_response_for_widget (_peel_this, _peel_widget);
  }

  Widget *
  get_widget_for_response (int response_id) noexcept
  {
    ::GtkDialog *_peel_this = reinterpret_cast<::GtkDialog *> (this);
    ::GtkWidget *_peel_return = gtk_dialog_get_widget_for_response (_peel_this, response_id);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  void
  response (int response_id) noexcept
  {
    ::GtkDialog *_peel_this = reinterpret_cast<::GtkDialog *> (this);
    gtk_dialog_response (_peel_this, response_id);
  }

  void
  set_default_response (int response_id) noexcept
  {
    ::GtkDialog *_peel_this = reinterpret_cast<::GtkDialog *> (this);
    gtk_dialog_set_default_response (_peel_this, response_id);
  }

  void
  set_response_sensitive (int response_id, bool setting) noexcept
  {
    ::GtkDialog *_peel_this = reinterpret_cast<::GtkDialog *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_dialog_set_response_sensitive (_peel_this, response_id, _peel_setting);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_close (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Dialog, void ()>::_peel_connect_by_name (this, "close", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_close (HandlerObject *object, void (HandlerObject::*handler_method) (Dialog *), bool after = false) noexcept
  {
    return Signal<Dialog, void ()>::_peel_connect_by_name (this, "close", object, handler_method, after);
  }

  void
  emit_close () noexcept
  {
    return Signal<Dialog, void ()>::_peel_emit_by_name (this, "close");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_response (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Dialog, void (int)>::_peel_connect_by_name (this, "response", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_response (HandlerObject *object, void (HandlerObject::*handler_method) (Dialog *, int), bool after = false) noexcept
  {
    return Signal<Dialog, void (int)>::_peel_connect_by_name (this, "response", object, handler_method, after);
  }

  static peel::Property<int>
  prop_use_header_bar ()
  {
    return peel::Property<int> { "use-header-bar" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Dialog> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_close () noexcept
  {
    ::GtkDialogClass *_peel_class = reinterpret_cast<::GtkDialogClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkDialog *_peel_this = reinterpret_cast<::GtkDialog *> (this);
    _peel_class->close (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_response (int response_id) noexcept
  {
    ::GtkDialogClass *_peel_class = reinterpret_cast<::GtkDialogClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkDialog *_peel_this = reinterpret_cast<::GtkDialog *> (this);
    _peel_class->response (_peel_this, response_id);
  }

public:
  class Class : public Window::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkDialogClass) - sizeof (Window::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_close ()
    {
      ::GtkDialogClass *klass = reinterpret_cast<::GtkDialogClass *> (this);
      klass->close = +[] (::GtkDialog *dialog) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (dialog);
        _peel_this->DerivedClass::vfunc_close ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_response ()
    {
      ::GtkDialogClass *klass = reinterpret_cast<::GtkDialogClass *> (this);
      klass->response = +[] (::GtkDialog *dialog, int response_id) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (dialog);
        _peel_this->DerivedClass::vfunc_response (response_id);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkDialogClass),
                 "Dialog::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkDialogClass),
                 "Dialog::Class align mismatch");
}; /* class Dialog */

static_assert (sizeof (Dialog) == sizeof (::GtkDialog),
               "Dialog size mismatch");
static_assert (alignof (Dialog) == alignof (::GtkDialog),
               "Dialog align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
