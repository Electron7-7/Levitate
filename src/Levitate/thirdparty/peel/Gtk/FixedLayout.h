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
#include <peel/Gtk/LayoutManager.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class FixedLayout;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FixedLayout> ()
{
  return gtk_fixed_layout_get_type ();
}


namespace Gtk
{
class FixedLayout : public LayoutManager
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FixedLayout () = delete;
  FixedLayout (const FixedLayout &) = delete;
  FixedLayout (FixedLayout &&) = delete;
  FixedLayout &
  operator = (const FixedLayout &) = delete;
  FixedLayout &
  operator = (FixedLayout &&) = delete;
  ~FixedLayout () = delete;
public:

  static peel::RefPtr<FixedLayout>
  create () noexcept
  {
    ::GtkLayoutManager *_peel_return = gtk_fixed_layout_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<FixedLayout>::adopt_ref (reinterpret_cast<FixedLayout *> (_peel_return));
  }

  class Class : public LayoutManager::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkFixedLayoutClass),
                 "FixedLayout::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkFixedLayoutClass),
                 "FixedLayout::Class align mismatch");
}; /* class FixedLayout */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
