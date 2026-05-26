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
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class /* interface */ Orientable;
enum class Orientation : std::underlying_type<::GtkOrientation>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Orientable> ()
{
  return gtk_orientable_get_type ();
}


namespace Gtk
{
class /* interface */ Orientable : public GObject::Object
/* requires GObject::Object */
{
private:
  Orientable () = delete;
  Orientable (const Orientable &) = delete;
  Orientable (Orientable &&) = delete;

  Orientable &
  operator = (const Orientable &) = delete;
  Orientable &
  operator = (Orientable &&) = delete;

protected:
  ~Orientable () = default;

public:

  Orientation
  get_orientation () noexcept
  {
    ::GtkOrientable *_peel_this = reinterpret_cast<::GtkOrientable *> (this);
    ::GtkOrientation _peel_return = gtk_orientable_get_orientation (_peel_this);
    return static_cast<Orientation> (_peel_return);
  }

  void
  set_orientation (Orientation orientation) noexcept
  {
    ::GtkOrientable *_peel_this = reinterpret_cast<::GtkOrientable *> (this);
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    gtk_orientable_set_orientation (_peel_this, _peel_orientation);
  }

  static peel::Property<Orientation>
  prop_orientation ()
  {
    return peel::Property<Orientation> { "orientation" };
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;
  };

  static_assert (sizeof (Iface) == sizeof (::GtkOrientableIface),
                 "Orientable::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkOrientableIface),
                 "Orientable::Iface align mismatch");
}; /* interface Orientable */
static_assert (sizeof (Orientable) == sizeof (GObject::Object),
               "Orientable size mismatch");
static_assert (alignof (Orientable) == alignof (GObject::Object),
               "Orientable align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
