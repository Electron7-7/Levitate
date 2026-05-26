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
namespace Gsk
{
class /* record */ Transform;
} /* namespace Gsk */

namespace Gtk
{
class FixedLayoutChild;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FixedLayoutChild> ()
{
  return gtk_fixed_layout_child_get_type ();
}


namespace Gtk
{
class FixedLayoutChild : public LayoutChild
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FixedLayoutChild () = delete;
  FixedLayoutChild (const FixedLayoutChild &) = delete;
  FixedLayoutChild (FixedLayoutChild &&) = delete;
  FixedLayoutChild &
  operator = (const FixedLayoutChild &) = delete;
  FixedLayoutChild &
  operator = (FixedLayoutChild &&) = delete;
  ~FixedLayoutChild () = delete;
public:

  Gsk::Transform *
  get_transform () noexcept
  {
    ::GtkFixedLayoutChild *_peel_this = reinterpret_cast<::GtkFixedLayoutChild *> (this);
    ::GskTransform *_peel_return = gtk_fixed_layout_child_get_transform (_peel_this);
    return reinterpret_cast<Gsk::Transform *> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_transform (Gsk::Transform *transform) noexcept
  {
    ::GtkFixedLayoutChild *_peel_this = reinterpret_cast<::GtkFixedLayoutChild *> (this);
    ::GskTransform *_peel_transform = reinterpret_cast<::GskTransform *> (transform);
    gtk_fixed_layout_child_set_transform (_peel_this, _peel_transform);
  }

  static peel::Property<Gsk::Transform>
  prop_transform ()
  {
    return peel::Property<Gsk::Transform> { "transform" };
  }

  class Class : public LayoutChild::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkFixedLayoutChildClass),
                 "FixedLayoutChild::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkFixedLayoutChildClass),
                 "FixedLayoutChild::Class align mismatch");
}; /* class FixedLayoutChild */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
