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
#include <peel/Gtk/CellArea.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class CellAreaBox;
class CellRenderer;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CellAreaBox> ()
{
  return gtk_cell_area_box_get_type ();
}


namespace Gtk
{
class CellAreaBox : public CellArea
/* non-derivable */
/* implements Buildable, CellLayout, Orientable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CellAreaBox () = delete;
  CellAreaBox (const CellAreaBox &) = delete;
  CellAreaBox (CellAreaBox &&) = delete;
  CellAreaBox &
  operator = (const CellAreaBox &) = delete;
  CellAreaBox &
  operator = (CellAreaBox &&) = delete;
  ~CellAreaBox () = delete;
public:

  static peel::FloatPtr<CellAreaBox>
  create () noexcept
  {
    ::GtkCellArea *_peel_return = gtk_cell_area_box_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<CellAreaBox> (reinterpret_cast<CellAreaBox *> (_peel_return));
  }

  int
  get_spacing () noexcept
  {
    ::GtkCellAreaBox *_peel_this = reinterpret_cast<::GtkCellAreaBox *> (this);
    return gtk_cell_area_box_get_spacing (_peel_this);
  }

  void
  pack_end (peel::FloatPtr<CellRenderer> renderer, bool expand, bool align, bool fixed) noexcept
  {
    ::GtkCellAreaBox *_peel_this = reinterpret_cast<::GtkCellAreaBox *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (std::move (renderer).release_floating_ptr ());
    gboolean _peel_expand = static_cast<gboolean> (expand);
    gboolean _peel_align = static_cast<gboolean> (align);
    gboolean _peel_fixed = static_cast<gboolean> (fixed);
    gtk_cell_area_box_pack_end (_peel_this, _peel_renderer, _peel_expand, _peel_align, _peel_fixed);
  }

  void
  pack_start (peel::FloatPtr<CellRenderer> renderer, bool expand, bool align, bool fixed) noexcept
  {
    ::GtkCellAreaBox *_peel_this = reinterpret_cast<::GtkCellAreaBox *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (std::move (renderer).release_floating_ptr ());
    gboolean _peel_expand = static_cast<gboolean> (expand);
    gboolean _peel_align = static_cast<gboolean> (align);
    gboolean _peel_fixed = static_cast<gboolean> (fixed);
    gtk_cell_area_box_pack_start (_peel_this, _peel_renderer, _peel_expand, _peel_align, _peel_fixed);
  }

  void
  set_spacing (int spacing) noexcept
  {
    ::GtkCellAreaBox *_peel_this = reinterpret_cast<::GtkCellAreaBox *> (this);
    gtk_cell_area_box_set_spacing (_peel_this, spacing);
  }

  static peel::Property<int>
  prop_spacing ()
  {
    return peel::Property<int> { "spacing" };
  }
}; /* class CellAreaBox */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/CellRenderer.h>
