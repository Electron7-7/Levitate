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
struct String;
class /* record */ Variant;
} /* namespace GLib */

namespace Gtk
{
class ShortcutAction;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ShortcutAction> ()
{
  return gtk_shortcut_action_get_type ();
}


namespace Gtk
{
class ShortcutAction : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ShortcutAction () = delete;
  ShortcutAction (const ShortcutAction &) = delete;
  ShortcutAction (ShortcutAction &&) = delete;
  ShortcutAction &
  operator = (const ShortcutAction &) = delete;
  ShortcutAction &
  operator = (ShortcutAction &&) = delete;
  ~ShortcutAction () = delete;
public:
  enum class Flags : std::underlying_type<::GtkShortcutActionFlags>::type;

  peel_nonnull_args (1)
  static peel::RefPtr<ShortcutAction>
  parse_string (const char *string) noexcept
  {
    ::GtkShortcutAction *_peel_return = gtk_shortcut_action_parse_string (string);
    return peel::RefPtr<ShortcutAction>::adopt_ref (reinterpret_cast<ShortcutAction *> (_peel_return));
  }

  peel_arg_in (4) peel_nonnull_args (3)
  bool
  activate (ShortcutAction::Flags flags, Widget *widget, GLib::Variant *args) noexcept
  {
    ::GtkShortcutAction *_peel_this = reinterpret_cast<::GtkShortcutAction *> (this);
    ::GtkShortcutActionFlags _peel_flags = static_cast<::GtkShortcutActionFlags> (flags);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GVariant *_peel_args = reinterpret_cast<::GVariant *> (args);
    gboolean _peel_return = gtk_shortcut_action_activate (_peel_this, _peel_flags, _peel_widget, _peel_args);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  print (GLib::String *string) noexcept
  {
    ::GtkShortcutAction *_peel_this = reinterpret_cast<::GtkShortcutAction *> (this);
    ::GString *_peel_string = reinterpret_cast<::GString *> (string);
    gtk_shortcut_action_print (_peel_this, _peel_string);
  }

  peel::String
  to_string () noexcept
  {
    ::GtkShortcutAction *_peel_this = reinterpret_cast<::GtkShortcutAction *> (this);
    char *_peel_return = gtk_shortcut_action_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ShortcutAction */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
