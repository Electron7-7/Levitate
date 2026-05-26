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
#include <peel/Gtk/Dialog.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
enum class ButtonsType : std::underlying_type<::GtkButtonsType>::type;
class MessageDialog;
enum class MessageType : std::underlying_type<::GtkMessageType>::type;
class Widget;
class Window;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::MessageDialog> ()
{
  return gtk_message_dialog_get_type ();
}


namespace Gtk
{
class MessageDialog : public Dialog
/* implements Accessible, Buildable, Constraint::Target, Native, Root, ShortcutManager */
{
private:
  using Dialog::create_with_buttons;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MessageDialog () = delete;
  MessageDialog (const MessageDialog &) = delete;
  MessageDialog (MessageDialog &&) = delete;
  MessageDialog &
  operator = (const MessageDialog &) = delete;
  MessageDialog &
  operator = (MessageDialog &&) = delete;
protected:
  ~MessageDialog () = default;
public:

  template<typename... Args>
  peel_returns_nonnull
  static MessageDialog *
  create (Window *parent, Dialog::Flags flags, MessageType type, ButtonsType buttons, const char *message_format, Args ...args) noexcept
  {
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GtkDialogFlags _peel_flags = static_cast<::GtkDialogFlags> (flags);
    ::GtkMessageType _peel_type = static_cast<::GtkMessageType> (type);
    ::GtkButtonsType _peel_buttons = static_cast<::GtkButtonsType> (buttons);
    ::GtkWidget *_peel_return = gtk_message_dialog_new (_peel_parent, _peel_flags, _peel_type, _peel_buttons, message_format, args...);
    peel_assume (_peel_return);
    return reinterpret_cast<MessageDialog *> (_peel_return);
  }

  template<typename... Args>
  peel_returns_nonnull
  static MessageDialog *
  create_with_markup (Window *parent, Dialog::Flags flags, MessageType type, ButtonsType buttons, const char *message_format, Args ...args) noexcept
  {
    ::GtkWindow *_peel_parent = reinterpret_cast<::GtkWindow *> (parent);
    ::GtkDialogFlags _peel_flags = static_cast<::GtkDialogFlags> (flags);
    ::GtkMessageType _peel_type = static_cast<::GtkMessageType> (type);
    ::GtkButtonsType _peel_buttons = static_cast<::GtkButtonsType> (buttons);
    ::GtkWidget *_peel_return = gtk_message_dialog_new_with_markup (_peel_parent, _peel_flags, _peel_type, _peel_buttons, message_format, args...);
    peel_assume (_peel_return);
    return reinterpret_cast<MessageDialog *> (_peel_return);
  }

  template<typename... Args>
  peel_nonnull_args (2)
  void
  format_secondary_markup (const char *message_format, Args ...args) noexcept
  {
    ::GtkMessageDialog *_peel_this = reinterpret_cast<::GtkMessageDialog *> (this);
    gtk_message_dialog_format_secondary_markup (_peel_this, message_format, args...);
  }

  template<typename... Args>
  void
  format_secondary_text (const char *message_format, Args ...args) noexcept
  {
    ::GtkMessageDialog *_peel_this = reinterpret_cast<::GtkMessageDialog *> (this);
    gtk_message_dialog_format_secondary_text (_peel_this, message_format, args...);
  }

  peel_returns_nonnull
  Widget *
  get_message_area () noexcept
  {
    ::GtkMessageDialog *_peel_this = reinterpret_cast<::GtkMessageDialog *> (this);
    ::GtkWidget *_peel_return = gtk_message_dialog_get_message_area (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  set_markup (const char *str) noexcept
  {
    ::GtkMessageDialog *_peel_this = reinterpret_cast<::GtkMessageDialog *> (this);
    gtk_message_dialog_set_markup (_peel_this, str);
  }

  static peel::Property<ButtonsType>
  prop_buttons ()
  {
    return peel::Property<ButtonsType> { "buttons" };
  }

  static peel::Property<Widget>
  prop_message_area ()
  {
    return peel::Property<Widget> { "message-area" };
  }

  static peel::Property<MessageType>
  prop_message_type ()
  {
    return peel::Property<MessageType> { "message-type" };
  }

  static peel::Property<const char *>
  prop_secondary_text ()
  {
    return peel::Property<const char *> { "secondary-text" };
  }

  static peel::Property<bool>
  prop_secondary_use_markup ()
  {
    return peel::Property<bool> { "secondary-use-markup" };
  }

  static peel::Property<const char *>
  prop_text ()
  {
    return peel::Property<const char *> { "text" };
  }

  static peel::Property<bool>
  prop_use_markup ()
  {
    return peel::Property<bool> { "use-markup" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<MessageDialog> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public Dialog::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class MessageDialog */

static_assert (sizeof (MessageDialog) == sizeof (::GtkMessageDialog),
               "MessageDialog size mismatch");
static_assert (alignof (MessageDialog) == alignof (::GtkMessageDialog),
               "MessageDialog align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
