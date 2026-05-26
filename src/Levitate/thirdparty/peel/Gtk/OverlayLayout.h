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
class OverlayLayout;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::OverlayLayout> ()
{
  return gtk_overlay_layout_get_type ();
}


namespace Gtk
{
class OverlayLayout : public LayoutManager
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  OverlayLayout () = delete;
  OverlayLayout (const OverlayLayout &) = delete;
  OverlayLayout (OverlayLayout &&) = delete;
  OverlayLayout &
  operator = (const OverlayLayout &) = delete;
  OverlayLayout &
  operator = (OverlayLayout &&) = delete;
  ~OverlayLayout () = delete;
public:

  static peel::RefPtr<OverlayLayout>
  create () noexcept
  {
    ::GtkLayoutManager *_peel_return = gtk_overlay_layout_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<OverlayLayout>::adopt_ref (reinterpret_cast<OverlayLayout *> (_peel_return));
  }

  class Class : public LayoutManager::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkOverlayLayoutClass),
                 "OverlayLayout::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkOverlayLayoutClass),
                 "OverlayLayout::Class align mismatch");
}; /* class OverlayLayout */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
