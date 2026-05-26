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
#include <peel/GLib/List.h>
#include <peel/GObject/InitiallyUnowned.h>
#include <peel/Gtk/CellRenderer.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class ParamSpec;
struct Value;
} /* namespace GObject */

namespace Gdk
{
class Event;
struct Rectangle;
} /* namespace Gdk */

namespace Gtk
{
class CellArea;
class /* interface */ CellEditable;
class CellRenderer;
enum class DirectionType : std::underlying_type<::GtkDirectionType>::type;
enum class Orientation : std::underlying_type<::GtkOrientation>::type;
enum class SizeRequestMode : std::underlying_type<::GtkSizeRequestMode>::type;
class Snapshot;
struct TreeIter;
class /* interface */ TreeModel;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CellArea> ()
{
  return gtk_cell_area_get_type ();
}


namespace Gtk
{
class CellArea : public GObject::InitiallyUnowned
/* implements Buildable, CellLayout */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CellArea () = delete;
  CellArea (const CellArea &) = delete;
  CellArea (CellArea &&) = delete;
  CellArea &
  operator = (const CellArea &) = delete;
  CellArea &
  operator = (CellArea &&) = delete;
protected:
  ~CellArea () = default;
public:
  class Context;

  peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  bool
  activate (CellArea::Context *context, Widget *widget, const Gdk::Rectangle *cell_area, CellRenderer::State flags, bool edit_only) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GtkCellRendererState _peel_flags = static_cast<::GtkCellRendererState> (flags);
    gboolean _peel_edit_only = static_cast<gboolean> (edit_only);
    gboolean _peel_return = gtk_cell_area_activate (_peel_this, _peel_context, _peel_widget, _peel_cell_area, _peel_flags, _peel_edit_only);
    return !!_peel_return;
  }

  peel_arg_in (5) peel_nonnull_args (2, 3, 4, 5)
  bool
  activate_cell (Widget *widget, CellRenderer *renderer, Gdk::Event *event, const Gdk::Rectangle *cell_area, CellRenderer::State flags) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GtkCellRendererState _peel_flags = static_cast<::GtkCellRendererState> (flags);
    gboolean _peel_return = gtk_cell_area_activate_cell (_peel_this, _peel_widget, _peel_renderer, _peel_event, _peel_cell_area, _peel_flags);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  add (CellRenderer *renderer) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    gtk_cell_area_add (_peel_this, _peel_renderer);
  }

  peel_nonnull_args (2, 3)
  void
  add_focus_sibling (CellRenderer *renderer, CellRenderer *sibling) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    ::GtkCellRenderer *_peel_sibling = reinterpret_cast<::GtkCellRenderer *> (sibling);
    gtk_cell_area_add_focus_sibling (_peel_this, _peel_renderer, _peel_sibling);
  }

  /* Unsupported for now: add_with_properties: varargs */
  static void
  add_with_properties (UnsupportedForNowToken);

  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  apply_attributes (TreeModel *tree_model, TreeIter *iter, bool is_expander, bool is_expanded) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkTreeModel *_peel_tree_model = reinterpret_cast<::GtkTreeModel *> (tree_model);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_is_expander = static_cast<gboolean> (is_expander);
    gboolean _peel_is_expanded = static_cast<gboolean> (is_expanded);
    gtk_cell_area_apply_attributes (_peel_this, _peel_tree_model, _peel_iter, _peel_is_expander, _peel_is_expanded);
  }

  peel_nonnull_args (2, 3)
  void
  attribute_connect (CellRenderer *renderer, const char *attribute, int column) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    gtk_cell_area_attribute_connect (_peel_this, _peel_renderer, attribute, column);
  }

  peel_nonnull_args (2, 3)
  void
  attribute_disconnect (CellRenderer *renderer, const char *attribute) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    gtk_cell_area_attribute_disconnect (_peel_this, _peel_renderer, attribute);
  }

  peel_nonnull_args (2, 3)
  int
  attribute_get_column (CellRenderer *renderer, const char *attribute) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    return gtk_cell_area_attribute_get_column (_peel_this, _peel_renderer, attribute);
  }

  /* Unsupported for now: cell_get: varargs */
  static void
  cell_get (UnsupportedForNowToken);

  peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  cell_get_property (CellRenderer *renderer, const char *property_name, GObject::Value *value) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    gtk_cell_area_cell_get_property (_peel_this, _peel_renderer, property_name, _peel_value);
  }

  peel_nonnull_args (2, 3)
  void
  cell_get_valist (CellRenderer *renderer, const char *first_property_name, va_list var_args) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    gtk_cell_area_cell_get_valist (_peel_this, _peel_renderer, first_property_name, var_args);
  }

  /* Unsupported for now: cell_set: varargs */
  static void
  cell_set (UnsupportedForNowToken);

  peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  void
  cell_set_property (CellRenderer *renderer, const char *property_name, const GObject::Value *value) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    gtk_cell_area_cell_set_property (_peel_this, _peel_renderer, property_name, _peel_value);
  }

  peel_nonnull_args (2, 3)
  void
  cell_set_valist (CellRenderer *renderer, const char *first_property_name, va_list var_args) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    gtk_cell_area_cell_set_valist (_peel_this, _peel_renderer, first_property_name, var_args);
  }

  peel_nonnull_args (2)
  peel::RefPtr<CellArea::Context>
  copy_context (CellArea::Context *context) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkCellAreaContext *_peel_return = gtk_cell_area_copy_context (_peel_this, _peel_context);
    peel_assume (_peel_return);
    return peel::RefPtr<CellArea::Context>::adopt_ref (reinterpret_cast<CellArea::Context *> (_peel_return));
  }

  peel::RefPtr<CellArea::Context>
  create_context () noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_return = gtk_cell_area_create_context (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<CellArea::Context>::adopt_ref (reinterpret_cast<CellArea::Context *> (_peel_return));
  }

  peel_arg_in (5) peel_nonnull_args (2, 3, 4, 5)
  int
  event (CellArea::Context *context, Widget *widget, Gdk::Event *event, const Gdk::Rectangle *cell_area, CellRenderer::State flags) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GtkCellRendererState _peel_flags = static_cast<::GtkCellRendererState> (flags);
    return gtk_cell_area_event (_peel_this, _peel_context, _peel_widget, _peel_event, _peel_cell_area, _peel_flags);
  }

  bool
  focus (DirectionType direction) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkDirectionType _peel_direction = static_cast<::GtkDirectionType> (direction);
    gboolean _peel_return = gtk_cell_area_focus (_peel_this, _peel_direction);
    return !!_peel_return;
  }

  template<typename CellCallback>
  void
  foreach (CellCallback &&callback) noexcept
  {
    gpointer _peel_callback_data;
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellCallback _peel_callback = peel::internals::CallbackHelper<gboolean, ::GtkCellRenderer *>::wrap_call_callback (
      static_cast<CellCallback &&> (callback),
      [] (::GtkCellRenderer *renderer, gpointer data) -> gboolean
      {
        CellCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<CellCallback>::type *> (data);
        CellRenderer *_peel_renderer = reinterpret_cast<CellRenderer *> (renderer);
        bool _peel_return = _peel_captured_callback (_peel_renderer);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_callback_data, peel::internals::is_const_invocable<CellCallback, void, CellRenderer *>::value);
    gtk_cell_area_foreach (_peel_this, _peel_callback, _peel_callback_data);
  }

  template<typename CellAllocCallback>
  peel_arg_in (4) peel_arg_in (5) peel_nonnull_args (2, 3, 4, 5)
  void
  foreach_alloc (CellArea::Context *context, Widget *widget, const Gdk::Rectangle *cell_area, const Gdk::Rectangle *background_area, CellAllocCallback &&callback) noexcept
  {
    gpointer _peel_callback_data;
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    const ::GdkRectangle *_peel_background_area = reinterpret_cast<const ::GdkRectangle *> (background_area);
    ::GtkCellAllocCallback _peel_callback = peel::internals::CallbackHelper<gboolean, ::GtkCellRenderer *, const ::GdkRectangle *, const ::GdkRectangle *>::wrap_call_callback (
      static_cast<CellAllocCallback &&> (callback),
      [] (::GtkCellRenderer *renderer, const ::GdkRectangle *cell_area, const ::GdkRectangle *cell_background, gpointer data) -> gboolean
      {
        CellAllocCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<CellAllocCallback>::type *> (data);
        CellRenderer *_peel_renderer = reinterpret_cast<CellRenderer *> (renderer);
        const Gdk::Rectangle *_peel_cell_area = reinterpret_cast<const Gdk::Rectangle *> (cell_area);
        const Gdk::Rectangle *_peel_cell_background = reinterpret_cast<const Gdk::Rectangle *> (cell_background);
        bool _peel_return = _peel_captured_callback (_peel_renderer, _peel_cell_area, _peel_cell_background);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_callback_data, peel::internals::is_const_invocable<CellAllocCallback, void, CellRenderer *, const Gdk::Rectangle *, const Gdk::Rectangle *>::value);
    gtk_cell_area_foreach_alloc (_peel_this, _peel_context, _peel_widget, _peel_cell_area, _peel_background_area, _peel_callback, _peel_callback_data);
  }

  peel_arg_in (5) peel_arg_out (6) peel_nonnull_args (2, 3, 4, 5, 6)
  void
  get_cell_allocation (CellArea::Context *context, Widget *widget, CellRenderer *renderer, const Gdk::Rectangle *cell_area, Gdk::Rectangle *allocation) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GdkRectangle *_peel_allocation = reinterpret_cast<::GdkRectangle *> (allocation);
    gtk_cell_area_get_cell_allocation (_peel_this, _peel_context, _peel_widget, _peel_renderer, _peel_cell_area, _peel_allocation);
  }

  peel_arg_in (4) peel_arg_out (7) peel_nonnull_args (2, 3, 4) peel_returns_nonnull
  CellRenderer *
  get_cell_at_position (CellArea::Context *context, Widget *widget, const Gdk::Rectangle *cell_area, int x, int y, Gdk::Rectangle *alloc_area) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GdkRectangle *_peel_alloc_area = reinterpret_cast<::GdkRectangle *> (alloc_area);
    ::GtkCellRenderer *_peel_return = gtk_cell_area_get_cell_at_position (_peel_this, _peel_context, _peel_widget, _peel_cell_area, x, y, _peel_alloc_area);
    peel_assume (_peel_return);
    return reinterpret_cast<CellRenderer *> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_current_path_string () noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    return gtk_cell_area_get_current_path_string (_peel_this);
  }

  CellEditable *
  get_edit_widget () noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellEditable *_peel_return = gtk_cell_area_get_edit_widget (_peel_this);
    return reinterpret_cast<CellEditable *> (_peel_return);
  }

  CellRenderer *
  get_edited_cell () noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_return = gtk_cell_area_get_edited_cell (_peel_this);
    return reinterpret_cast<CellRenderer *> (_peel_return);
  }

  CellRenderer *
  get_focus_cell () noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_return = gtk_cell_area_get_focus_cell (_peel_this);
    return reinterpret_cast<CellRenderer *> (_peel_return);
  }

  peel_nonnull_args (2)
  CellRenderer *
  get_focus_from_sibling (CellRenderer *renderer) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    ::GtkCellRenderer *_peel_return = gtk_cell_area_get_focus_from_sibling (_peel_this, _peel_renderer);
    return reinterpret_cast<CellRenderer *> (_peel_return);
  }

  peel_nonnull_args (2)
  GLib::ListRef<const CellRenderer * const>
  get_focus_siblings (CellRenderer *renderer) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    const GList *_peel_return = gtk_cell_area_get_focus_siblings (_peel_this, _peel_renderer);
    return GLib::ListRef<const CellRenderer * const>::from_raw_list (_peel_return);
  }

  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2, 3)
  void
  get_preferred_height (CellArea::Context *context, Widget *widget, int *minimum_height, int *natural_height) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_cell_area_get_preferred_height (_peel_this, _peel_context, _peel_widget, minimum_height, natural_height);
  }

  peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (2, 3)
  void
  get_preferred_height_for_width (CellArea::Context *context, Widget *widget, int width, int *minimum_height, int *natural_height) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_cell_area_get_preferred_height_for_width (_peel_this, _peel_context, _peel_widget, width, minimum_height, natural_height);
  }

  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2, 3)
  void
  get_preferred_width (CellArea::Context *context, Widget *widget, int *minimum_width, int *natural_width) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_cell_area_get_preferred_width (_peel_this, _peel_context, _peel_widget, minimum_width, natural_width);
  }

  peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (2, 3)
  void
  get_preferred_width_for_height (CellArea::Context *context, Widget *widget, int height, int *minimum_width, int *natural_width) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_cell_area_get_preferred_width_for_height (_peel_this, _peel_context, _peel_widget, height, minimum_width, natural_width);
  }

  SizeRequestMode
  get_request_mode () noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkSizeRequestMode _peel_return = gtk_cell_area_get_request_mode (_peel_this);
    return static_cast<SizeRequestMode> (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  has_renderer (CellRenderer *renderer) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    gboolean _peel_return = gtk_cell_area_has_renderer (_peel_this, _peel_renderer);
    return !!_peel_return;
  }

  peel_arg_in (3) peel_arg_out (4) peel_nonnull_args (2, 3, 4)
  void
  inner_cell_area (Widget *widget, const Gdk::Rectangle *cell_area, Gdk::Rectangle *inner_area) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GdkRectangle *_peel_inner_area = reinterpret_cast<::GdkRectangle *> (inner_area);
    gtk_cell_area_inner_cell_area (_peel_this, _peel_widget, _peel_cell_area, _peel_inner_area);
  }

  bool
  is_activatable () noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    gboolean _peel_return = gtk_cell_area_is_activatable (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2, 3)
  bool
  is_focus_sibling (CellRenderer *renderer, CellRenderer *sibling) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    ::GtkCellRenderer *_peel_sibling = reinterpret_cast<::GtkCellRenderer *> (sibling);
    gboolean _peel_return = gtk_cell_area_is_focus_sibling (_peel_this, _peel_renderer, _peel_sibling);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  remove (CellRenderer *renderer) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    gtk_cell_area_remove (_peel_this, _peel_renderer);
  }

  peel_nonnull_args (2, 3)
  void
  remove_focus_sibling (CellRenderer *renderer, CellRenderer *sibling) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    ::GtkCellRenderer *_peel_sibling = reinterpret_cast<::GtkCellRenderer *> (sibling);
    gtk_cell_area_remove_focus_sibling (_peel_this, _peel_renderer, _peel_sibling);
  }

  peel_arg_out (6) peel_arg_out (7) peel_nonnull_args (2, 4)
  void
  request_renderer (CellRenderer *renderer, Orientation orientation, Widget *widget, int for_size, int *minimum_size, int *natural_size) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_cell_area_request_renderer (_peel_this, _peel_renderer, _peel_orientation, _peel_widget, for_size, minimum_size, natural_size);
  }

  void
  set_focus_cell (CellRenderer *renderer) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    gtk_cell_area_set_focus_cell (_peel_this, _peel_renderer);
  }

  peel_arg_in (5) peel_arg_in (6) peel_nonnull_args (2, 3, 4, 5, 6)
  void
  snapshot (CellArea::Context *context, Widget *widget, Snapshot *snapshot, const Gdk::Rectangle *background_area, const Gdk::Rectangle *cell_area, CellRenderer::State flags, bool paint_focus) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GtkSnapshot *_peel_snapshot = reinterpret_cast<::GtkSnapshot *> (snapshot);
    const ::GdkRectangle *_peel_background_area = reinterpret_cast<const ::GdkRectangle *> (background_area);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GtkCellRendererState _peel_flags = static_cast<::GtkCellRendererState> (flags);
    gboolean _peel_paint_focus = static_cast<gboolean> (paint_focus);
    gtk_cell_area_snapshot (_peel_this, _peel_context, _peel_widget, _peel_snapshot, _peel_background_area, _peel_cell_area, _peel_flags, _peel_paint_focus);
  }

  void
  stop_editing (bool canceled) noexcept
  {
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    gboolean _peel_canceled = static_cast<gboolean> (canceled);
    gtk_cell_area_stop_editing (_peel_this, _peel_canceled);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_add_editable (Handler &&handler, bool after = false) noexcept
  {
    return Signal<CellArea, void (CellRenderer *, CellEditable *, const Gdk::Rectangle *, const char *)>::_peel_connect_by_name (this, "add-editable", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_add_editable (HandlerObject *object, void (HandlerObject::*handler_method) (CellArea *, CellRenderer *, CellEditable *, const Gdk::Rectangle *, const char *), bool after = false) noexcept
  {
    return Signal<CellArea, void (CellRenderer *, CellEditable *, const Gdk::Rectangle *, const char *)>::_peel_connect_by_name (this, "add-editable", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_apply_attributes (Handler &&handler, bool after = false) noexcept
  {
    return Signal<CellArea, void (TreeModel *, const TreeIter *, bool, bool)>::_peel_connect_by_name (this, "apply-attributes", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_apply_attributes (HandlerObject *object, void (HandlerObject::*handler_method) (CellArea *, TreeModel *, const TreeIter *, bool, bool), bool after = false) noexcept
  {
    return Signal<CellArea, void (TreeModel *, const TreeIter *, bool, bool)>::_peel_connect_by_name (this, "apply-attributes", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_focus_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<CellArea, void (CellRenderer *, const char *)>::_peel_connect_by_name (this, "focus-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_focus_changed (HandlerObject *object, void (HandlerObject::*handler_method) (CellArea *, CellRenderer *, const char *), bool after = false) noexcept
  {
    return Signal<CellArea, void (CellRenderer *, const char *)>::_peel_connect_by_name (this, "focus-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_remove_editable (Handler &&handler, bool after = false) noexcept
  {
    return Signal<CellArea, void (CellRenderer *, CellEditable *)>::_peel_connect_by_name (this, "remove-editable", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_remove_editable (HandlerObject *object, void (HandlerObject::*handler_method) (CellArea *, CellRenderer *, CellEditable *), bool after = false) noexcept
  {
    return Signal<CellArea, void (CellRenderer *, CellEditable *)>::_peel_connect_by_name (this, "remove-editable", object, handler_method, after);
  }

  static peel::Property<CellEditable>
  prop_edit_widget ()
  {
    return peel::Property<CellEditable> { "edit-widget" };
  }

  static peel::Property<CellRenderer>
  prop_edited_cell ()
  {
    return peel::Property<CellRenderer> { "edited-cell" };
  }

  static peel::Property<CellRenderer>
  prop_focus_cell ()
  {
    return peel::Property<CellRenderer> { "focus-cell" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<CellArea> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_arg_in (4) peel_nonnull_args (2, 3, 4)
  bool
  parent_vfunc_activate (CellArea::Context *context, Widget *widget, const Gdk::Rectangle *cell_area, CellRenderer::State flags, bool edit_only) noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GtkCellRendererState _peel_flags = static_cast<::GtkCellRendererState> (flags);
    gboolean _peel_edit_only = static_cast<gboolean> (edit_only);
    gboolean _peel_return = _peel_class->activate (_peel_this, _peel_context, _peel_widget, _peel_cell_area, _peel_flags, _peel_edit_only);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_add (CellRenderer *renderer) noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    _peel_class->add (_peel_this, _peel_renderer);
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  parent_vfunc_apply_attributes (TreeModel *tree_model, TreeIter *iter, bool is_expander, bool is_expanded) noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkTreeModel *_peel_tree_model = reinterpret_cast<::GtkTreeModel *> (tree_model);
    ::GtkTreeIter *_peel_iter = reinterpret_cast<::GtkTreeIter *> (iter);
    gboolean _peel_is_expander = static_cast<gboolean> (is_expander);
    gboolean _peel_is_expanded = static_cast<gboolean> (is_expanded);
    _peel_class->apply_attributes (_peel_this, _peel_tree_model, _peel_iter, _peel_is_expander, _peel_is_expanded);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<CellArea::Context>
  parent_vfunc_copy_context (CellArea::Context *context) noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkCellAreaContext *_peel_return = _peel_class->copy_context (_peel_this, _peel_context);
    peel_assume (_peel_return);
    return peel::RefPtr<CellArea::Context>::adopt_ref (reinterpret_cast<CellArea::Context *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::RefPtr<CellArea::Context>
  parent_vfunc_create_context () noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_return = _peel_class->create_context (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<CellArea::Context>::adopt_ref (reinterpret_cast<CellArea::Context *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_arg_in (5) peel_nonnull_args (2, 3, 4, 5)
  int
  parent_vfunc_event (CellArea::Context *context, Widget *widget, Gdk::Event *event, const Gdk::Rectangle *cell_area, CellRenderer::State flags) noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GtkCellRendererState _peel_flags = static_cast<::GtkCellRendererState> (flags);
    return _peel_class->event (_peel_this, _peel_context, _peel_widget, _peel_event, _peel_cell_area, _peel_flags);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_focus (DirectionType direction) noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkDirectionType _peel_direction = static_cast<::GtkDirectionType> (direction);
    gboolean _peel_return = _peel_class->focus (_peel_this, _peel_direction);
    return !!_peel_return;
  }

  template<typename DerivedClass, typename CellCallback>
  void
  parent_vfunc_foreach (CellCallback &&callback) noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_callback_data;
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellCallback _peel_callback = peel::internals::CallbackHelper<gboolean, ::GtkCellRenderer *>::wrap_call_callback (
      static_cast<CellCallback &&> (callback),
      [] (::GtkCellRenderer *renderer, gpointer data) -> gboolean
      {
        CellCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<CellCallback>::type *> (data);
        CellRenderer *_peel_renderer = reinterpret_cast<CellRenderer *> (renderer);
        bool _peel_return = _peel_captured_callback (_peel_renderer);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_callback_data, peel::internals::is_const_invocable<CellCallback, void, CellRenderer *>::value);
    _peel_class->foreach (_peel_this, _peel_callback, _peel_callback_data);
  }

  template<typename DerivedClass, typename CellAllocCallback>
  peel_arg_in (4) peel_arg_in (5) peel_nonnull_args (2, 3, 4, 5)
  void
  parent_vfunc_foreach_alloc (CellArea::Context *context, Widget *widget, const Gdk::Rectangle *cell_area, const Gdk::Rectangle *background_area, CellAllocCallback &&callback) noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_callback_data;
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    const ::GdkRectangle *_peel_background_area = reinterpret_cast<const ::GdkRectangle *> (background_area);
    ::GtkCellAllocCallback _peel_callback = peel::internals::CallbackHelper<gboolean, ::GtkCellRenderer *, const ::GdkRectangle *, const ::GdkRectangle *>::wrap_call_callback (
      static_cast<CellAllocCallback &&> (callback),
      [] (::GtkCellRenderer *renderer, const ::GdkRectangle *cell_area, const ::GdkRectangle *cell_background, gpointer data) -> gboolean
      {
        CellAllocCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<CellAllocCallback>::type *> (data);
        CellRenderer *_peel_renderer = reinterpret_cast<CellRenderer *> (renderer);
        const Gdk::Rectangle *_peel_cell_area = reinterpret_cast<const Gdk::Rectangle *> (cell_area);
        const Gdk::Rectangle *_peel_cell_background = reinterpret_cast<const Gdk::Rectangle *> (cell_background);
        bool _peel_return = _peel_captured_callback (_peel_renderer, _peel_cell_area, _peel_cell_background);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_callback_data, peel::internals::is_const_invocable<CellAllocCallback, void, CellRenderer *, const Gdk::Rectangle *, const Gdk::Rectangle *>::value);
    _peel_class->foreach_alloc (_peel_this, _peel_context, _peel_widget, _peel_cell_area, _peel_background_area, _peel_callback, _peel_callback_data);
  }

  template<typename DerivedClass>
  peel_arg_in (4) peel_nonnull_args (2, 4, 5)
  void
  parent_vfunc_get_cell_property (CellRenderer *renderer, unsigned property_id, GObject::Value *value, GObject::ParamSpec *pspec) noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
    ::GParamSpec *_peel_pspec = reinterpret_cast<::GParamSpec *> (pspec);
    _peel_class->get_cell_property (_peel_this, _peel_renderer, property_id, _peel_value, _peel_pspec);
  }

  template<typename DerivedClass>
  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2, 3)
  void
  parent_vfunc_get_preferred_height (CellArea::Context *context, Widget *widget, int *minimum_height, int *natural_height) noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    _peel_class->get_preferred_height (_peel_this, _peel_context, _peel_widget, minimum_height, natural_height);
  }

  template<typename DerivedClass>
  peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (2, 3)
  void
  parent_vfunc_get_preferred_height_for_width (CellArea::Context *context, Widget *widget, int width, int *minimum_height, int *natural_height) noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    _peel_class->get_preferred_height_for_width (_peel_this, _peel_context, _peel_widget, width, minimum_height, natural_height);
  }

  template<typename DerivedClass>
  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2, 3)
  void
  parent_vfunc_get_preferred_width (CellArea::Context *context, Widget *widget, int *minimum_width, int *natural_width) noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    _peel_class->get_preferred_width (_peel_this, _peel_context, _peel_widget, minimum_width, natural_width);
  }

  template<typename DerivedClass>
  peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (2, 3)
  void
  parent_vfunc_get_preferred_width_for_height (CellArea::Context *context, Widget *widget, int height, int *minimum_width, int *natural_width) noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    _peel_class->get_preferred_width_for_height (_peel_this, _peel_context, _peel_widget, height, minimum_width, natural_width);
  }

  template<typename DerivedClass>
  SizeRequestMode
  parent_vfunc_get_request_mode () noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkSizeRequestMode _peel_return = _peel_class->get_request_mode (_peel_this);
    return static_cast<SizeRequestMode> (_peel_return);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_is_activatable () noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    gboolean _peel_return = _peel_class->is_activatable (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_remove (CellRenderer *renderer) noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    _peel_class->remove (_peel_this, _peel_renderer);
  }

  template<typename DerivedClass>
  peel_arg_in (4) peel_nonnull_args (2, 4, 5)
  void
  parent_vfunc_set_cell_property (CellRenderer *renderer, unsigned property_id, const GObject::Value *value, GObject::ParamSpec *pspec) noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellRenderer *_peel_renderer = reinterpret_cast<::GtkCellRenderer *> (renderer);
    const ::GValue *_peel_value = reinterpret_cast<const ::GValue *> (value);
    ::GParamSpec *_peel_pspec = reinterpret_cast<::GParamSpec *> (pspec);
    _peel_class->set_cell_property (_peel_this, _peel_renderer, property_id, _peel_value, _peel_pspec);
  }

  template<typename DerivedClass>
  peel_arg_in (5) peel_arg_in (6) peel_nonnull_args (2, 3, 4, 5, 6)
  void
  parent_vfunc_snapshot (CellArea::Context *context, Widget *widget, Snapshot *snapshot, const Gdk::Rectangle *background_area, const Gdk::Rectangle *cell_area, CellRenderer::State flags, bool paint_focus) noexcept
  {
    ::GtkCellAreaClass *_peel_class = reinterpret_cast<::GtkCellAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellArea *_peel_this = reinterpret_cast<::GtkCellArea *> (this);
    ::GtkCellAreaContext *_peel_context = reinterpret_cast<::GtkCellAreaContext *> (context);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GtkSnapshot *_peel_snapshot = reinterpret_cast<::GtkSnapshot *> (snapshot);
    const ::GdkRectangle *_peel_background_area = reinterpret_cast<const ::GdkRectangle *> (background_area);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GtkCellRendererState _peel_flags = static_cast<::GtkCellRendererState> (flags);
    gboolean _peel_paint_focus = static_cast<gboolean> (paint_focus);
    _peel_class->snapshot (_peel_this, _peel_context, _peel_widget, _peel_snapshot, _peel_background_area, _peel_cell_area, _peel_flags, _peel_paint_focus);
  }

public:
  class Class : public GObject::InitiallyUnowned::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkCellAreaClass) - sizeof (GObject::InitiallyUnowned::Class)] peel_no_warn_unused;
  public:
    peel_nonnull_args (2) peel_returns_nonnull
    GObject::ParamSpec *
    find_cell_property (const char *property_name) noexcept
    {
      ::GtkCellAreaClass *_peel_this = reinterpret_cast<::GtkCellAreaClass *> (this);
      ::GParamSpec *_peel_return = gtk_cell_area_class_find_cell_property (_peel_this, property_name);
      peel_assume (_peel_return);
      return reinterpret_cast<GObject::ParamSpec *> (_peel_return);
    }

    peel_nonnull_args (3)
    void
    install_cell_property (unsigned property_id, GObject::ParamSpec *pspec) noexcept
    {
      ::GtkCellAreaClass *_peel_this = reinterpret_cast<::GtkCellAreaClass *> (this);
      ::GParamSpec *_peel_pspec = reinterpret_cast<::GParamSpec *> (pspec);
      gtk_cell_area_class_install_cell_property (_peel_this, property_id, _peel_pspec);
    }

    peel::UniquePtr<GObject::ParamSpec *[]>
    list_cell_properties () noexcept
    {
      guint _peel_n_properties;
      ::GtkCellAreaClass *_peel_this = reinterpret_cast<::GtkCellAreaClass *> (this);
      ::GParamSpec **_peel_return = gtk_cell_area_class_list_cell_properties (_peel_this, &_peel_n_properties);
      peel_assume (_peel_return);
      return peel::UniquePtr<GObject::ParamSpec *[]>::adopt_ref (reinterpret_cast<GObject::ParamSpec **> (_peel_return), _peel_n_properties);
    }

  protected:
    template<typename DerivedClass>
    void
    override_vfunc_activate ()
    {
      ::GtkCellAreaClass *klass = reinterpret_cast<::GtkCellAreaClass *> (this);
      klass->activate = +[] (::GtkCellArea *area, ::GtkCellAreaContext *context, ::GtkWidget *widget, const ::GdkRectangle *cell_area, ::GtkCellRendererState flags, gboolean edit_only) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        CellArea::Context *_peel_context = reinterpret_cast<CellArea::Context *> (context);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        const Gdk::Rectangle *_peel_cell_area = reinterpret_cast<const Gdk::Rectangle *> (cell_area);
        CellRenderer::State _peel_flags = static_cast<CellRenderer::State> (flags);
        bool _peel_edit_only = !!edit_only;
        bool _peel_return = _peel_this->DerivedClass::vfunc_activate (_peel_context, _peel_widget, _peel_cell_area, _peel_flags, _peel_edit_only);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_add ()
    {
      ::GtkCellAreaClass *klass = reinterpret_cast<::GtkCellAreaClass *> (this);
      klass->add = +[] (::GtkCellArea *area, ::GtkCellRenderer *renderer) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        CellRenderer *_peel_renderer = reinterpret_cast<CellRenderer *> (renderer);
        _peel_this->DerivedClass::vfunc_add (_peel_renderer);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_apply_attributes ()
    {
      ::GtkCellAreaClass *klass = reinterpret_cast<::GtkCellAreaClass *> (this);
      klass->apply_attributes = +[] (::GtkCellArea *area, ::GtkTreeModel *tree_model, ::GtkTreeIter *iter, gboolean is_expander, gboolean is_expanded) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        TreeModel *_peel_tree_model = reinterpret_cast<TreeModel *> (tree_model);
        TreeIter *_peel_iter = reinterpret_cast<TreeIter *> (iter);
        bool _peel_is_expander = !!is_expander;
        bool _peel_is_expanded = !!is_expanded;
        _peel_this->DerivedClass::vfunc_apply_attributes (_peel_tree_model, _peel_iter, _peel_is_expander, _peel_is_expanded);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_copy_context ()
    {
      ::GtkCellAreaClass *klass = reinterpret_cast<::GtkCellAreaClass *> (this);
      klass->copy_context = +[] (::GtkCellArea *area, ::GtkCellAreaContext *context) -> ::GtkCellAreaContext *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        CellArea::Context *_peel_context = reinterpret_cast<CellArea::Context *> (context);
        peel::RefPtr<CellArea::Context> _peel_return = _peel_this->DerivedClass::vfunc_copy_context (_peel_context);
        return reinterpret_cast<::GtkCellAreaContext *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_create_context ()
    {
      ::GtkCellAreaClass *klass = reinterpret_cast<::GtkCellAreaClass *> (this);
      klass->create_context = +[] (::GtkCellArea *area) -> ::GtkCellAreaContext *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        peel::RefPtr<CellArea::Context> _peel_return = _peel_this->DerivedClass::vfunc_create_context ();
        return reinterpret_cast<::GtkCellAreaContext *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_event ()
    {
      ::GtkCellAreaClass *klass = reinterpret_cast<::GtkCellAreaClass *> (this);
      klass->event = +[] (::GtkCellArea *area, ::GtkCellAreaContext *context, ::GtkWidget *widget, ::GdkEvent *event, const ::GdkRectangle *cell_area, ::GtkCellRendererState flags) -> int
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        CellArea::Context *_peel_context = reinterpret_cast<CellArea::Context *> (context);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        Gdk::Event *_peel_event = reinterpret_cast<Gdk::Event *> (event);
        const Gdk::Rectangle *_peel_cell_area = reinterpret_cast<const Gdk::Rectangle *> (cell_area);
        CellRenderer::State _peel_flags = static_cast<CellRenderer::State> (flags);
        return _peel_this->DerivedClass::vfunc_event (_peel_context, _peel_widget, _peel_event, _peel_cell_area, _peel_flags);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_focus ()
    {
      ::GtkCellAreaClass *klass = reinterpret_cast<::GtkCellAreaClass *> (this);
      klass->focus = +[] (::GtkCellArea *area, ::GtkDirectionType direction) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        DirectionType _peel_direction = static_cast<DirectionType> (direction);
        bool _peel_return = _peel_this->DerivedClass::vfunc_focus (_peel_direction);
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: foreach: casting callback from C to C++ */

    /* Unsupported for now: foreach_alloc: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_get_cell_property ()
    {
      ::GtkCellAreaClass *klass = reinterpret_cast<::GtkCellAreaClass *> (this);
      klass->get_cell_property = +[] (::GtkCellArea *area, ::GtkCellRenderer *renderer, guint property_id, ::GValue *value, ::GParamSpec *pspec) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        CellRenderer *_peel_renderer = reinterpret_cast<CellRenderer *> (renderer);
        GObject::Value *_peel_value = reinterpret_cast<GObject::Value *> (value);
        GObject::ParamSpec *_peel_pspec = reinterpret_cast<GObject::ParamSpec *> (pspec);
        _peel_this->DerivedClass::vfunc_get_cell_property (_peel_renderer, property_id, _peel_value, _peel_pspec);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_preferred_height ()
    {
      ::GtkCellAreaClass *klass = reinterpret_cast<::GtkCellAreaClass *> (this);
      klass->get_preferred_height = +[] (::GtkCellArea *area, ::GtkCellAreaContext *context, ::GtkWidget *widget, int *minimum_height, int *natural_height) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        CellArea::Context *_peel_context = reinterpret_cast<CellArea::Context *> (context);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        _peel_this->DerivedClass::vfunc_get_preferred_height (_peel_context, _peel_widget, minimum_height, natural_height);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_preferred_height_for_width ()
    {
      ::GtkCellAreaClass *klass = reinterpret_cast<::GtkCellAreaClass *> (this);
      klass->get_preferred_height_for_width = +[] (::GtkCellArea *area, ::GtkCellAreaContext *context, ::GtkWidget *widget, int width, int *minimum_height, int *natural_height) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        CellArea::Context *_peel_context = reinterpret_cast<CellArea::Context *> (context);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        _peel_this->DerivedClass::vfunc_get_preferred_height_for_width (_peel_context, _peel_widget, width, minimum_height, natural_height);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_preferred_width ()
    {
      ::GtkCellAreaClass *klass = reinterpret_cast<::GtkCellAreaClass *> (this);
      klass->get_preferred_width = +[] (::GtkCellArea *area, ::GtkCellAreaContext *context, ::GtkWidget *widget, int *minimum_width, int *natural_width) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        CellArea::Context *_peel_context = reinterpret_cast<CellArea::Context *> (context);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        _peel_this->DerivedClass::vfunc_get_preferred_width (_peel_context, _peel_widget, minimum_width, natural_width);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_preferred_width_for_height ()
    {
      ::GtkCellAreaClass *klass = reinterpret_cast<::GtkCellAreaClass *> (this);
      klass->get_preferred_width_for_height = +[] (::GtkCellArea *area, ::GtkCellAreaContext *context, ::GtkWidget *widget, int height, int *minimum_width, int *natural_width) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        CellArea::Context *_peel_context = reinterpret_cast<CellArea::Context *> (context);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        _peel_this->DerivedClass::vfunc_get_preferred_width_for_height (_peel_context, _peel_widget, height, minimum_width, natural_width);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_request_mode ()
    {
      ::GtkCellAreaClass *klass = reinterpret_cast<::GtkCellAreaClass *> (this);
      klass->get_request_mode = +[] (::GtkCellArea *area) -> ::GtkSizeRequestMode
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        SizeRequestMode _peel_return = _peel_this->DerivedClass::vfunc_get_request_mode ();
        return static_cast<::GtkSizeRequestMode> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_is_activatable ()
    {
      ::GtkCellAreaClass *klass = reinterpret_cast<::GtkCellAreaClass *> (this);
      klass->is_activatable = +[] (::GtkCellArea *area) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        bool _peel_return = _peel_this->DerivedClass::vfunc_is_activatable ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_remove ()
    {
      ::GtkCellAreaClass *klass = reinterpret_cast<::GtkCellAreaClass *> (this);
      klass->remove = +[] (::GtkCellArea *area, ::GtkCellRenderer *renderer) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        CellRenderer *_peel_renderer = reinterpret_cast<CellRenderer *> (renderer);
        _peel_this->DerivedClass::vfunc_remove (_peel_renderer);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_cell_property ()
    {
      ::GtkCellAreaClass *klass = reinterpret_cast<::GtkCellAreaClass *> (this);
      klass->set_cell_property = +[] (::GtkCellArea *area, ::GtkCellRenderer *renderer, guint property_id, const ::GValue *value, ::GParamSpec *pspec) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        CellRenderer *_peel_renderer = reinterpret_cast<CellRenderer *> (renderer);
        const GObject::Value *_peel_value = reinterpret_cast<const GObject::Value *> (value);
        GObject::ParamSpec *_peel_pspec = reinterpret_cast<GObject::ParamSpec *> (pspec);
        _peel_this->DerivedClass::vfunc_set_cell_property (_peel_renderer, property_id, _peel_value, _peel_pspec);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_snapshot ()
    {
      ::GtkCellAreaClass *klass = reinterpret_cast<::GtkCellAreaClass *> (this);
      klass->snapshot = +[] (::GtkCellArea *area, ::GtkCellAreaContext *context, ::GtkWidget *widget, ::GtkSnapshot *snapshot, const ::GdkRectangle *background_area, const ::GdkRectangle *cell_area, ::GtkCellRendererState flags, gboolean paint_focus) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        CellArea::Context *_peel_context = reinterpret_cast<CellArea::Context *> (context);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        Snapshot *_peel_snapshot = reinterpret_cast<Snapshot *> (snapshot);
        const Gdk::Rectangle *_peel_background_area = reinterpret_cast<const Gdk::Rectangle *> (background_area);
        const Gdk::Rectangle *_peel_cell_area = reinterpret_cast<const Gdk::Rectangle *> (cell_area);
        CellRenderer::State _peel_flags = static_cast<CellRenderer::State> (flags);
        bool _peel_paint_focus = !!paint_focus;
        _peel_this->DerivedClass::vfunc_snapshot (_peel_context, _peel_widget, _peel_snapshot, _peel_background_area, _peel_cell_area, _peel_flags, _peel_paint_focus);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkCellAreaClass),
                 "CellArea::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkCellAreaClass),
                 "CellArea::Class align mismatch");
}; /* class CellArea */

static_assert (sizeof (CellArea) == sizeof (::GtkCellArea),
               "CellArea size mismatch");
static_assert (alignof (CellArea) == alignof (::GtkCellArea),
               "CellArea align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GObject/ParamSpec.h>
#include <peel/Gtk/CellAreaContext.h>
