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
#include <peel/Gtk/Accessible.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class /* interface */ AccessibleRange;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::AccessibleRange> ()
{
  return gtk_accessible_range_get_type ();
}


namespace Gtk
{
class /* interface */ AccessibleRange : public Accessible
/* requires Accessible */
{
private:
  AccessibleRange () = delete;
  AccessibleRange (const AccessibleRange &) = delete;
  AccessibleRange (AccessibleRange &&) = delete;

  AccessibleRange &
  operator = (const AccessibleRange &) = delete;
  AccessibleRange &
  operator = (AccessibleRange &&) = delete;

protected:
  ~AccessibleRange () = default;

public:

  template<typename DerivedClass>
  bool
  parent_vfunc_set_current_value (double value) noexcept
  {
    ::GtkAccessibleRangeInterface *_peel_iface = reinterpret_cast<::GtkAccessibleRangeInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<AccessibleRange> ())->peek_parent ());
    ::GtkAccessibleRange *_peel_this = reinterpret_cast<::GtkAccessibleRange *> (this);
    gboolean _peel_return = _peel_iface->set_current_value (_peel_this, value);
    return !!_peel_return;
  }

  bool
  default_vfunc_set_current_value (double value) noexcept
  {
    ::GtkAccessibleRangeInterface *_peel_iface = reinterpret_cast<::GtkAccessibleRangeInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<AccessibleRange> ()));
    ::GtkAccessibleRange *_peel_this = reinterpret_cast<::GtkAccessibleRange *> (this);
    gboolean _peel_return = _peel_iface->set_current_value (_peel_this, value);
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkAccessibleRangeInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_set_current_value ()
    {
      ::GtkAccessibleRangeInterface *klass = reinterpret_cast<::GtkAccessibleRangeInterface *> (this);
      klass->set_current_value = +[] (::GtkAccessibleRange *self, double value) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        bool _peel_return = _peel_this->DerivedClass::vfunc_set_current_value (value);
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkAccessibleRangeInterface),
                 "AccessibleRange::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkAccessibleRangeInterface),
                 "AccessibleRange::Iface align mismatch");
}; /* interface AccessibleRange */
static_assert (sizeof (AccessibleRange) == sizeof (Accessible),
               "AccessibleRange size mismatch");
static_assert (alignof (AccessibleRange) == alignof (Accessible),
               "AccessibleRange align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
