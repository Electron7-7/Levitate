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
namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gtk
{
class ListHeader;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ListHeader> ()
{
  return gtk_list_header_get_type ();
}


namespace Gtk
{
class ListHeader : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ListHeader () = delete;
  ListHeader (const ListHeader &) = delete;
  ListHeader (ListHeader &&) = delete;
  ListHeader &
  operator = (const ListHeader &) = delete;
  ListHeader &
  operator = (ListHeader &&) = delete;
  ~ListHeader () = delete;
public:

  Widget *
  get_child () noexcept
  {
    ::GtkListHeader *_peel_this = reinterpret_cast<::GtkListHeader *> (this);
    ::GtkWidget *_peel_return = gtk_list_header_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  unsigned
  get_end () noexcept
  {
    ::GtkListHeader *_peel_this = reinterpret_cast<::GtkListHeader *> (this);
    return gtk_list_header_get_end (_peel_this);
  }

  GObject::Object *
  get_item () noexcept
  {
    ::GtkListHeader *_peel_this = reinterpret_cast<::GtkListHeader *> (this);
    ::gpointer _peel_return = gtk_list_header_get_item (_peel_this);
    return reinterpret_cast<GObject::Object *> (_peel_return);
  }

  unsigned
  get_n_items () noexcept
  {
    ::GtkListHeader *_peel_this = reinterpret_cast<::GtkListHeader *> (this);
    return gtk_list_header_get_n_items (_peel_this);
  }

  unsigned
  get_start () noexcept
  {
    ::GtkListHeader *_peel_this = reinterpret_cast<::GtkListHeader *> (this);
    return gtk_list_header_get_start (_peel_this);
  }

  void
  set_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkListHeader *_peel_this = reinterpret_cast<::GtkListHeader *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_list_header_set_child (_peel_this, _peel_child);
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<unsigned>
  prop_end ()
  {
    return peel::Property<unsigned> { "end" };
  }

  static peel::Property<GObject::Object>
  prop_item ()
  {
    return peel::Property<GObject::Object> { "item" };
  }

  static peel::Property<unsigned>
  prop_n_items ()
  {
    return peel::Property<unsigned> { "n-items" };
  }

  static peel::Property<unsigned>
  prop_start ()
  {
    return peel::Property<unsigned> { "start" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ListHeader */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Widget.h>
