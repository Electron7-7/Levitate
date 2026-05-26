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
#include <peel/Gtk/Box.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class ShortcutsGroup;
class ShortcutsShortcut;
class SizeGroup;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ShortcutsGroup> ()
{
  return gtk_shortcuts_group_get_type ();
}


namespace Gtk
{
class ShortcutsGroup : public Box
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, Orientable */
{
private:
  using Box::create;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ShortcutsGroup () = delete;
  ShortcutsGroup (const ShortcutsGroup &) = delete;
  ShortcutsGroup (ShortcutsGroup &&) = delete;
  ShortcutsGroup &
  operator = (const ShortcutsGroup &) = delete;
  ShortcutsGroup &
  operator = (ShortcutsGroup &&) = delete;
  ~ShortcutsGroup () = delete;
public:

  peel_nonnull_args (2)
  void
  add_shortcut (ShortcutsShortcut *shortcut) noexcept
  {
    ::GtkShortcutsGroup *_peel_this = reinterpret_cast<::GtkShortcutsGroup *> (this);
    ::GtkShortcutsShortcut *_peel_shortcut = reinterpret_cast<::GtkShortcutsShortcut *> (shortcut);
    gtk_shortcuts_group_add_shortcut (_peel_this, _peel_shortcut);
  }

  static peel::Property<SizeGroup>
  prop_accel_size_group ()
  {
    return peel::Property<SizeGroup> { "accel-size-group" };
  }

  static peel::Property<unsigned>
  prop_height ()
  {
    return peel::Property<unsigned> { "height" };
  }

  static peel::Property<const char *>
  prop_title ()
  {
    return peel::Property<const char *> { "title" };
  }

  static peel::Property<SizeGroup>
  prop_title_size_group ()
  {
    return peel::Property<SizeGroup> { "title-size-group" };
  }

  static peel::Property<const char *>
  prop_view ()
  {
    return peel::Property<const char *> { "view" };
  }

  class Class : public Box::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ShortcutsGroup */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
