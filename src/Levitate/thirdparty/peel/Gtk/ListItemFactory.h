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
namespace Gtk
{
class ListItemFactory;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ListItemFactory> ()
{
  return gtk_list_item_factory_get_type ();
}


namespace Gtk
{
class ListItemFactory : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ListItemFactory () = delete;
  ListItemFactory (const ListItemFactory &) = delete;
  ListItemFactory (ListItemFactory &&) = delete;
  ListItemFactory &
  operator = (const ListItemFactory &) = delete;
  ListItemFactory &
  operator = (ListItemFactory &&) = delete;
  ~ListItemFactory () = delete;
public:

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ListItemFactory */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
