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
#include <peel/Gtk/EventController.h>
#include <peel/Gtk/Shortcut.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
enum class ModifierType : std::underlying_type<::GdkModifierType>::type;
} /* namespace Gdk */

namespace Gio
{
class /* interface */ ListModel;
} /* namespace Gio */

namespace Gtk
{
class Shortcut;
class ShortcutController;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ShortcutController> ()
{
  return gtk_shortcut_controller_get_type ();
}


namespace Gtk
{
class ShortcutController : public EventController
/* non-derivable */
/* implements Gio::ListModel, Buildable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ShortcutController () = delete;
  ShortcutController (const ShortcutController &) = delete;
  ShortcutController (ShortcutController &&) = delete;
  ShortcutController &
  operator = (const ShortcutController &) = delete;
  ShortcutController &
  operator = (ShortcutController &&) = delete;
  ~ShortcutController () = delete;
public:

  static peel::RefPtr<ShortcutController>
  create () noexcept
  {
    ::GtkEventController *_peel_return = gtk_shortcut_controller_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<ShortcutController>::adopt_ref (reinterpret_cast<ShortcutController *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<ShortcutController>
  create_for_model (Gio::ListModel *model) noexcept
  {
    ::GListModel *_peel_model = reinterpret_cast<::GListModel *> (model);
    ::GtkEventController *_peel_return = gtk_shortcut_controller_new_for_model (_peel_model);
    peel_assume (_peel_return);
    return peel::RefPtr<ShortcutController>::adopt_ref (reinterpret_cast<ShortcutController *> (_peel_return));
  }

  void
  add_shortcut (peel::RefPtr<Shortcut> shortcut) noexcept
  {
    ::GtkShortcutController *_peel_this = reinterpret_cast<::GtkShortcutController *> (this);
    ::GtkShortcut *_peel_shortcut = reinterpret_cast<::GtkShortcut *> (std::move (shortcut).release_ref ());
    gtk_shortcut_controller_add_shortcut (_peel_this, _peel_shortcut);
  }

  Gdk::ModifierType
  get_mnemonics_modifiers () noexcept
  {
    ::GtkShortcutController *_peel_this = reinterpret_cast<::GtkShortcutController *> (this);
    ::GdkModifierType _peel_return = gtk_shortcut_controller_get_mnemonics_modifiers (_peel_this);
    return static_cast<Gdk::ModifierType> (_peel_return);
  }

  Shortcut::Scope
  get_scope () noexcept
  {
    ::GtkShortcutController *_peel_this = reinterpret_cast<::GtkShortcutController *> (this);
    ::GtkShortcutScope _peel_return = gtk_shortcut_controller_get_scope (_peel_this);
    return static_cast<Shortcut::Scope> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  remove_shortcut (Shortcut *shortcut) noexcept
  {
    ::GtkShortcutController *_peel_this = reinterpret_cast<::GtkShortcutController *> (this);
    ::GtkShortcut *_peel_shortcut = reinterpret_cast<::GtkShortcut *> (shortcut);
    gtk_shortcut_controller_remove_shortcut (_peel_this, _peel_shortcut);
  }

  void
  set_mnemonics_modifiers (Gdk::ModifierType modifiers) noexcept
  {
    ::GtkShortcutController *_peel_this = reinterpret_cast<::GtkShortcutController *> (this);
    ::GdkModifierType _peel_modifiers = static_cast<::GdkModifierType> (modifiers);
    gtk_shortcut_controller_set_mnemonics_modifiers (_peel_this, _peel_modifiers);
  }

  void
  set_scope (Shortcut::Scope scope) noexcept
  {
    ::GtkShortcutController *_peel_this = reinterpret_cast<::GtkShortcutController *> (this);
    ::GtkShortcutScope _peel_scope = static_cast<::GtkShortcutScope> (scope);
    gtk_shortcut_controller_set_scope (_peel_this, _peel_scope);
  }

  static peel::Property<GObject::Type>
  prop_item_type ()
  {
    return peel::Property<GObject::Type> { "item-type" };
  }

  static peel::Property<Gdk::ModifierType>
  prop_mnemonic_modifiers ()
  {
    return peel::Property<Gdk::ModifierType> { "mnemonic-modifiers" };
  }

  static peel::Property<Gio::ListModel>
  prop_model ()
  {
    return peel::Property<Gio::ListModel> { "model" };
  }

  static peel::Property<unsigned>
  prop_n_items ()
  {
    return peel::Property<unsigned> { "n-items" };
  }

  static peel::Property<Shortcut::Scope>
  prop_scope ()
  {
    return peel::Property<Shortcut::Scope> { "scope" };
  }

  class Class : public EventController::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ShortcutController */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
