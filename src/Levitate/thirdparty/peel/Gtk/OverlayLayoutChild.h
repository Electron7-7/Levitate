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
class OverlayLayoutChild;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::OverlayLayoutChild> ()
{
  return gtk_overlay_layout_child_get_type ();
}


namespace Gtk
{
class OverlayLayoutChild : public LayoutChild
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  OverlayLayoutChild () = delete;
  OverlayLayoutChild (const OverlayLayoutChild &) = delete;
  OverlayLayoutChild (OverlayLayoutChild &&) = delete;
  OverlayLayoutChild &
  operator = (const OverlayLayoutChild &) = delete;
  OverlayLayoutChild &
  operator = (OverlayLayoutChild &&) = delete;
  ~OverlayLayoutChild () = delete;
public:

  bool
  get_clip_overlay () noexcept
  {
    ::GtkOverlayLayoutChild *_peel_this = reinterpret_cast<::GtkOverlayLayoutChild *> (this);
    gboolean _peel_return = gtk_overlay_layout_child_get_clip_overlay (_peel_this);
    return !!_peel_return;
  }

  bool
  get_measure () noexcept
  {
    ::GtkOverlayLayoutChild *_peel_this = reinterpret_cast<::GtkOverlayLayoutChild *> (this);
    gboolean _peel_return = gtk_overlay_layout_child_get_measure (_peel_this);
    return !!_peel_return;
  }

  void
  set_clip_overlay (bool clip_overlay) noexcept
  {
    ::GtkOverlayLayoutChild *_peel_this = reinterpret_cast<::GtkOverlayLayoutChild *> (this);
    gboolean _peel_clip_overlay = static_cast<gboolean> (clip_overlay);
    gtk_overlay_layout_child_set_clip_overlay (_peel_this, _peel_clip_overlay);
  }

  void
  set_measure (bool measure) noexcept
  {
    ::GtkOverlayLayoutChild *_peel_this = reinterpret_cast<::GtkOverlayLayoutChild *> (this);
    gboolean _peel_measure = static_cast<gboolean> (measure);
    gtk_overlay_layout_child_set_measure (_peel_this, _peel_measure);
  }

  static peel::Property<bool>
  prop_clip_overlay ()
  {
    return peel::Property<bool> { "clip-overlay" };
  }

  static peel::Property<bool>
  prop_measure ()
  {
    return peel::Property<bool> { "measure" };
  }

  class Class : public LayoutChild::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkOverlayLayoutChildClass),
                 "OverlayLayoutChild::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkOverlayLayoutChildClass),
                 "OverlayLayoutChild::Class align mismatch");
}; /* class OverlayLayoutChild */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
