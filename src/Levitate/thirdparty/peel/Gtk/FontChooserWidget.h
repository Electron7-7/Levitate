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
class /* interface */ Action;
} /* namespace Gio */

namespace Gtk
{
class FontChooserWidget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FontChooserWidget> ()
{
  return gtk_font_chooser_widget_get_type ();
}


namespace Gtk
{
class FontChooserWidget : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, FontChooser */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FontChooserWidget () = delete;
  FontChooserWidget (const FontChooserWidget &) = delete;
  FontChooserWidget (FontChooserWidget &&) = delete;
  FontChooserWidget &
  operator = (const FontChooserWidget &) = delete;
  FontChooserWidget &
  operator = (FontChooserWidget &&) = delete;
  ~FontChooserWidget () = delete;
public:

  static peel::FloatPtr<FontChooserWidget>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_font_chooser_widget_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<FontChooserWidget> (reinterpret_cast<FontChooserWidget *> (_peel_return));
  }

  static peel::Property<Gio::Action>
  prop_tweak_action ()
  {
    return peel::Property<Gio::Action> { "tweak-action" };
  }
}; /* class FontChooserWidget */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
