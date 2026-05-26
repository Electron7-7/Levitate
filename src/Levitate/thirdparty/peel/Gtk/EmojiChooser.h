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
#include <peel/Gtk/Popover.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class EmojiChooser;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::EmojiChooser> ()
{
  return gtk_emoji_chooser_get_type ();
}


namespace Gtk
{
class EmojiChooser : public Popover
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, Native, ShortcutManager */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  EmojiChooser () = delete;
  EmojiChooser (const EmojiChooser &) = delete;
  EmojiChooser (EmojiChooser &&) = delete;
  EmojiChooser &
  operator = (const EmojiChooser &) = delete;
  EmojiChooser &
  operator = (EmojiChooser &&) = delete;
  ~EmojiChooser () = delete;
public:

  static peel::FloatPtr<EmojiChooser>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_emoji_chooser_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<EmojiChooser> (reinterpret_cast<EmojiChooser *> (_peel_return));
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_emoji_picked (Handler &&handler, bool after = false) noexcept
  {
    return Signal<EmojiChooser, void (const char *)>::_peel_connect_by_name (this, "emoji-picked", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_emoji_picked (HandlerObject *object, void (HandlerObject::*handler_method) (EmojiChooser *, const char *), bool after = false) noexcept
  {
    return Signal<EmojiChooser, void (const char *)>::_peel_connect_by_name (this, "emoji-picked", object, handler_method, after);
  }

  class Class : public Popover::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class EmojiChooser */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
