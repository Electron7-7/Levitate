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
#include <peel/Gtk/ShortcutAction.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Variant;
} /* namespace GLib */

namespace Gtk
{
class CallbackAction;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CallbackAction> ()
{
  return gtk_callback_action_get_type ();
}


namespace Gtk
{
class CallbackAction : public ShortcutAction
/* non-derivable */
{
private:
  using ShortcutAction::parse_string;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CallbackAction () = delete;
  CallbackAction (const CallbackAction &) = delete;
  CallbackAction (CallbackAction &&) = delete;
  CallbackAction &
  operator = (const CallbackAction &) = delete;
  CallbackAction &
  operator = (CallbackAction &&) = delete;
  ~CallbackAction () = delete;
public:

  template<typename ShortcutFunc>
  static peel::RefPtr<CallbackAction>
  create (ShortcutFunc &&callback) noexcept
  {
    gpointer _peel_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkShortcutFunc _peel_callback = peel::internals::CallbackHelper<gboolean, ::GtkWidget *, ::GVariant *>::wrap_notified_callback (
      static_cast<ShortcutFunc &&> (callback),
      [] (::GtkWidget *widget, ::GVariant *args, gpointer user_data) -> gboolean
      {
        ShortcutFunc &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<ShortcutFunc>::type *> (user_data);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        GLib::Variant *_peel_args = reinterpret_cast<GLib::Variant *> (args);
        bool _peel_return = _peel_captured_callback (_peel_widget, _peel_args);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, &_peel_destroy, peel::internals::is_const_invocable<ShortcutFunc, void, Widget *, GLib::Variant *>::value);
    ::GtkShortcutAction *_peel_return = gtk_callback_action_new (_peel_callback, _peel_data, _peel_destroy);
    peel_assume (_peel_return);
    return peel::RefPtr<CallbackAction>::adopt_ref (reinterpret_cast<CallbackAction *> (_peel_return));
  }

  class Class : public ShortcutAction::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class CallbackAction */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
