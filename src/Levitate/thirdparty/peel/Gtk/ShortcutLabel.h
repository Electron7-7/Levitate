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
namespace Gtk
{
class ShortcutLabel;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ShortcutLabel> ()
{
  return gtk_shortcut_label_get_type ();
}


namespace Gtk
{
class ShortcutLabel : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ShortcutLabel () = delete;
  ShortcutLabel (const ShortcutLabel &) = delete;
  ShortcutLabel (ShortcutLabel &&) = delete;
  ShortcutLabel &
  operator = (const ShortcutLabel &) = delete;
  ShortcutLabel &
  operator = (ShortcutLabel &&) = delete;
  ~ShortcutLabel () = delete;
public:

  peel_nonnull_args (1)
  static peel::FloatPtr<ShortcutLabel>
  create (const char *accelerator) noexcept
  {
    ::GtkWidget *_peel_return = gtk_shortcut_label_new (accelerator);
    peel_assume (_peel_return);
    return peel::FloatPtr<ShortcutLabel> (reinterpret_cast<ShortcutLabel *> (_peel_return));
  }

  const char *
  get_accelerator () noexcept
  {
    ::GtkShortcutLabel *_peel_this = reinterpret_cast<::GtkShortcutLabel *> (this);
    return gtk_shortcut_label_get_accelerator (_peel_this);
  }

  const char *
  get_disabled_text () noexcept
  {
    ::GtkShortcutLabel *_peel_this = reinterpret_cast<::GtkShortcutLabel *> (this);
    return gtk_shortcut_label_get_disabled_text (_peel_this);
  }

  peel_nonnull_args (2)
  void
  set_accelerator (const char *accelerator) noexcept
  {
    ::GtkShortcutLabel *_peel_this = reinterpret_cast<::GtkShortcutLabel *> (this);
    gtk_shortcut_label_set_accelerator (_peel_this, accelerator);
  }

  peel_nonnull_args (2)
  void
  set_disabled_text (const char *disabled_text) noexcept
  {
    ::GtkShortcutLabel *_peel_this = reinterpret_cast<::GtkShortcutLabel *> (this);
    gtk_shortcut_label_set_disabled_text (_peel_this, disabled_text);
  }

  static peel::Property<const char *>
  prop_accelerator ()
  {
    return peel::Property<const char *> { "accelerator" };
  }

  static peel::Property<const char *>
  prop_disabled_text ()
  {
    return peel::Property<const char *> { "disabled-text" };
  }

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ShortcutLabel */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
