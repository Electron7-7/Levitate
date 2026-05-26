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
enum class Orientation : std::underlying_type<::GtkOrientation>::type;
class Separator;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Separator> ()
{
  return gtk_separator_get_type ();
}


namespace Gtk
{
class Separator : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, Orientable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Separator () = delete;
  Separator (const Separator &) = delete;
  Separator (Separator &&) = delete;
  Separator &
  operator = (const Separator &) = delete;
  Separator &
  operator = (Separator &&) = delete;
  ~Separator () = delete;
public:

  static peel::FloatPtr<Separator>
  create (Orientation orientation) noexcept
  {
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    ::GtkWidget *_peel_return = gtk_separator_new (_peel_orientation);
    peel_assume (_peel_return);
    return peel::FloatPtr<Separator> (reinterpret_cast<Separator *> (_peel_return));
  }
}; /* class Separator */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
