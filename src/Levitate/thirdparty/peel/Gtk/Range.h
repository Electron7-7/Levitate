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
namespace Gdk
{
struct Rectangle;
} /* namespace Gdk */

namespace Gtk
{
class Adjustment;
struct Border;
class Range;
enum class ScrollType : std::underlying_type<::GtkScrollType>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Range> ()
{
  return gtk_range_get_type ();
}


namespace Gtk
{
class Range : public Widget
/* implements Accessible, AccessibleRange, Buildable, Constraint::Target, Orientable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Range () = delete;
  Range (const Range &) = delete;
  Range (Range &&) = delete;
  Range &
  operator = (const Range &) = delete;
  Range &
  operator = (Range &&) = delete;
protected:
  ~Range () = default;
public:

  peel_returns_nonnull
  Adjustment *
  get_adjustment () noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    ::GtkAdjustment *_peel_return = gtk_range_get_adjustment (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Adjustment *> (_peel_return);
  }

  double
  get_fill_level () noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    return gtk_range_get_fill_level (_peel_this);
  }

  bool
  get_flippable () noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    gboolean _peel_return = gtk_range_get_flippable (_peel_this);
    return !!_peel_return;
  }

  bool
  get_inverted () noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    gboolean _peel_return = gtk_range_get_inverted (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_range_rect (Gdk::Rectangle *range_rect) noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    ::GdkRectangle *_peel_range_rect = reinterpret_cast<::GdkRectangle *> (range_rect);
    gtk_range_get_range_rect (_peel_this, _peel_range_rect);
  }

  bool
  get_restrict_to_fill_level () noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    gboolean _peel_return = gtk_range_get_restrict_to_fill_level (_peel_this);
    return !!_peel_return;
  }

  int
  get_round_digits () noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    return gtk_range_get_round_digits (_peel_this);
  }

  bool
  get_show_fill_level () noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    gboolean _peel_return = gtk_range_get_show_fill_level (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_slider_range (int *slider_start, int *slider_end) noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    gtk_range_get_slider_range (_peel_this, slider_start, slider_end);
  }

  bool
  get_slider_size_fixed () noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    gboolean _peel_return = gtk_range_get_slider_size_fixed (_peel_this);
    return !!_peel_return;
  }

  double
  get_value () noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    return gtk_range_get_value (_peel_this);
  }

  void
  set_adjustment (peel::FloatPtr<Adjustment> adjustment) noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    ::GtkAdjustment *_peel_adjustment = reinterpret_cast<::GtkAdjustment *> (std::move (adjustment).release_floating_ptr ());
    gtk_range_set_adjustment (_peel_this, _peel_adjustment);
  }

  void
  set_fill_level (double fill_level) noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    gtk_range_set_fill_level (_peel_this, fill_level);
  }

  void
  set_flippable (bool flippable) noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    gboolean _peel_flippable = static_cast<gboolean> (flippable);
    gtk_range_set_flippable (_peel_this, _peel_flippable);
  }

  void
  set_increments (double step, double page) noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    gtk_range_set_increments (_peel_this, step, page);
  }

  void
  set_inverted (bool setting) noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    gboolean _peel_setting = static_cast<gboolean> (setting);
    gtk_range_set_inverted (_peel_this, _peel_setting);
  }

  void
  set_range (double min, double max) noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    gtk_range_set_range (_peel_this, min, max);
  }

  void
  set_restrict_to_fill_level (bool restrict_to_fill_level) noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    gboolean _peel_restrict_to_fill_level = static_cast<gboolean> (restrict_to_fill_level);
    gtk_range_set_restrict_to_fill_level (_peel_this, _peel_restrict_to_fill_level);
  }

  void
  set_round_digits (int round_digits) noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    gtk_range_set_round_digits (_peel_this, round_digits);
  }

  void
  set_show_fill_level (bool show_fill_level) noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    gboolean _peel_show_fill_level = static_cast<gboolean> (show_fill_level);
    gtk_range_set_show_fill_level (_peel_this, _peel_show_fill_level);
  }

  void
  set_slider_size_fixed (bool size_fixed) noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    gboolean _peel_size_fixed = static_cast<gboolean> (size_fixed);
    gtk_range_set_slider_size_fixed (_peel_this, _peel_size_fixed);
  }

  void
  set_value (double value) noexcept
  {
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    gtk_range_set_value (_peel_this, value);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_adjust_bounds (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Range, void (double)>::_peel_connect_by_name (this, "adjust-bounds", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_adjust_bounds (HandlerObject *object, void (HandlerObject::*handler_method) (Range *, double), bool after = false) noexcept
  {
    return Signal<Range, void (double)>::_peel_connect_by_name (this, "adjust-bounds", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_change_value (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Range, bool (ScrollType, double)>::_peel_connect_by_name (this, "change-value", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_change_value (HandlerObject *object, bool (HandlerObject::*handler_method) (Range *, ScrollType, double), bool after = false) noexcept
  {
    return Signal<Range, bool (ScrollType, double)>::_peel_connect_by_name (this, "change-value", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_move_slider (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Range, void (ScrollType)>::_peel_connect_by_name (this, "move-slider", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_move_slider (HandlerObject *object, void (HandlerObject::*handler_method) (Range *, ScrollType), bool after = false) noexcept
  {
    return Signal<Range, void (ScrollType)>::_peel_connect_by_name (this, "move-slider", object, handler_method, after);
  }

  void
  emit_move_slider (ScrollType step) noexcept
  {
    return Signal<Range, void (ScrollType)>::_peel_emit_by_name (this, "move-slider", step);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_value_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Range, void ()>::_peel_connect_by_name (this, "value-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_value_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Range *), bool after = false) noexcept
  {
    return Signal<Range, void ()>::_peel_connect_by_name (this, "value-changed", object, handler_method, after);
  }

  static peel::Property<Adjustment>
  prop_adjustment ()
  {
    return peel::Property<Adjustment> { "adjustment" };
  }

  static peel::Property<double>
  prop_fill_level ()
  {
    return peel::Property<double> { "fill-level" };
  }

  static peel::Property<bool>
  prop_inverted ()
  {
    return peel::Property<bool> { "inverted" };
  }

  static peel::Property<bool>
  prop_restrict_to_fill_level ()
  {
    return peel::Property<bool> { "restrict-to-fill-level" };
  }

  static peel::Property<int>
  prop_round_digits ()
  {
    return peel::Property<int> { "round-digits" };
  }

  static peel::Property<bool>
  prop_show_fill_level ()
  {
    return peel::Property<bool> { "show-fill-level" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Range> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_adjust_bounds (double new_value) noexcept
  {
    ::GtkRangeClass *_peel_class = reinterpret_cast<::GtkRangeClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    _peel_class->adjust_bounds (_peel_this, new_value);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_change_value (ScrollType scroll, double new_value) noexcept
  {
    ::GtkRangeClass *_peel_class = reinterpret_cast<::GtkRangeClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    ::GtkScrollType _peel_scroll = static_cast<::GtkScrollType> (scroll);
    gboolean _peel_return = _peel_class->change_value (_peel_this, _peel_scroll, new_value);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_get_range_border (Border *border_) noexcept
  {
    ::GtkRangeClass *_peel_class = reinterpret_cast<::GtkRangeClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    ::GtkBorder *_peel_border_ = reinterpret_cast<::GtkBorder *> (border_);
    _peel_class->get_range_border (_peel_this, _peel_border_);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_move_slider (ScrollType scroll) noexcept
  {
    ::GtkRangeClass *_peel_class = reinterpret_cast<::GtkRangeClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    ::GtkScrollType _peel_scroll = static_cast<::GtkScrollType> (scroll);
    _peel_class->move_slider (_peel_this, _peel_scroll);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_value_changed () noexcept
  {
    ::GtkRangeClass *_peel_class = reinterpret_cast<::GtkRangeClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkRange *_peel_this = reinterpret_cast<::GtkRange *> (this);
    _peel_class->value_changed (_peel_this);
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkRangeClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_adjust_bounds ()
    {
      ::GtkRangeClass *klass = reinterpret_cast<::GtkRangeClass *> (this);
      klass->adjust_bounds = +[] (::GtkRange *range, double new_value) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (range);
        _peel_this->DerivedClass::vfunc_adjust_bounds (new_value);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_change_value ()
    {
      ::GtkRangeClass *klass = reinterpret_cast<::GtkRangeClass *> (this);
      klass->change_value = +[] (::GtkRange *range, ::GtkScrollType scroll, double new_value) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (range);
        ScrollType _peel_scroll = static_cast<ScrollType> (scroll);
        bool _peel_return = _peel_this->DerivedClass::vfunc_change_value (_peel_scroll, new_value);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_range_border ()
    {
      ::GtkRangeClass *klass = reinterpret_cast<::GtkRangeClass *> (this);
      klass->get_range_border = +[] (::GtkRange *range, ::GtkBorder *border_) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (range);
        Border *_peel_border_ = reinterpret_cast<Border *> (border_);
        _peel_this->DerivedClass::vfunc_get_range_border (_peel_border_);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_move_slider ()
    {
      ::GtkRangeClass *klass = reinterpret_cast<::GtkRangeClass *> (this);
      klass->move_slider = +[] (::GtkRange *range, ::GtkScrollType scroll) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (range);
        ScrollType _peel_scroll = static_cast<ScrollType> (scroll);
        _peel_this->DerivedClass::vfunc_move_slider (_peel_scroll);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_value_changed ()
    {
      ::GtkRangeClass *klass = reinterpret_cast<::GtkRangeClass *> (this);
      klass->value_changed = +[] (::GtkRange *range) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (range);
        _peel_this->DerivedClass::vfunc_value_changed ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkRangeClass),
                 "Range::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkRangeClass),
                 "Range::Class align mismatch");
}; /* class Range */

static_assert (sizeof (Range) == sizeof (::GtkRange),
               "Range size mismatch");
static_assert (alignof (Range) == alignof (::GtkRange),
               "Range align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Adjustment.h>
