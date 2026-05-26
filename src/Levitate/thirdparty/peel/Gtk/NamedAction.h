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
class NamedAction;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::NamedAction> ()
{
  return gtk_named_action_get_type ();
}


namespace Gtk
{
class NamedAction : public ShortcutAction
/* non-derivable */
{
private:
  using ShortcutAction::parse_string;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  NamedAction () = delete;
  NamedAction (const NamedAction &) = delete;
  NamedAction (NamedAction &&) = delete;
  NamedAction &
  operator = (const NamedAction &) = delete;
  NamedAction &
  operator = (NamedAction &&) = delete;
  ~NamedAction () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<NamedAction>
  create (const char *name) noexcept
  {
    ::GtkShortcutAction *_peel_return = gtk_named_action_new (name);
    peel_assume (_peel_return);
    return peel::RefPtr<NamedAction>::adopt_ref (reinterpret_cast<NamedAction *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_action_name () noexcept
  {
    ::GtkNamedAction *_peel_this = reinterpret_cast<::GtkNamedAction *> (this);
    return gtk_named_action_get_action_name (_peel_this);
  }

  static peel::Property<const char *>
  prop_action_name ()
  {
    return peel::Property<const char *> { "action-name" };
  }

  class Class : public ShortcutAction::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class NamedAction */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
