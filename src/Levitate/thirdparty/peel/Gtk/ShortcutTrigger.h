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
} /* namespace GLib */

namespace Gdk
{
class Display;
class Event;
enum class KeyMatch : std::underlying_type<::GdkKeyMatch>::type;
} /* namespace Gdk */

namespace Gtk
{
class ShortcutTrigger;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ShortcutTrigger> ()
{
  return gtk_shortcut_trigger_get_type ();
}


namespace Gtk
{
class ShortcutTrigger : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ShortcutTrigger () = delete;
  ShortcutTrigger (const ShortcutTrigger &) = delete;
  ShortcutTrigger (ShortcutTrigger &&) = delete;
  ShortcutTrigger &
  operator = (const ShortcutTrigger &) = delete;
  ShortcutTrigger &
  operator = (ShortcutTrigger &&) = delete;
  ~ShortcutTrigger () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<ShortcutTrigger>
  parse_string (const char *string) noexcept
  {
    ::GtkShortcutTrigger *_peel_return = gtk_shortcut_trigger_parse_string (string);
    return peel::RefPtr<ShortcutTrigger>::adopt_ref (reinterpret_cast<ShortcutTrigger *> (_peel_return));
  }

  peel_nonnull_args (2)
  int
  compare (const ShortcutTrigger *trigger2) const noexcept
  {
    ::gconstpointer _peel_this = reinterpret_cast<::gconstpointer> (this);
    ::gconstpointer _peel_trigger2 = reinterpret_cast<::gconstpointer> (trigger2);
    return gtk_shortcut_trigger_compare (_peel_this, _peel_trigger2);
  }

  peel_nonnull_args (2)
  bool
  equal (const ShortcutTrigger *trigger2) const noexcept
  {
    ::gconstpointer _peel_this = reinterpret_cast<::gconstpointer> (this);
    ::gconstpointer _peel_trigger2 = reinterpret_cast<::gconstpointer> (trigger2);
    gboolean _peel_return = gtk_shortcut_trigger_equal (_peel_this, _peel_trigger2);
    return !!_peel_return;
  }

  unsigned
  hash () const noexcept
  {
    ::gconstpointer _peel_this = reinterpret_cast<::gconstpointer> (this);
    return gtk_shortcut_trigger_hash (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  print (GLib::String *string) noexcept
  {
    ::GtkShortcutTrigger *_peel_this = reinterpret_cast<::GtkShortcutTrigger *> (this);
    ::GString *_peel_string = reinterpret_cast<::GString *> (string);
    gtk_shortcut_trigger_print (_peel_this, _peel_string);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  print_label (Gdk::Display *display, GLib::String *string) noexcept
  {
    ::GtkShortcutTrigger *_peel_this = reinterpret_cast<::GtkShortcutTrigger *> (this);
    ::GdkDisplay *_peel_display = reinterpret_cast<::GdkDisplay *> (display);
    ::GString *_peel_string = reinterpret_cast<::GString *> (string);
    gboolean _peel_return = gtk_shortcut_trigger_print_label (_peel_this, _peel_display, _peel_string);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  peel::String
  to_label (Gdk::Display *display) noexcept
  {
    ::GtkShortcutTrigger *_peel_this = reinterpret_cast<::GtkShortcutTrigger *> (this);
    ::GdkDisplay *_peel_display = reinterpret_cast<::GdkDisplay *> (display);
    char *_peel_return = gtk_shortcut_trigger_to_label (_peel_this, _peel_display);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  to_string () noexcept
  {
    ::GtkShortcutTrigger *_peel_this = reinterpret_cast<::GtkShortcutTrigger *> (this);
    char *_peel_return = gtk_shortcut_trigger_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  Gdk::KeyMatch
  trigger (Gdk::Event *event, bool enable_mnemonics) noexcept
  {
    ::GtkShortcutTrigger *_peel_this = reinterpret_cast<::GtkShortcutTrigger *> (this);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    gboolean _peel_enable_mnemonics = static_cast<gboolean> (enable_mnemonics);
    ::GdkKeyMatch _peel_return = gtk_shortcut_trigger_trigger (_peel_this, _peel_event, _peel_enable_mnemonics);
    return static_cast<Gdk::KeyMatch> (_peel_return);
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ShortcutTrigger */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
