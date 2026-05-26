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
class ListBase;
enum class Orientation : std::underlying_type<::GtkOrientation>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ListBase> ()
{
  return gtk_list_base_get_type ();
}


namespace Gtk
{
class ListBase : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target, Orientable, Scrollable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ListBase () = delete;
  ListBase (const ListBase &) = delete;
  ListBase (ListBase &&) = delete;
  ListBase &
  operator = (const ListBase &) = delete;
  ListBase &
  operator = (ListBase &&) = delete;
  ~ListBase () = delete;
public:

  static peel::Property<Orientation>
  prop_orientation ()
  {
    return peel::Property<Orientation> { "orientation" };
  }

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ListBase */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
