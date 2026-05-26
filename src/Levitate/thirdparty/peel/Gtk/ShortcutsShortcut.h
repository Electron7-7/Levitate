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
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* interface */ Icon;
} /* namespace Gio */

namespace Gtk
{
enum class ShortcutType : std::underlying_type<::GtkShortcutType>::type;
class ShortcutsShortcut;
class SizeGroup;
enum class TextDirection : std::underlying_type<::GtkTextDirection>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ShortcutsShortcut> ()
{
  return gtk_shortcuts_shortcut_get_type ();
}


namespace Gtk
{
class ShortcutsShortcut : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ShortcutsShortcut () = delete;
  ShortcutsShortcut (const ShortcutsShortcut &) = delete;
  ShortcutsShortcut (ShortcutsShortcut &&) = delete;
  ShortcutsShortcut &
  operator = (const ShortcutsShortcut &) = delete;
  ShortcutsShortcut &
  operator = (ShortcutsShortcut &&) = delete;
  ~ShortcutsShortcut () = delete;
public:

  static peel::Property<SizeGroup>
  prop_accel_size_group ()
  {
    return peel::Property<SizeGroup> { "accel-size-group" };
  }

  static peel::Property<const char *>
  prop_accelerator ()
  {
    return peel::Property<const char *> { "accelerator" };
  }

  static peel::Property<const char *>
  prop_action_name ()
  {
    return peel::Property<const char *> { "action-name" };
  }

  static peel::Property<TextDirection>
  prop_direction ()
  {
    return peel::Property<TextDirection> { "direction" };
  }

  static peel::Property<Gio::Icon>
  prop_icon ()
  {
    return peel::Property<Gio::Icon> { "icon" };
  }

  static peel::Property<bool>
  prop_icon_set ()
  {
    return peel::Property<bool> { "icon-set" };
  }

  static peel::Property<ShortcutType>
  prop_shortcut_type ()
  {
    return peel::Property<ShortcutType> { "shortcut-type" };
  }

  static peel::Property<const char *>
  prop_subtitle ()
  {
    return peel::Property<const char *> { "subtitle" };
  }

  static peel::Property<bool>
  prop_subtitle_set ()
  {
    return peel::Property<bool> { "subtitle-set" };
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

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ShortcutsShortcut */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
