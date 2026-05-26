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
#include <peel/Gtk/CellRenderer.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class CellRendererSpinner;
enum class IconSize : std::underlying_type<::GtkIconSize>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CellRendererSpinner> ()
{
  return gtk_cell_renderer_spinner_get_type ();
}


namespace Gtk
{
class CellRendererSpinner : public CellRenderer
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CellRendererSpinner () = delete;
  CellRendererSpinner (const CellRendererSpinner &) = delete;
  CellRendererSpinner (CellRendererSpinner &&) = delete;
  CellRendererSpinner &
  operator = (const CellRendererSpinner &) = delete;
  CellRendererSpinner &
  operator = (CellRendererSpinner &&) = delete;
  ~CellRendererSpinner () = delete;
public:

  static peel::FloatPtr<CellRendererSpinner>
  create () noexcept
  {
    ::GtkCellRenderer *_peel_return = gtk_cell_renderer_spinner_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<CellRendererSpinner> (reinterpret_cast<CellRendererSpinner *> (_peel_return));
  }

  static peel::Property<bool>
  prop_active ()
  {
    return peel::Property<bool> { "active" };
  }

  static peel::Property<unsigned>
  prop_pulse ()
  {
    return peel::Property<unsigned> { "pulse" };
  }

  static peel::Property<IconSize>
  prop_size ()
  {
    return peel::Property<IconSize> { "size" };
  }
}; /* class CellRendererSpinner */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
