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
#include <peel/Gtk/ShortcutTrigger.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
enum class ModifierType : std::underlying_type<::GdkModifierType>::type;
} /* namespace Gdk */

namespace Gtk
{
class KeyvalTrigger;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::KeyvalTrigger> ()
{
  return gtk_keyval_trigger_get_type ();
}


namespace Gtk
{
class KeyvalTrigger : public ShortcutTrigger
/* non-derivable */
{
private:
  using ShortcutTrigger::parse_string;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  KeyvalTrigger () = delete;
  KeyvalTrigger (const KeyvalTrigger &) = delete;
  KeyvalTrigger (KeyvalTrigger &&) = delete;
  KeyvalTrigger &
  operator = (const KeyvalTrigger &) = delete;
  KeyvalTrigger &
  operator = (KeyvalTrigger &&) = delete;
  ~KeyvalTrigger () = delete;
public:

  static peel::RefPtr<KeyvalTrigger>
  create (unsigned keyval, Gdk::ModifierType modifiers) noexcept
  {
    ::GdkModifierType _peel_modifiers = static_cast<::GdkModifierType> (modifiers);
    ::GtkShortcutTrigger *_peel_return = gtk_keyval_trigger_new (keyval, _peel_modifiers);
    peel_assume (_peel_return);
    return peel::RefPtr<KeyvalTrigger>::adopt_ref (reinterpret_cast<KeyvalTrigger *> (_peel_return));
  }

  unsigned
  get_keyval () noexcept
  {
    ::GtkKeyvalTrigger *_peel_this = reinterpret_cast<::GtkKeyvalTrigger *> (this);
    return gtk_keyval_trigger_get_keyval (_peel_this);
  }

  Gdk::ModifierType
  get_modifiers () noexcept
  {
    ::GtkKeyvalTrigger *_peel_this = reinterpret_cast<::GtkKeyvalTrigger *> (this);
    ::GdkModifierType _peel_return = gtk_keyval_trigger_get_modifiers (_peel_this);
    return static_cast<Gdk::ModifierType> (_peel_return);
  }

  static peel::Property<unsigned>
  prop_keyval ()
  {
    return peel::Property<unsigned> { "keyval" };
  }

  static peel::Property<Gdk::ModifierType>
  prop_modifiers ()
  {
    return peel::Property<Gdk::ModifierType> { "modifiers" };
  }

  class Class : public ShortcutTrigger::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class KeyvalTrigger */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
