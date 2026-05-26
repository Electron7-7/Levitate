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
#include <peel/Gtk/Constraint.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Constraint::Target> ()
{
  return gtk_constraint_target_get_type ();
}


namespace Gtk
{
class /* interface */ Constraint::Target : public GObject::Object
/* requires GObject::Object */
{
private:
  Target () = delete;
  Target (const Target &) = delete;
  Target (Target &&) = delete;

  Target &
  operator = (const Target &) = delete;
  Target &
  operator = (Target &&) = delete;

protected:
  ~Target () = default;

public:

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;
  };

}; /* interface Constraint::Target */
static_assert (sizeof (Constraint::Target) == sizeof (GObject::Object),
               "Constraint::Target size mismatch");
static_assert (alignof (Constraint::Target) == alignof (GObject::Object),
               "Constraint::Target align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
