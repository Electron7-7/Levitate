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
class LayoutChild;
class LayoutManager;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::LayoutChild> ()
{
  return gtk_layout_child_get_type ();
}


namespace Gtk
{
class LayoutChild : public GObject::Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  LayoutChild () = delete;
  LayoutChild (const LayoutChild &) = delete;
  LayoutChild (LayoutChild &&) = delete;
  LayoutChild &
  operator = (const LayoutChild &) = delete;
  LayoutChild &
  operator = (LayoutChild &&) = delete;
protected:
  ~LayoutChild () = default;
public:

  peel_returns_nonnull
  Widget *
  get_child_widget () noexcept
  {
    ::GtkLayoutChild *_peel_this = reinterpret_cast<::GtkLayoutChild *> (this);
    ::GtkWidget *_peel_return = gtk_layout_child_get_child_widget (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  peel_returns_nonnull
  LayoutManager *
  get_layout_manager () noexcept
  {
    ::GtkLayoutChild *_peel_this = reinterpret_cast<::GtkLayoutChild *> (this);
    ::GtkLayoutManager *_peel_return = gtk_layout_child_get_layout_manager (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<LayoutManager *> (_peel_return);
  }

  static peel::Property<Widget>
  prop_child_widget ()
  {
    return peel::Property<Widget> { "child-widget" };
  }

  static peel::Property<LayoutManager>
  prop_layout_manager ()
  {
    return peel::Property<LayoutManager> { "layout-manager" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<LayoutChild> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkLayoutChildClass),
                 "LayoutChild::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkLayoutChildClass),
                 "LayoutChild::Class align mismatch");
}; /* class LayoutChild */

static_assert (sizeof (LayoutChild) == sizeof (::GtkLayoutChild),
               "LayoutChild size mismatch");
static_assert (alignof (LayoutChild) == alignof (::GtkLayoutChild),
               "LayoutChild align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
