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
#include <peel/GObject/InitiallyUnowned.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Event;
struct RGBA;
struct Rectangle;
} /* namespace Gdk */

namespace Gtk
{
class /* interface */ CellEditable;
class CellRenderer;
struct Requisition;
enum class SizeRequestMode : std::underlying_type<::GtkSizeRequestMode>::type;
class Snapshot;
enum class StateFlags : std::underlying_type<::GtkStateFlags>::type;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CellRenderer> ()
{
  return gtk_cell_renderer_get_type ();
}


namespace Gtk
{
class CellRenderer : public GObject::InitiallyUnowned
{
private:
  unsigned char _placeholder[sizeof (::GtkCellRenderer) - sizeof (GObject::InitiallyUnowned)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CellRenderer () = delete;
  CellRenderer (const CellRenderer &) = delete;
  CellRenderer (CellRenderer &&) = delete;
  CellRenderer &
  operator = (const CellRenderer &) = delete;
  CellRenderer &
  operator = (CellRenderer &&) = delete;
protected:
  ~CellRenderer () = default;
public:
  enum class Mode : std::underlying_type<::GtkCellRendererMode>::type;
  enum class State : std::underlying_type<::GtkCellRendererState>::type;

  peel_arg_in (5) peel_arg_in (6) peel_nonnull_args (2, 3, 4, 5, 6)
  bool
  activate (Gdk::Event *event, Widget *widget, const char *path, const Gdk::Rectangle *background_area, const Gdk::Rectangle *cell_area, CellRenderer::State flags) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    const ::GdkRectangle *_peel_background_area = reinterpret_cast<const ::GdkRectangle *> (background_area);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GtkCellRendererState _peel_flags = static_cast<::GtkCellRendererState> (flags);
    gboolean _peel_return = gtk_cell_renderer_activate (_peel_this, _peel_event, _peel_widget, path, _peel_background_area, _peel_cell_area, _peel_flags);
    return !!_peel_return;
  }

  peel_arg_in (4) peel_arg_out (5) peel_nonnull_args (2, 4, 5)
  void
  get_aligned_area (Widget *widget, CellRenderer::State flags, const Gdk::Rectangle *cell_area, Gdk::Rectangle *aligned_area) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GtkCellRendererState _peel_flags = static_cast<::GtkCellRendererState> (flags);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GdkRectangle *_peel_aligned_area = reinterpret_cast<::GdkRectangle *> (aligned_area);
    gtk_cell_renderer_get_aligned_area (_peel_this, _peel_widget, _peel_flags, _peel_cell_area, _peel_aligned_area);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_alignment (float *xalign, float *yalign) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    gtk_cell_renderer_get_alignment (_peel_this, xalign, yalign);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_fixed_size (int *width, int *height) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    gtk_cell_renderer_get_fixed_size (_peel_this, width, height);
  }

  bool
  get_is_expanded () noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    gboolean _peel_return = gtk_cell_renderer_get_is_expanded (_peel_this);
    return !!_peel_return;
  }

  bool
  get_is_expander () noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    gboolean _peel_return = gtk_cell_renderer_get_is_expander (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_padding (int *xpad, int *ypad) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    gtk_cell_renderer_get_padding (_peel_this, xpad, ypad);
  }

  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2)
  void
  get_preferred_height (Widget *widget, int *minimum_size, int *natural_size) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_cell_renderer_get_preferred_height (_peel_this, _peel_widget, minimum_size, natural_size);
  }

  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2)
  void
  get_preferred_height_for_width (Widget *widget, int width, int *minimum_height, int *natural_height) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_cell_renderer_get_preferred_height_for_width (_peel_this, _peel_widget, width, minimum_height, natural_height);
  }

  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2)
  void
  get_preferred_size (Widget *widget, Requisition *minimum_size, Requisition *natural_size) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GtkRequisition *_peel_minimum_size = reinterpret_cast<::GtkRequisition *> (minimum_size);
    ::GtkRequisition *_peel_natural_size = reinterpret_cast<::GtkRequisition *> (natural_size);
    gtk_cell_renderer_get_preferred_size (_peel_this, _peel_widget, _peel_minimum_size, _peel_natural_size);
  }

  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2)
  void
  get_preferred_width (Widget *widget, int *minimum_size, int *natural_size) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_cell_renderer_get_preferred_width (_peel_this, _peel_widget, minimum_size, natural_size);
  }

  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2)
  void
  get_preferred_width_for_height (Widget *widget, int height, int *minimum_width, int *natural_width) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_cell_renderer_get_preferred_width_for_height (_peel_this, _peel_widget, height, minimum_width, natural_width);
  }

  SizeRequestMode
  get_request_mode () noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GtkSizeRequestMode _peel_return = gtk_cell_renderer_get_request_mode (_peel_this);
    return static_cast<SizeRequestMode> (_peel_return);
  }

  bool
  get_sensitive () noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    gboolean _peel_return = gtk_cell_renderer_get_sensitive (_peel_this);
    return !!_peel_return;
  }

  StateFlags
  get_state (Widget *widget, CellRenderer::State cell_state) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GtkCellRendererState _peel_cell_state = static_cast<::GtkCellRendererState> (cell_state);
    ::GtkStateFlags _peel_return = gtk_cell_renderer_get_state (_peel_this, _peel_widget, _peel_cell_state);
    return static_cast<StateFlags> (_peel_return);
  }

  bool
  get_visible () noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    gboolean _peel_return = gtk_cell_renderer_get_visible (_peel_this);
    return !!_peel_return;
  }

  bool
  is_activatable () noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    gboolean _peel_return = gtk_cell_renderer_is_activatable (_peel_this);
    return !!_peel_return;
  }

  void
  set_alignment (float xalign, float yalign) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    gtk_cell_renderer_set_alignment (_peel_this, xalign, yalign);
  }

  void
  set_fixed_size (int width, int height) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    gtk_cell_renderer_set_fixed_size (_peel_this, width, height);
  }

  void
  set_is_expanded (bool is_expanded) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    gboolean _peel_is_expanded = static_cast<gboolean> (is_expanded);
    gtk_cell_renderer_set_is_expanded (_peel_this, _peel_is_expanded);
  }

  void
  set_is_expander (bool is_expander) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    gboolean _peel_is_expander = static_cast<gboolean> (is_expander);
    gtk_cell_renderer_set_is_expander (_peel_this, _peel_is_expander);
  }

  void
  set_padding (int xpad, int ypad) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    gtk_cell_renderer_set_padding (_peel_this, xpad, ypad);
  }

  void
  set_sensitive (bool sensitive) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    gboolean _peel_sensitive = static_cast<gboolean> (sensitive);
    gtk_cell_renderer_set_sensitive (_peel_this, _peel_sensitive);
  }

  void
  set_visible (bool visible) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    gboolean _peel_visible = static_cast<gboolean> (visible);
    gtk_cell_renderer_set_visible (_peel_this, _peel_visible);
  }

  peel_arg_in (4) peel_arg_in (5) peel_nonnull_args (2, 3, 4, 5)
  void
  snapshot (Snapshot *snapshot, Widget *widget, const Gdk::Rectangle *background_area, const Gdk::Rectangle *cell_area, CellRenderer::State flags) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GtkSnapshot *_peel_snapshot = reinterpret_cast<::GtkSnapshot *> (snapshot);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    const ::GdkRectangle *_peel_background_area = reinterpret_cast<const ::GdkRectangle *> (background_area);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GtkCellRendererState _peel_flags = static_cast<::GtkCellRendererState> (flags);
    gtk_cell_renderer_snapshot (_peel_this, _peel_snapshot, _peel_widget, _peel_background_area, _peel_cell_area, _peel_flags);
  }

  peel_arg_in (5) peel_arg_in (6) peel_nonnull_args (3, 4, 5, 6)
  CellEditable *
  start_editing (Gdk::Event *event, Widget *widget, const char *path, const Gdk::Rectangle *background_area, const Gdk::Rectangle *cell_area, CellRenderer::State flags) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    const ::GdkRectangle *_peel_background_area = reinterpret_cast<const ::GdkRectangle *> (background_area);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GtkCellRendererState _peel_flags = static_cast<::GtkCellRendererState> (flags);
    ::GtkCellEditable *_peel_return = gtk_cell_renderer_start_editing (_peel_this, _peel_event, _peel_widget, path, _peel_background_area, _peel_cell_area, _peel_flags);
    return reinterpret_cast<CellEditable *> (_peel_return);
  }

  void
  stop_editing (bool canceled) noexcept
  {
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    gboolean _peel_canceled = static_cast<gboolean> (canceled);
    gtk_cell_renderer_stop_editing (_peel_this, _peel_canceled);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_editing_canceled (Handler &&handler, bool after = false) noexcept
  {
    return Signal<CellRenderer, void ()>::_peel_connect_by_name (this, "editing-canceled", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_editing_canceled (HandlerObject *object, void (HandlerObject::*handler_method) (CellRenderer *), bool after = false) noexcept
  {
    return Signal<CellRenderer, void ()>::_peel_connect_by_name (this, "editing-canceled", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_editing_started (Handler &&handler, bool after = false) noexcept
  {
    return Signal<CellRenderer, void (CellEditable *, const char *)>::_peel_connect_by_name (this, "editing-started", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_editing_started (HandlerObject *object, void (HandlerObject::*handler_method) (CellRenderer *, CellEditable *, const char *), bool after = false) noexcept
  {
    return Signal<CellRenderer, void (CellEditable *, const char *)>::_peel_connect_by_name (this, "editing-started", object, handler_method, after);
  }

  static peel::Property<const char *>
  prop_cell_background ()
  {
    return peel::Property<const char *> { "cell-background" };
  }

  static peel::Property<Gdk::RGBA>
  prop_cell_background_rgba ()
  {
    return peel::Property<Gdk::RGBA> { "cell-background-rgba" };
  }

  static peel::Property<bool>
  prop_cell_background_set ()
  {
    return peel::Property<bool> { "cell-background-set" };
  }

  static peel::Property<bool>
  prop_editing ()
  {
    return peel::Property<bool> { "editing" };
  }

  static peel::Property<int>
  prop_height ()
  {
    return peel::Property<int> { "height" };
  }

  static peel::Property<bool>
  prop_is_expanded ()
  {
    return peel::Property<bool> { "is-expanded" };
  }

  static peel::Property<bool>
  prop_is_expander ()
  {
    return peel::Property<bool> { "is-expander" };
  }

  static peel::Property<CellRenderer::Mode>
  prop_mode ()
  {
    return peel::Property<CellRenderer::Mode> { "mode" };
  }

  static peel::Property<bool>
  prop_sensitive ()
  {
    return peel::Property<bool> { "sensitive" };
  }

  static peel::Property<bool>
  prop_visible ()
  {
    return peel::Property<bool> { "visible" };
  }

  static peel::Property<int>
  prop_width ()
  {
    return peel::Property<int> { "width" };
  }

  static peel::Property<float>
  prop_xalign ()
  {
    return peel::Property<float> { "xalign" };
  }

  static peel::Property<unsigned>
  prop_xpad ()
  {
    return peel::Property<unsigned> { "xpad" };
  }

  static peel::Property<float>
  prop_yalign ()
  {
    return peel::Property<float> { "yalign" };
  }

  static peel::Property<unsigned>
  prop_ypad ()
  {
    return peel::Property<unsigned> { "ypad" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<CellRenderer> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_arg_in (5) peel_arg_in (6) peel_nonnull_args (2, 3, 4, 5, 6)
  bool
  parent_vfunc_activate (Gdk::Event *event, Widget *widget, const char *path, const Gdk::Rectangle *background_area, const Gdk::Rectangle *cell_area, CellRenderer::State flags) noexcept
  {
    ::GtkCellRendererClass *_peel_class = reinterpret_cast<::GtkCellRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    const ::GdkRectangle *_peel_background_area = reinterpret_cast<const ::GdkRectangle *> (background_area);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GtkCellRendererState _peel_flags = static_cast<::GtkCellRendererState> (flags);
    gboolean _peel_return = _peel_class->activate (_peel_this, _peel_event, _peel_widget, path, _peel_background_area, _peel_cell_area, _peel_flags);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_editing_canceled () noexcept
  {
    ::GtkCellRendererClass *_peel_class = reinterpret_cast<::GtkCellRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    _peel_class->editing_canceled (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  void
  parent_vfunc_editing_started (CellEditable *editable, const char *path) noexcept
  {
    ::GtkCellRendererClass *_peel_class = reinterpret_cast<::GtkCellRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GtkCellEditable *_peel_editable = reinterpret_cast<::GtkCellEditable *> (editable);
    _peel_class->editing_started (_peel_this, _peel_editable, path);
  }

  template<typename DerivedClass>
  peel_arg_in (4) peel_arg_out (5) peel_nonnull_args (2, 4, 5)
  void
  parent_vfunc_get_aligned_area (Widget *widget, CellRenderer::State flags, const Gdk::Rectangle *cell_area, Gdk::Rectangle *aligned_area) noexcept
  {
    ::GtkCellRendererClass *_peel_class = reinterpret_cast<::GtkCellRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    ::GtkCellRendererState _peel_flags = static_cast<::GtkCellRendererState> (flags);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GdkRectangle *_peel_aligned_area = reinterpret_cast<::GdkRectangle *> (aligned_area);
    _peel_class->get_aligned_area (_peel_this, _peel_widget, _peel_flags, _peel_cell_area, _peel_aligned_area);
  }

  template<typename DerivedClass>
  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2)
  void
  parent_vfunc_get_preferred_height (Widget *widget, int *minimum_size, int *natural_size) noexcept
  {
    ::GtkCellRendererClass *_peel_class = reinterpret_cast<::GtkCellRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    _peel_class->get_preferred_height (_peel_this, _peel_widget, minimum_size, natural_size);
  }

  template<typename DerivedClass>
  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2)
  void
  parent_vfunc_get_preferred_height_for_width (Widget *widget, int width, int *minimum_height, int *natural_height) noexcept
  {
    ::GtkCellRendererClass *_peel_class = reinterpret_cast<::GtkCellRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    _peel_class->get_preferred_height_for_width (_peel_this, _peel_widget, width, minimum_height, natural_height);
  }

  template<typename DerivedClass>
  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2)
  void
  parent_vfunc_get_preferred_width (Widget *widget, int *minimum_size, int *natural_size) noexcept
  {
    ::GtkCellRendererClass *_peel_class = reinterpret_cast<::GtkCellRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    _peel_class->get_preferred_width (_peel_this, _peel_widget, minimum_size, natural_size);
  }

  template<typename DerivedClass>
  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2)
  void
  parent_vfunc_get_preferred_width_for_height (Widget *widget, int height, int *minimum_width, int *natural_width) noexcept
  {
    ::GtkCellRendererClass *_peel_class = reinterpret_cast<::GtkCellRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    _peel_class->get_preferred_width_for_height (_peel_this, _peel_widget, height, minimum_width, natural_width);
  }

  template<typename DerivedClass>
  SizeRequestMode
  parent_vfunc_get_request_mode () noexcept
  {
    ::GtkCellRendererClass *_peel_class = reinterpret_cast<::GtkCellRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GtkSizeRequestMode _peel_return = _peel_class->get_request_mode (_peel_this);
    return static_cast<SizeRequestMode> (_peel_return);
  }

  template<typename DerivedClass>
  peel_arg_in (4) peel_arg_in (5) peel_nonnull_args (2, 3, 4, 5)
  void
  parent_vfunc_snapshot (Snapshot *snapshot, Widget *widget, const Gdk::Rectangle *background_area, const Gdk::Rectangle *cell_area, CellRenderer::State flags) noexcept
  {
    ::GtkCellRendererClass *_peel_class = reinterpret_cast<::GtkCellRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GtkSnapshot *_peel_snapshot = reinterpret_cast<::GtkSnapshot *> (snapshot);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    const ::GdkRectangle *_peel_background_area = reinterpret_cast<const ::GdkRectangle *> (background_area);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GtkCellRendererState _peel_flags = static_cast<::GtkCellRendererState> (flags);
    _peel_class->snapshot (_peel_this, _peel_snapshot, _peel_widget, _peel_background_area, _peel_cell_area, _peel_flags);
  }

  template<typename DerivedClass>
  peel_arg_in (5) peel_arg_in (6) peel_nonnull_args (3, 4, 5, 6)
  CellEditable *
  parent_vfunc_start_editing (Gdk::Event *event, Widget *widget, const char *path, const Gdk::Rectangle *background_area, const Gdk::Rectangle *cell_area, CellRenderer::State flags) noexcept
  {
    ::GtkCellRendererClass *_peel_class = reinterpret_cast<::GtkCellRendererClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkCellRenderer *_peel_this = reinterpret_cast<::GtkCellRenderer *> (this);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    const ::GdkRectangle *_peel_background_area = reinterpret_cast<const ::GdkRectangle *> (background_area);
    const ::GdkRectangle *_peel_cell_area = reinterpret_cast<const ::GdkRectangle *> (cell_area);
    ::GtkCellRendererState _peel_flags = static_cast<::GtkCellRendererState> (flags);
    ::GtkCellEditable *_peel_return = _peel_class->start_editing (_peel_this, _peel_event, _peel_widget, path, _peel_background_area, _peel_cell_area, _peel_flags);
    return reinterpret_cast<CellEditable *> (_peel_return);
  }

public:
  class Class : public GObject::InitiallyUnowned::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkCellRendererClass) - sizeof (GObject::InitiallyUnowned::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_activate ()
    {
      ::GtkCellRendererClass *klass = reinterpret_cast<::GtkCellRendererClass *> (this);
      klass->activate = +[] (::GtkCellRenderer *cell, ::GdkEvent *event, ::GtkWidget *widget, const char *path, const ::GdkRectangle *background_area, const ::GdkRectangle *cell_area, ::GtkCellRendererState flags) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell);
        Gdk::Event *_peel_event = reinterpret_cast<Gdk::Event *> (event);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        const Gdk::Rectangle *_peel_background_area = reinterpret_cast<const Gdk::Rectangle *> (background_area);
        const Gdk::Rectangle *_peel_cell_area = reinterpret_cast<const Gdk::Rectangle *> (cell_area);
        CellRenderer::State _peel_flags = static_cast<CellRenderer::State> (flags);
        bool _peel_return = _peel_this->DerivedClass::vfunc_activate (_peel_event, _peel_widget, path, _peel_background_area, _peel_cell_area, _peel_flags);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_editing_canceled ()
    {
      ::GtkCellRendererClass *klass = reinterpret_cast<::GtkCellRendererClass *> (this);
      klass->editing_canceled = +[] (::GtkCellRenderer *cell) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell);
        _peel_this->DerivedClass::vfunc_editing_canceled ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_editing_started ()
    {
      ::GtkCellRendererClass *klass = reinterpret_cast<::GtkCellRendererClass *> (this);
      klass->editing_started = +[] (::GtkCellRenderer *cell, ::GtkCellEditable *editable, const char *path) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell);
        CellEditable *_peel_editable = reinterpret_cast<CellEditable *> (editable);
        _peel_this->DerivedClass::vfunc_editing_started (_peel_editable, path);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_aligned_area ()
    {
      ::GtkCellRendererClass *klass = reinterpret_cast<::GtkCellRendererClass *> (this);
      klass->get_aligned_area = +[] (::GtkCellRenderer *cell, ::GtkWidget *widget, ::GtkCellRendererState flags, const ::GdkRectangle *cell_area, ::GdkRectangle *aligned_area) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        CellRenderer::State _peel_flags = static_cast<CellRenderer::State> (flags);
        const Gdk::Rectangle *_peel_cell_area = reinterpret_cast<const Gdk::Rectangle *> (cell_area);
        Gdk::Rectangle *_peel_aligned_area = reinterpret_cast<Gdk::Rectangle *> (aligned_area);
        _peel_this->DerivedClass::vfunc_get_aligned_area (_peel_widget, _peel_flags, _peel_cell_area, _peel_aligned_area);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_preferred_height ()
    {
      ::GtkCellRendererClass *klass = reinterpret_cast<::GtkCellRendererClass *> (this);
      klass->get_preferred_height = +[] (::GtkCellRenderer *cell, ::GtkWidget *widget, int *minimum_size, int *natural_size) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        _peel_this->DerivedClass::vfunc_get_preferred_height (_peel_widget, minimum_size, natural_size);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_preferred_height_for_width ()
    {
      ::GtkCellRendererClass *klass = reinterpret_cast<::GtkCellRendererClass *> (this);
      klass->get_preferred_height_for_width = +[] (::GtkCellRenderer *cell, ::GtkWidget *widget, int width, int *minimum_height, int *natural_height) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        _peel_this->DerivedClass::vfunc_get_preferred_height_for_width (_peel_widget, width, minimum_height, natural_height);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_preferred_width ()
    {
      ::GtkCellRendererClass *klass = reinterpret_cast<::GtkCellRendererClass *> (this);
      klass->get_preferred_width = +[] (::GtkCellRenderer *cell, ::GtkWidget *widget, int *minimum_size, int *natural_size) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        _peel_this->DerivedClass::vfunc_get_preferred_width (_peel_widget, minimum_size, natural_size);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_preferred_width_for_height ()
    {
      ::GtkCellRendererClass *klass = reinterpret_cast<::GtkCellRendererClass *> (this);
      klass->get_preferred_width_for_height = +[] (::GtkCellRenderer *cell, ::GtkWidget *widget, int height, int *minimum_width, int *natural_width) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        _peel_this->DerivedClass::vfunc_get_preferred_width_for_height (_peel_widget, height, minimum_width, natural_width);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_request_mode ()
    {
      ::GtkCellRendererClass *klass = reinterpret_cast<::GtkCellRendererClass *> (this);
      klass->get_request_mode = +[] (::GtkCellRenderer *cell) -> ::GtkSizeRequestMode
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell);
        SizeRequestMode _peel_return = _peel_this->DerivedClass::vfunc_get_request_mode ();
        return static_cast<::GtkSizeRequestMode> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_snapshot ()
    {
      ::GtkCellRendererClass *klass = reinterpret_cast<::GtkCellRendererClass *> (this);
      klass->snapshot = +[] (::GtkCellRenderer *cell, ::GtkSnapshot *snapshot, ::GtkWidget *widget, const ::GdkRectangle *background_area, const ::GdkRectangle *cell_area, ::GtkCellRendererState flags) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell);
        Snapshot *_peel_snapshot = reinterpret_cast<Snapshot *> (snapshot);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        const Gdk::Rectangle *_peel_background_area = reinterpret_cast<const Gdk::Rectangle *> (background_area);
        const Gdk::Rectangle *_peel_cell_area = reinterpret_cast<const Gdk::Rectangle *> (cell_area);
        CellRenderer::State _peel_flags = static_cast<CellRenderer::State> (flags);
        _peel_this->DerivedClass::vfunc_snapshot (_peel_snapshot, _peel_widget, _peel_background_area, _peel_cell_area, _peel_flags);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_start_editing ()
    {
      ::GtkCellRendererClass *klass = reinterpret_cast<::GtkCellRendererClass *> (this);
      klass->start_editing = +[] (::GtkCellRenderer *cell, ::GdkEvent *event, ::GtkWidget *widget, const char *path, const ::GdkRectangle *background_area, const ::GdkRectangle *cell_area, ::GtkCellRendererState flags) -> ::GtkCellEditable *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell);
        Gdk::Event *_peel_event = reinterpret_cast<Gdk::Event *> (event);
        Widget *_peel_widget = reinterpret_cast<Widget *> (widget);
        const Gdk::Rectangle *_peel_background_area = reinterpret_cast<const Gdk::Rectangle *> (background_area);
        const Gdk::Rectangle *_peel_cell_area = reinterpret_cast<const Gdk::Rectangle *> (cell_area);
        CellRenderer::State _peel_flags = static_cast<CellRenderer::State> (flags);
        CellEditable *_peel_return = _peel_this->DerivedClass::vfunc_start_editing (_peel_event, _peel_widget, path, _peel_background_area, _peel_cell_area, _peel_flags);
        return reinterpret_cast<::GtkCellEditable *> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkCellRendererClass),
                 "CellRenderer::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkCellRendererClass),
                 "CellRenderer::Class align mismatch");
}; /* class CellRenderer */

static_assert (sizeof (CellRenderer) == sizeof (::GtkCellRenderer),
               "CellRenderer size mismatch");
static_assert (alignof (CellRenderer) == alignof (::GtkCellRenderer),
               "CellRenderer align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
