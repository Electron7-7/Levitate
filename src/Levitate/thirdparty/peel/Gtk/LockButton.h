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
namespace Gio
{
class Permission;
} /* namespace Gio */

namespace Gtk
{
class LockButton;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::LockButton> ()
{
  return gtk_lock_button_get_type ();
}


namespace Gtk
{
class LockButton : public Button
/* non-derivable */
/* implements Accessible, Actionable, Buildable, Constraint::Target */
{
private:
  using Button::create_from_icon_name;
  using Button::create_with_label;
  using Button::create_with_mnemonic;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  LockButton () = delete;
  LockButton (const LockButton &) = delete;
  LockButton (LockButton &&) = delete;
  LockButton &
  operator = (const LockButton &) = delete;
  LockButton &
  operator = (LockButton &&) = delete;
  ~LockButton () = delete;
public:

  static peel::FloatPtr<LockButton>
  create (Gio::Permission *permission) noexcept
  {
    ::GPermission *_peel_permission = reinterpret_cast<::GPermission *> (permission);
    ::GtkWidget *_peel_return = gtk_lock_button_new (_peel_permission);
    peel_assume (_peel_return);
    return peel::FloatPtr<LockButton> (reinterpret_cast<LockButton *> (_peel_return));
  }

  Gio::Permission *
  get_permission () noexcept
  {
    ::GtkLockButton *_peel_this = reinterpret_cast<::GtkLockButton *> (this);
    ::GPermission *_peel_return = gtk_lock_button_get_permission (_peel_this);
    return reinterpret_cast<Gio::Permission *> (_peel_return);
  }

  void
  set_permission (Gio::Permission *permission) noexcept
  {
    ::GtkLockButton *_peel_this = reinterpret_cast<::GtkLockButton *> (this);
    ::GPermission *_peel_permission = reinterpret_cast<::GPermission *> (permission);
    gtk_lock_button_set_permission (_peel_this, _peel_permission);
  }

  static peel::Property<Gio::Permission>
  prop_permission ()
  {
    return peel::Property<Gio::Permission> { "permission" };
  }

  static peel::Property<const char *>
  prop_text_lock ()
  {
    return peel::Property<const char *> { "text-lock" };
  }

  static peel::Property<const char *>
  prop_text_unlock ()
  {
    return peel::Property<const char *> { "text-unlock" };
  }

  static peel::Property<const char *>
  prop_tooltip_lock ()
  {
    return peel::Property<const char *> { "tooltip-lock" };
  }

  static peel::Property<const char *>
  prop_tooltip_not_authorized ()
  {
    return peel::Property<const char *> { "tooltip-not-authorized" };
  }

  static peel::Property<const char *>
  prop_tooltip_unlock ()
  {
    return peel::Property<const char *> { "tooltip-unlock" };
  }
}; /* class LockButton */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
