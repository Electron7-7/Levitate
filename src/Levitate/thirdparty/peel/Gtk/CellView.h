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
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Texture;
} /* namespace Gdk */

namespace Gtk
{
class CellArea;
class CellView;
class /* interface */ TreeModel;
class /* record */ TreePath;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CellView> ()
{
  return gtk_cell_view_get_type ();
}


namespace Gtk
{
class CellView : public Widget
/* non-derivable */
/* implements Accessible, Buildable, CellLayout, Constraint::Target, Orientable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CellView () = delete;
  CellView (const CellView &) = delete;
  CellView (CellView &&) = delete;
  CellView &
  operator = (const CellView &) = delete;
  CellView &
  operator = (CellView &&) = delete;
  ~CellView () = delete;
public:

  static peel::FloatPtr<CellView>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_cell_view_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<CellView> (reinterpret_cast<CellView *> (_peel_return));
  }

  peel_nonnull_args (1, 2)
  static peel::FloatPtr<CellView>
  create_with_context (CellArea *area, CellArea::Context *context) noexcept
  {
    ::GtkCellArea *_peel_area = reinterpret_cast<::GtkCellArea *> (area);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_return = gtk_cell_view_new_with_context (_peel_area, _peel_context);
    peel_assume (_peel_return);
    return peel::FloatPtr<CellView> (reinterpret_cast<CellView *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<CellView>
  create_with_markup (const char *markup) noexcept
  {
    ::GtkWidget *_peel_return = gtk_cell_view_new_with_markup (markup);
    peel_assume (_peel_return);
    return peel::FloatPtr<CellView> (reinterpret_cast<CellView *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<CellView>
  create_with_text (const char *text) noexcept
  {
    ::GtkWidget *_peel_return = gtk_cell_view_new_with_text (text);
    peel_assume (_peel_return);
    return peel::FloatPtr<CellView> (reinterpret_cast<CellView *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<CellView>
  create_with_texture (Gdk::Texture *texture) noexcept
  {
    ::GdkTexture *_peel_texture = reinterpret_cast<::GdkTexture *> (texture);
    ::GtkWidget *_peel_return = gtk_cell_view_new_with_texture (_peel_texture);
    peel_assume (_peel_return);
    return peel::FloatPtr<CellView> (reinterpret_cast<CellView *> (_peel_return));
  }

  peel::UniquePtr<TreePath>
  get_displayed_row () noexcept
  {
    ::GtkCellView *_peel_this = reinterpret_cast<::GtkCellView *> (this);
    ::GtkTreePath *_peel_return = gtk_cell_view_get_displayed_row (_peel_this);
    return peel::UniquePtr<TreePath>::adopt_ref (reinterpret_cast<TreePath *> (_peel_return));
  }

  bool
  get_draw_sensitive () noexcept
  {
    ::GtkCellView *_peel_this = reinterpret_cast<::GtkCellView *> (this);
    gboolean _peel_return = gtk_cell_view_get_draw_sensitive (_peel_this);
    return !!_peel_return;
  }

  bool
  get_fit_model () noexcept
  {
    ::GtkCellView *_peel_this = reinterpret_cast<::GtkCellView *> (this);
    gboolean _peel_return = gtk_cell_view_get_fit_model (_peel_this);
    return !!_peel_return;
  }

  TreeModel *
  get_model () noexcept
  {
    ::GtkCellView *_peel_this = reinterpret_cast<::GtkCellView *> (this);
    ::GtkTreeModel *_peel_return = gtk_cell_view_get_model (_peel_this);
    return reinterpret_cast<TreeModel *> (_peel_return);
  }

  peel_arg_in (2)
  void
  set_displayed_row (TreePath *path) noexcept
  {
    ::GtkCellView *_peel_this = reinterpret_cast<::GtkCellView *> (this);
    ::GtkTreePath *_peel_path = reinterpret_cast<::GtkTreePath *> (path);
    gtk_cell_view_set_displayed_row (_peel_this, _peel_path);
  }

  void
  set_draw_sensitive (bool draw_sensitive) noexcept
  {
    ::GtkCellView *_peel_this = reinterpret_cast<::GtkCellView *> (this);
    gboolean _peel_draw_sensitive = static_cast<gboolean> (draw_sensitive);
    gtk_cell_view_set_draw_sensitive (_peel_this, _peel_draw_sensitive);
  }

  void
  set_fit_model (bool fit_model) noexcept
  {
    ::GtkCellView *_peel_this = reinterpret_cast<::GtkCellView *> (this);
    gboolean _peel_fit_model = static_cast<gboolean> (fit_model);
    gtk_cell_view_set_fit_model (_peel_this, _peel_fit_model);
  }

  void
  set_model (TreeModel *model) noexcept
  {
    ::GtkCellView *_peel_this = reinterpret_cast<::GtkCellView *> (this);
    ::GtkTreeModel *_peel_model = reinterpret_cast<::GtkTreeModel *> (model);
    gtk_cell_view_set_model (_peel_this, _peel_model);
  }

  static peel::Property<CellArea>
  prop_cell_area ()
  {
    return peel::Property<CellArea> { "cell-area" };
  }

  static peel::Property<CellArea::Context>
  prop_cell_area_context ()
  {
    return peel::Property<CellArea::Context> { "cell-area-context" };
  }

  static peel::Property<bool>
  prop_draw_sensitive ()
  {
    return peel::Property<bool> { "draw-sensitive" };
  }

  static peel::Property<bool>
  prop_fit_model ()
  {
    return peel::Property<bool> { "fit-model" };
  }

  static peel::Property<TreeModel>
  prop_model ()
  {
    return peel::Property<TreeModel> { "model" };
  }
}; /* class CellView */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/TreePath.h>
