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
namespace Gtk
{
class SignalAction;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::SignalAction> ()
{
  return gtk_signal_action_get_type ();
}


namespace Gtk
{
class SignalAction : public ShortcutAction
/* non-derivable */
{
private:
  using ShortcutAction::parse_string;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SignalAction () = delete;
  SignalAction (const SignalAction &) = delete;
  SignalAction (SignalAction &&) = delete;
  SignalAction &
  operator = (const SignalAction &) = delete;
  SignalAction &
  operator = (SignalAction &&) = delete;
  ~SignalAction () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<SignalAction>
  create (const char *signal_name) noexcept
  {
    ::GtkShortcutAction *_peel_return = gtk_signal_action_new (signal_name);
    peel_assume (_peel_return);
    return peel::RefPtr<SignalAction>::adopt_ref (reinterpret_cast<SignalAction *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_signal_name () noexcept
  {
    ::GtkSignalAction *_peel_this = reinterpret_cast<::GtkSignalAction *> (this);
    return gtk_signal_action_get_signal_name (_peel_this);
  }

  static peel::Property<const char *>
  prop_signal_name ()
  {
    return peel::Property<const char *> { "signal-name" };
  }

  class Class : public ShortcutAction::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class SignalAction */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
