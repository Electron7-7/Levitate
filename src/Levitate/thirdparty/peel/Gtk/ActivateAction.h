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
class ActivateAction;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ActivateAction> ()
{
  return gtk_activate_action_get_type ();
}


namespace Gtk
{
class ActivateAction : public ShortcutAction
/* non-derivable */
{
private:
  using ShortcutAction::parse_string;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ActivateAction () = delete;
  ActivateAction (const ActivateAction &) = delete;
  ActivateAction (ActivateAction &&) = delete;
  ActivateAction &
  operator = (const ActivateAction &) = delete;
  ActivateAction &
  operator = (ActivateAction &&) = delete;
  ~ActivateAction () = delete;
public:

  peel_returns_nonnull
  static ActivateAction *
  get () noexcept
  {
    ::GtkShortcutAction *_peel_return = gtk_activate_action_get ();
    peel_assume (_peel_return);
    return reinterpret_cast<ActivateAction *> (_peel_return);
  }

  class Class : public ShortcutAction::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ActivateAction */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
