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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Variant;
} /* namespace GLib */

namespace Gtk
{
class Shortcut;
class ShortcutAction;
class ShortcutTrigger;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Shortcut> ()
{
  return gtk_shortcut_get_type ();
}


namespace Gtk
{
class Shortcut : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Shortcut () = delete;
  Shortcut (const Shortcut &) = delete;
  Shortcut (Shortcut &&) = delete;
  Shortcut &
  operator = (const Shortcut &) = delete;
  Shortcut &
  operator = (Shortcut &&) = delete;
  ~Shortcut () = delete;
public:
  enum class Scope : std::underlying_type<::GtkShortcutScope>::type;

  static peel::RefPtr<Shortcut>
  create (peel::RefPtr<ShortcutTrigger> trigger, peel::RefPtr<ShortcutAction> action) noexcept
  {
    ::GtkShortcutTrigger *_peel_trigger = reinterpret_cast<::GtkShortcutTrigger *> (std::move (trigger).release_ref ());
    ::GtkShortcutAction *_peel_action = reinterpret_cast<::GtkShortcutAction *> (std::move (action).release_ref ());
    ::GtkShortcut *_peel_return = gtk_shortcut_new (_peel_trigger, _peel_action);
    peel_assume (_peel_return);
    return peel::RefPtr<Shortcut>::adopt_ref (reinterpret_cast<Shortcut *> (_peel_return));
  }

  template<typename... Args>
  static peel::RefPtr<Shortcut>
  create_with_arguments (peel::RefPtr<ShortcutTrigger> trigger, peel::RefPtr<ShortcutAction> action, const char *format_string, Args &&...args) noexcept
  {
    ::GtkShortcutTrigger *_peel_trigger = reinterpret_cast<::GtkShortcutTrigger *> (std::move (trigger).release_ref ());
    ::GtkShortcutAction *_peel_action = reinterpret_cast<::GtkShortcutAction *> (std::move (action).release_ref ());
    ::GtkShortcut *_peel_return = gtk_shortcut_new_with_arguments (_peel_trigger, _peel_action, format_string, GLib::Variant::Traits<typename std::decay<Args>::type>::cast_for_create (std::forward<Args> (args))...);
    peel_assume (_peel_return);
    return peel::RefPtr<Shortcut>::adopt_ref (reinterpret_cast<Shortcut *> (_peel_return));
  }

  ShortcutAction *
  get_action () noexcept
  {
    ::GtkShortcut *_peel_this = reinterpret_cast<::GtkShortcut *> (this);
    ::GtkShortcutAction *_peel_return = gtk_shortcut_get_action (_peel_this);
    return reinterpret_cast<ShortcutAction *> (_peel_return);
  }

  GLib::Variant *
  get_arguments () noexcept
  {
    ::GtkShortcut *_peel_this = reinterpret_cast<::GtkShortcut *> (this);
    ::GVariant *_peel_return = gtk_shortcut_get_arguments (_peel_this);
    return reinterpret_cast<GLib::Variant *> (_peel_return);
  }

  ShortcutTrigger *
  get_trigger () noexcept
  {
    ::GtkShortcut *_peel_this = reinterpret_cast<::GtkShortcut *> (this);
    ::GtkShortcutTrigger *_peel_return = gtk_shortcut_get_trigger (_peel_this);
    return reinterpret_cast<ShortcutTrigger *> (_peel_return);
  }

  void
  set_action (peel::RefPtr<ShortcutAction> action) noexcept
  {
    ::GtkShortcut *_peel_this = reinterpret_cast<::GtkShortcut *> (this);
    ::GtkShortcutAction *_peel_action = reinterpret_cast<::GtkShortcutAction *> (std::move (action).release_ref ());
    gtk_shortcut_set_action (_peel_this, _peel_action);
  }

  void
  set_arguments (peel::FloatPtr<GLib::Variant> args) noexcept
  {
    ::GtkShortcut *_peel_this = reinterpret_cast<::GtkShortcut *> (this);
    ::GVariant *_peel_args = reinterpret_cast<::GVariant *> (std::move (args).release_floating_ptr ());
    gtk_shortcut_set_arguments (_peel_this, _peel_args);
  }

  void
  set_trigger (peel::RefPtr<ShortcutTrigger> trigger) noexcept
  {
    ::GtkShortcut *_peel_this = reinterpret_cast<::GtkShortcut *> (this);
    ::GtkShortcutTrigger *_peel_trigger = reinterpret_cast<::GtkShortcutTrigger *> (std::move (trigger).release_ref ());
    gtk_shortcut_set_trigger (_peel_this, _peel_trigger);
  }

  static peel::Property<ShortcutAction>
  prop_action ()
  {
    return peel::Property<ShortcutAction> { "action" };
  }

  static peel::Property<GLib::Variant>
  prop_arguments ()
  {
    return peel::Property<GLib::Variant> { "arguments" };
  }

  static peel::Property<ShortcutTrigger>
  prop_trigger ()
  {
    return peel::Property<ShortcutTrigger> { "trigger" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkShortcutClass),
                 "Shortcut::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkShortcutClass),
                 "Shortcut::Class align mismatch");
}; /* class Shortcut */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Variant.h>
#include <peel/Gtk/ShortcutAction.h>
#include <peel/Gtk/ShortcutTrigger.h>
