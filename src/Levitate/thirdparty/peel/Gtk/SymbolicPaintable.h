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
#include <peel/GObject/TypeInterface.h>
#include <peel/Gdk/Paintable.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
struct RGBA;
class Snapshot;
} /* namespace Gdk */

namespace Gtk
{
class /* interface */ SymbolicPaintable;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::SymbolicPaintable> ()
{
  return gtk_symbolic_paintable_get_type ();
}


namespace Gtk
{
class /* interface */ SymbolicPaintable : public Gdk::Paintable
/* requires Gdk::Paintable */
{
private:
  SymbolicPaintable () = delete;
  SymbolicPaintable (const SymbolicPaintable &) = delete;
  SymbolicPaintable (SymbolicPaintable &&) = delete;

  SymbolicPaintable &
  operator = (const SymbolicPaintable &) = delete;
  SymbolicPaintable &
  operator = (SymbolicPaintable &&) = delete;

protected:
  ~SymbolicPaintable () = default;

public:

  peel_nonnull_args (2)
  void
  snapshot_symbolic (Gdk::Snapshot *snapshot, double width, double height, peel::ArrayRef<const Gdk::RGBA> colors) noexcept
  {
    gsize _peel_n_colors;
    ::GtkSymbolicPaintable *_peel_this = reinterpret_cast<::GtkSymbolicPaintable *> (this);
    ::GdkSnapshot *_peel_snapshot = reinterpret_cast<::GdkSnapshot *> (snapshot);
    const ::GdkRGBA *_peel_colors = (_peel_n_colors = colors.size (), reinterpret_cast<const ::GdkRGBA *> (colors.data ()));
    gtk_symbolic_paintable_snapshot_symbolic (_peel_this, _peel_snapshot, width, height, _peel_colors, _peel_n_colors);
  }

  peel_nonnull_args (2)
  void
  snapshot_with_weight (Gdk::Snapshot *snapshot, double width, double height, peel::ArrayRef<const Gdk::RGBA> colors, double weight) noexcept
  {
    gsize _peel_n_colors;
    ::GtkSymbolicPaintable *_peel_this = reinterpret_cast<::GtkSymbolicPaintable *> (this);
    ::GdkSnapshot *_peel_snapshot = reinterpret_cast<::GdkSnapshot *> (snapshot);
    const ::GdkRGBA *_peel_colors = (_peel_n_colors = colors.size (), reinterpret_cast<const ::GdkRGBA *> (colors.data ()));
    gtk_symbolic_paintable_snapshot_with_weight (_peel_this, _peel_snapshot, width, height, _peel_colors, _peel_n_colors, weight);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_snapshot_symbolic (Gdk::Snapshot *snapshot, double width, double height, peel::ArrayRef<const Gdk::RGBA> colors) noexcept
  {
    ::GtkSymbolicPaintableInterface *_peel_iface = reinterpret_cast<::GtkSymbolicPaintableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<SymbolicPaintable> ())->peek_parent ());
    gsize _peel_n_colors;
    ::GtkSymbolicPaintable *_peel_this = reinterpret_cast<::GtkSymbolicPaintable *> (this);
    ::GdkSnapshot *_peel_snapshot = reinterpret_cast<::GdkSnapshot *> (snapshot);
    const ::GdkRGBA *_peel_colors = (_peel_n_colors = colors.size (), reinterpret_cast<const ::GdkRGBA *> (colors.data ()));
    _peel_iface->snapshot_symbolic (_peel_this, _peel_snapshot, width, height, _peel_colors, _peel_n_colors);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_snapshot_symbolic (Gdk::Snapshot *snapshot, double width, double height, peel::ArrayRef<const Gdk::RGBA> colors) noexcept
  {
    ::GtkSymbolicPaintableInterface *_peel_iface = reinterpret_cast<::GtkSymbolicPaintableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<SymbolicPaintable> ()));
    gsize _peel_n_colors;
    ::GtkSymbolicPaintable *_peel_this = reinterpret_cast<::GtkSymbolicPaintable *> (this);
    ::GdkSnapshot *_peel_snapshot = reinterpret_cast<::GdkSnapshot *> (snapshot);
    const ::GdkRGBA *_peel_colors = (_peel_n_colors = colors.size (), reinterpret_cast<const ::GdkRGBA *> (colors.data ()));
    _peel_iface->snapshot_symbolic (_peel_this, _peel_snapshot, width, height, _peel_colors, _peel_n_colors);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_snapshot_with_weight (Gdk::Snapshot *snapshot, double width, double height, peel::ArrayRef<const Gdk::RGBA> colors, double weight) noexcept
  {
    ::GtkSymbolicPaintableInterface *_peel_iface = reinterpret_cast<::GtkSymbolicPaintableInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<SymbolicPaintable> ())->peek_parent ());
    gsize _peel_n_colors;
    ::GtkSymbolicPaintable *_peel_this = reinterpret_cast<::GtkSymbolicPaintable *> (this);
    ::GdkSnapshot *_peel_snapshot = reinterpret_cast<::GdkSnapshot *> (snapshot);
    const ::GdkRGBA *_peel_colors = (_peel_n_colors = colors.size (), reinterpret_cast<const ::GdkRGBA *> (colors.data ()));
    _peel_iface->snapshot_with_weight (_peel_this, _peel_snapshot, width, height, _peel_colors, _peel_n_colors, weight);
  }

  peel_nonnull_args (2)
  void
  default_vfunc_snapshot_with_weight (Gdk::Snapshot *snapshot, double width, double height, peel::ArrayRef<const Gdk::RGBA> colors, double weight) noexcept
  {
    ::GtkSymbolicPaintableInterface *_peel_iface = reinterpret_cast<::GtkSymbolicPaintableInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<SymbolicPaintable> ()));
    gsize _peel_n_colors;
    ::GtkSymbolicPaintable *_peel_this = reinterpret_cast<::GtkSymbolicPaintable *> (this);
    ::GdkSnapshot *_peel_snapshot = reinterpret_cast<::GdkSnapshot *> (snapshot);
    const ::GdkRGBA *_peel_colors = (_peel_n_colors = colors.size (), reinterpret_cast<const ::GdkRGBA *> (colors.data ()));
    _peel_iface->snapshot_with_weight (_peel_this, _peel_snapshot, width, height, _peel_colors, _peel_n_colors, weight);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkSymbolicPaintableInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_snapshot_symbolic ()
    {
      ::GtkSymbolicPaintableInterface *klass = reinterpret_cast<::GtkSymbolicPaintableInterface *> (this);
      klass->snapshot_symbolic = +[] (::GtkSymbolicPaintable *paintable, ::GdkSnapshot *snapshot, double width, double height, const ::GdkRGBA *colors, gsize n_colors) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (paintable);
        Gdk::Snapshot *_peel_snapshot = reinterpret_cast<Gdk::Snapshot *> (snapshot);
        peel::ArrayRef<const Gdk::RGBA> _peel_colors = peel::ArrayRef<const Gdk::RGBA> (reinterpret_cast<const Gdk::RGBA *> (colors), n_colors);
        _peel_this->DerivedClass::vfunc_snapshot_symbolic (_peel_snapshot, width, height, _peel_colors);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_snapshot_with_weight ()
    {
      ::GtkSymbolicPaintableInterface *klass = reinterpret_cast<::GtkSymbolicPaintableInterface *> (this);
      klass->snapshot_with_weight = +[] (::GtkSymbolicPaintable *paintable, ::GdkSnapshot *snapshot, double width, double height, const ::GdkRGBA *colors, gsize n_colors, double weight) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (paintable);
        Gdk::Snapshot *_peel_snapshot = reinterpret_cast<Gdk::Snapshot *> (snapshot);
        peel::ArrayRef<const Gdk::RGBA> _peel_colors = peel::ArrayRef<const Gdk::RGBA> (reinterpret_cast<const Gdk::RGBA *> (colors), n_colors);
        _peel_this->DerivedClass::vfunc_snapshot_with_weight (_peel_snapshot, width, height, _peel_colors, weight);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkSymbolicPaintableInterface),
                 "SymbolicPaintable::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkSymbolicPaintableInterface),
                 "SymbolicPaintable::Iface align mismatch");
}; /* interface SymbolicPaintable */
static_assert (sizeof (SymbolicPaintable) == sizeof (Gdk::Paintable),
               "SymbolicPaintable size mismatch");
static_assert (alignof (SymbolicPaintable) == alignof (Gdk::Paintable),
               "SymbolicPaintable align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
