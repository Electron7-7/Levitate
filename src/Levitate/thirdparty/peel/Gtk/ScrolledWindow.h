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
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class Adjustment;
enum class CornerType : std::underlying_type<::GtkCornerType>::type;
enum class DirectionType : std::underlying_type<::GtkDirectionType>::type;
enum class PolicyType : std::underlying_type<::GtkPolicyType>::type;
enum class PositionType : std::underlying_type<::GtkPositionType>::type;
enum class ScrollType : std::underlying_type<::GtkScrollType>::type;
class ScrolledWindow;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ScrolledWindow> ()
{
  return gtk_scrolled_window_get_type ();
}


namespace Gtk
{
class ScrolledWindow : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ScrolledWindow () = delete;
  ScrolledWindow (const ScrolledWindow &) = delete;
  ScrolledWindow (ScrolledWindow &&) = delete;
  ScrolledWindow &
  operator = (const ScrolledWindow &) = delete;
  ScrolledWindow &
  operator = (ScrolledWindow &&) = delete;
  ~ScrolledWindow () = delete;
public:

  static peel::FloatPtr<ScrolledWindow>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_scrolled_window_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<ScrolledWindow> (reinterpret_cast<ScrolledWindow *> (_peel_return));
  }

  Widget *
  get_child () noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    ::GtkWidget *_peel_return = gtk_scrolled_window_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  peel_returns_nonnull
  Adjustment *
  get_hadjustment () noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    ::GtkAdjustment *_peel_return = gtk_scrolled_window_get_hadjustment (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Adjustment *> (_peel_return);
  }

  bool
  get_has_frame () noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    gboolean _peel_return = gtk_scrolled_window_get_has_frame (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  Widget *
  get_hscrollbar () noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    ::GtkWidget *_peel_return = gtk_scrolled_window_get_hscrollbar (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_kinetic_scrolling () noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    gboolean _peel_return = gtk_scrolled_window_get_kinetic_scrolling (_peel_this);
    return !!_peel_return;
  }

  int
  get_max_content_height () noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    return gtk_scrolled_window_get_max_content_height (_peel_this);
  }

  int
  get_max_content_width () noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    return gtk_scrolled_window_get_max_content_width (_peel_this);
  }

  int
  get_min_content_height () noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    return gtk_scrolled_window_get_min_content_height (_peel_this);
  }

  int
  get_min_content_width () noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    return gtk_scrolled_window_get_min_content_width (_peel_this);
  }

  bool
  get_overlay_scrolling () noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    gboolean _peel_return = gtk_scrolled_window_get_overlay_scrolling (_peel_this);
    return !!_peel_return;
  }

  CornerType
  get_placement () noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    ::GtkCornerType _peel_return = gtk_scrolled_window_get_placement (_peel_this);
    return static_cast<CornerType> (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_policy (PolicyType *hscrollbar_policy, PolicyType *vscrollbar_policy) noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    ::GtkPolicyType *_peel_hscrollbar_policy = reinterpret_cast<::GtkPolicyType *> (hscrollbar_policy);
    ::GtkPolicyType *_peel_vscrollbar_policy = reinterpret_cast<::GtkPolicyType *> (vscrollbar_policy);
    gtk_scrolled_window_get_policy (_peel_this, _peel_hscrollbar_policy, _peel_vscrollbar_policy);
  }

  bool
  get_propagate_natural_height () noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    gboolean _peel_return = gtk_scrolled_window_get_propagate_natural_height (_peel_this);
    return !!_peel_return;
  }

  bool
  get_propagate_natural_width () noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    gboolean _peel_return = gtk_scrolled_window_get_propagate_natural_width (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  Adjustment *
  get_vadjustment () noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    ::GtkAdjustment *_peel_return = gtk_scrolled_window_get_vadjustment (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Adjustment *> (_peel_return);
  }

  peel_returns_nonnull
  Widget *
  get_vscrollbar () noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    ::GtkWidget *_peel_return = gtk_scrolled_window_get_vscrollbar (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  void
  set_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_scrolled_window_set_child (_peel_this, _peel_child);
  }

  void
  set_hadjustment (peel::FloatPtr<Adjustment> hadjustment) noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    ::GtkAdjustment *_peel_hadjustment = reinterpret_cast<::GtkAdjustment *> (std::move (hadjustment).release_floating_ptr ());
    gtk_scrolled_window_set_hadjustment (_peel_this, _peel_hadjustment);
  }

  void
  set_has_frame (bool has_frame) noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    gboolean _peel_has_frame = static_cast<gboolean> (has_frame);
    gtk_scrolled_window_set_has_frame (_peel_this, _peel_has_frame);
  }

  void
  set_kinetic_scrolling (bool kinetic_scrolling) noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    gboolean _peel_kinetic_scrolling = static_cast<gboolean> (kinetic_scrolling);
    gtk_scrolled_window_set_kinetic_scrolling (_peel_this, _peel_kinetic_scrolling);
  }

  void
  set_max_content_height (int height) noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    gtk_scrolled_window_set_max_content_height (_peel_this, height);
  }

  void
  set_max_content_width (int width) noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    gtk_scrolled_window_set_max_content_width (_peel_this, width);
  }

  void
  set_min_content_height (int height) noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    gtk_scrolled_window_set_min_content_height (_peel_this, height);
  }

  void
  set_min_content_width (int width) noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    gtk_scrolled_window_set_min_content_width (_peel_this, width);
  }

  void
  set_overlay_scrolling (bool overlay_scrolling) noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    gboolean _peel_overlay_scrolling = static_cast<gboolean> (overlay_scrolling);
    gtk_scrolled_window_set_overlay_scrolling (_peel_this, _peel_overlay_scrolling);
  }

  void
  set_placement (CornerType window_placement) noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    ::GtkCornerType _peel_window_placement = static_cast<::GtkCornerType> (window_placement);
    gtk_scrolled_window_set_placement (_peel_this, _peel_window_placement);
  }

  void
  set_policy (PolicyType hscrollbar_policy, PolicyType vscrollbar_policy) noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    ::GtkPolicyType _peel_hscrollbar_policy = static_cast<::GtkPolicyType> (hscrollbar_policy);
    ::GtkPolicyType _peel_vscrollbar_policy = static_cast<::GtkPolicyType> (vscrollbar_policy);
    gtk_scrolled_window_set_policy (_peel_this, _peel_hscrollbar_policy, _peel_vscrollbar_policy);
  }

  void
  set_propagate_natural_height (bool propagate) noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    gboolean _peel_propagate = static_cast<gboolean> (propagate);
    gtk_scrolled_window_set_propagate_natural_height (_peel_this, _peel_propagate);
  }

  void
  set_propagate_natural_width (bool propagate) noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    gboolean _peel_propagate = static_cast<gboolean> (propagate);
    gtk_scrolled_window_set_propagate_natural_width (_peel_this, _peel_propagate);
  }

  void
  set_vadjustment (peel::FloatPtr<Adjustment> vadjustment) noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    ::GtkAdjustment *_peel_vadjustment = reinterpret_cast<::GtkAdjustment *> (std::move (vadjustment).release_floating_ptr ());
    gtk_scrolled_window_set_vadjustment (_peel_this, _peel_vadjustment);
  }

  void
  unset_placement () noexcept
  {
    ::GtkScrolledWindow *_peel_this = reinterpret_cast<::GtkScrolledWindow *> (this);
    gtk_scrolled_window_unset_placement (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_edge_overshot (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ScrolledWindow, void (PositionType)>::_peel_connect_by_name (this, "edge-overshot", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_edge_overshot (HandlerObject *object, void (HandlerObject::*handler_method) (ScrolledWindow *, PositionType), bool after = false) noexcept
  {
    return Signal<ScrolledWindow, void (PositionType)>::_peel_connect_by_name (this, "edge-overshot", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_edge_reached (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ScrolledWindow, void (PositionType)>::_peel_connect_by_name (this, "edge-reached", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_edge_reached (HandlerObject *object, void (HandlerObject::*handler_method) (ScrolledWindow *, PositionType), bool after = false) noexcept
  {
    return Signal<ScrolledWindow, void (PositionType)>::_peel_connect_by_name (this, "edge-reached", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_move_focus_out (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ScrolledWindow, void (DirectionType)>::_peel_connect_by_name (this, "move-focus-out", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_move_focus_out (HandlerObject *object, void (HandlerObject::*handler_method) (ScrolledWindow *, DirectionType), bool after = false) noexcept
  {
    return Signal<ScrolledWindow, void (DirectionType)>::_peel_connect_by_name (this, "move-focus-out", object, handler_method, after);
  }

  void
  emit_move_focus_out (DirectionType direction_type) noexcept
  {
    return Signal<ScrolledWindow, void (DirectionType)>::_peel_emit_by_name (this, "move-focus-out", direction_type);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_scroll_child (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ScrolledWindow, bool (ScrollType, bool)>::_peel_connect_by_name (this, "scroll-child", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_scroll_child (HandlerObject *object, bool (HandlerObject::*handler_method) (ScrolledWindow *, ScrollType, bool), bool after = false) noexcept
  {
    return Signal<ScrolledWindow, bool (ScrollType, bool)>::_peel_connect_by_name (this, "scroll-child", object, handler_method, after);
  }

  bool
  emit_scroll_child (ScrollType scroll, bool horizontal) noexcept
  {
    return Signal<ScrolledWindow, bool (ScrollType, bool)>::_peel_emit_by_name (this, "scroll-child", scroll, horizontal);
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<Adjustment>
  prop_hadjustment ()
  {
    return peel::Property<Adjustment> { "hadjustment" };
  }

  static peel::Property<bool>
  prop_has_frame ()
  {
    return peel::Property<bool> { "has-frame" };
  }

  static peel::Property<PolicyType>
  prop_hscrollbar_policy ()
  {
    return peel::Property<PolicyType> { "hscrollbar-policy" };
  }

  static peel::Property<bool>
  prop_kinetic_scrolling ()
  {
    return peel::Property<bool> { "kinetic-scrolling" };
  }

  static peel::Property<int>
  prop_max_content_height ()
  {
    return peel::Property<int> { "max-content-height" };
  }

  static peel::Property<int>
  prop_max_content_width ()
  {
    return peel::Property<int> { "max-content-width" };
  }

  static peel::Property<int>
  prop_min_content_height ()
  {
    return peel::Property<int> { "min-content-height" };
  }

  static peel::Property<int>
  prop_min_content_width ()
  {
    return peel::Property<int> { "min-content-width" };
  }

  static peel::Property<bool>
  prop_overlay_scrolling ()
  {
    return peel::Property<bool> { "overlay-scrolling" };
  }

  static peel::Property<bool>
  prop_propagate_natural_height ()
  {
    return peel::Property<bool> { "propagate-natural-height" };
  }

  static peel::Property<bool>
  prop_propagate_natural_width ()
  {
    return peel::Property<bool> { "propagate-natural-width" };
  }

  static peel::Property<Adjustment>
  prop_vadjustment ()
  {
    return peel::Property<Adjustment> { "vadjustment" };
  }

  static peel::Property<PolicyType>
  prop_vscrollbar_policy ()
  {
    return peel::Property<PolicyType> { "vscrollbar-policy" };
  }

  static peel::Property<CornerType>
  prop_window_placement ()
  {
    return peel::Property<CornerType> { "window-placement" };
  }
}; /* class ScrolledWindow */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Adjustment.h>
