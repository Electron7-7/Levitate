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
#include <peel/Gtk/LayoutChild.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class ConstraintLayoutChild;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ConstraintLayoutChild> ()
{
  return gtk_constraint_layout_child_get_type ();
}


namespace Gtk
{
class ConstraintLayoutChild : public LayoutChild
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ConstraintLayoutChild () = delete;
  ConstraintLayoutChild (const ConstraintLayoutChild &) = delete;
  ConstraintLayoutChild (ConstraintLayoutChild &&) = delete;
  ConstraintLayoutChild &
  operator = (const ConstraintLayoutChild &) = delete;
  ConstraintLayoutChild &
  operator = (ConstraintLayoutChild &&) = delete;
  ~ConstraintLayoutChild () = delete;
public:

  class Class : public LayoutChild::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkConstraintLayoutChildClass),
                 "ConstraintLayoutChild::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkConstraintLayoutChildClass),
                 "ConstraintLayoutChild::Class align mismatch");
}; /* class ConstraintLayoutChild */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
