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
class ColorChooserWidget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ColorChooserWidget> ()
{
  return gtk_color_chooser_widget_get_type ();
}


namespace Gtk
{
class ColorChooserWidget : public Widget
/* non-derivable */
/* implements Accessible, Buildable, ColorChooser, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ColorChooserWidget () = delete;
  ColorChooserWidget (const ColorChooserWidget &) = delete;
  ColorChooserWidget (ColorChooserWidget &&) = delete;
  ColorChooserWidget &
  operator = (const ColorChooserWidget &) = delete;
  ColorChooserWidget &
  operator = (ColorChooserWidget &&) = delete;
  ~ColorChooserWidget () = delete;
public:

  static peel::FloatPtr<ColorChooserWidget>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_color_chooser_widget_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<ColorChooserWidget> (reinterpret_cast<ColorChooserWidget *> (_peel_return));
  }

  static peel::Property<bool>
  prop_show_editor ()
  {
    return peel::Property<bool> { "show-editor" };
  }
}; /* class ColorChooserWidget */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
