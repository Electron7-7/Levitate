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
#include <peel/Gtk/CellRendererText.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class Adjustment;
class CellRendererSpin;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CellRendererSpin> ()
{
  return gtk_cell_renderer_spin_get_type ();
}


namespace Gtk
{
class CellRendererSpin : public CellRendererText
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CellRendererSpin () = delete;
  CellRendererSpin (const CellRendererSpin &) = delete;
  CellRendererSpin (CellRendererSpin &&) = delete;
  CellRendererSpin &
  operator = (const CellRendererSpin &) = delete;
  CellRendererSpin &
  operator = (CellRendererSpin &&) = delete;
  ~CellRendererSpin () = delete;
public:

  static peel::FloatPtr<CellRendererSpin>
  create () noexcept
  {
    ::GtkCellRenderer *_peel_return = gtk_cell_renderer_spin_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<CellRendererSpin> (reinterpret_cast<CellRendererSpin *> (_peel_return));
  }

  static peel::Property<Adjustment>
  prop_adjustment ()
  {
    return peel::Property<Adjustment> { "adjustment" };
  }

  static peel::Property<double>
  prop_climb_rate ()
  {
    return peel::Property<double> { "climb-rate" };
  }

  static peel::Property<unsigned>
  prop_digits ()
  {
    return peel::Property<unsigned> { "digits" };
  }
}; /* class CellRendererSpin */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
