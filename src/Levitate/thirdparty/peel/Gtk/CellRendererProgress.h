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
class CellRendererProgress;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CellRendererProgress> ()
{
  return gtk_cell_renderer_progress_get_type ();
}


namespace Gtk
{
class CellRendererProgress : public CellRenderer
/* non-derivable */
/* implements Orientable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CellRendererProgress () = delete;
  CellRendererProgress (const CellRendererProgress &) = delete;
  CellRendererProgress (CellRendererProgress &&) = delete;
  CellRendererProgress &
  operator = (const CellRendererProgress &) = delete;
  CellRendererProgress &
  operator = (CellRendererProgress &&) = delete;
  ~CellRendererProgress () = delete;
public:

  static peel::FloatPtr<CellRendererProgress>
  create () noexcept
  {
    ::GtkCellRenderer *_peel_return = gtk_cell_renderer_progress_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<CellRendererProgress> (reinterpret_cast<CellRendererProgress *> (_peel_return));
  }

  static peel::Property<bool>
  prop_inverted ()
  {
    return peel::Property<bool> { "inverted" };
  }

  static peel::Property<int>
  prop_pulse ()
  {
    return peel::Property<int> { "pulse" };
  }

  static peel::Property<const char *>
  prop_text ()
  {
    return peel::Property<const char *> { "text" };
  }

  static peel::Property<float>
  prop_text_xalign ()
  {
    return peel::Property<float> { "text-xalign" };
  }

  static peel::Property<float>
  prop_text_yalign ()
  {
    return peel::Property<float> { "text-yalign" };
  }

  static peel::Property<int>
  prop_value ()
  {
    return peel::Property<int> { "value" };
  }
}; /* class CellRendererProgress */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
