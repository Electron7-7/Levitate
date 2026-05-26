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
#include <peel/Gtk/Range.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class Adjustment;
enum class Orientation : std::underlying_type<::GtkOrientation>::type;
enum class PositionType : std::underlying_type<::GtkPositionType>::type;
class Scale;
} /* namespace Gtk */

namespace Pango
{
class Layout;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Scale> ()
{
  return gtk_scale_get_type ();
}


namespace Gtk
{
class Scale : public Range
/* implements Accessible, AccessibleRange, Buildable, Constraint::Target, Orientable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Scale () = delete;
  Scale (const Scale &) = delete;
  Scale (Scale &&) = delete;
  Scale &
  operator = (const Scale &) = delete;
  Scale &
  operator = (Scale &&) = delete;
protected:
  ~Scale () = default;
public:

  static peel::FloatPtr<Scale>
  create (Orientation orientation, Adjustment *adjustment) noexcept
  {
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    ::GtkAdjustment *_peel_adjustment = reinterpret_cast<::GtkAdjustment *> (adjustment);
    ::GtkWidget *_peel_return = gtk_scale_new (_peel_orientation, _peel_adjustment);
    peel_assume (_peel_return);
    return peel::FloatPtr<Scale> (reinterpret_cast<Scale *> (_peel_return));
  }

  static peel::FloatPtr<Scale>
  create_with_range (Orientation orientation, double min, double max, double step) noexcept
  {
    ::GtkOrientation _peel_orientation = static_cast<::GtkOrientation> (orientation);
    ::GtkWidget *_peel_return = gtk_scale_new_with_range (_peel_orientation, min, max, step);
    peel_assume (_peel_return);
    return peel::FloatPtr<Scale> (reinterpret_cast<Scale *> (_peel_return));
  }

  void
  add_mark (double value, PositionType position, const char *markup) noexcept
  {
    ::GtkScale *_peel_this = reinterpret_cast<::GtkScale *> (this);
    ::GtkPositionType _peel_position = static_cast<::GtkPositionType> (position);
    gtk_scale_add_mark (_peel_this, value, _peel_position, markup);
  }

  void
  clear_marks () noexcept
  {
    ::GtkScale *_peel_this = reinterpret_cast<::GtkScale *> (this);
    gtk_scale_clear_marks (_peel_this);
  }

  int
  get_digits () noexcept
  {
    ::GtkScale *_peel_this = reinterpret_cast<::GtkScale *> (this);
    return gtk_scale_get_digits (_peel_this);
  }

  bool
  get_draw_value () noexcept
  {
    ::GtkScale *_peel_this = reinterpret_cast<::GtkScale *> (this);
    gboolean _peel_return = gtk_scale_get_draw_value (_peel_this);
    return !!_peel_return;
  }

  bool
  get_has_origin () noexcept
  {
    ::GtkScale *_peel_this = reinterpret_cast<::GtkScale *> (this);
    gboolean _peel_return = gtk_scale_get_has_origin (_peel_this);
    return !!_peel_return;
  }

  Pango::Layout *
  get_layout () noexcept
  {
    ::GtkScale *_peel_this = reinterpret_cast<::GtkScale *> (this);
    ::PangoLayout *_peel_return = gtk_scale_get_layout (_peel_this);
    return reinterpret_cast<Pango::Layout *> (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_layout_offsets (int *x, int *y) noexcept
  {
    ::GtkScale *_peel_this = reinterpret_cast<::GtkScale *> (this);
    gtk_scale_get_layout_offsets (_peel_this, x, y);
  }

  PositionType
  get_value_pos () noexcept
  {
    ::GtkScale *_peel_this = reinterpret_cast<::GtkScale *> (this);
    ::GtkPositionType _peel_return = gtk_scale_get_value_pos (_peel_this);
    return static_cast<PositionType> (_peel_return);
  }

  void
  set_digits (int digits) noexcept
  {
    ::GtkScale *_peel_this = reinterpret_cast<::GtkScale *> (this);
    gtk_scale_set_digits (_peel_this, digits);
  }

  void
  set_draw_value (bool draw_value) noexcept
  {
    ::GtkScale *_peel_this = reinterpret_cast<::GtkScale *> (this);
    gboolean _peel_draw_value = static_cast<gboolean> (draw_value);
    gtk_scale_set_draw_value (_peel_this, _peel_draw_value);
  }

  template<typename ScaleFormatValueFunc>
  void
  set_format_value_func (ScaleFormatValueFunc &&func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy_notify;
    ::GtkScale *_peel_this = reinterpret_cast<::GtkScale *> (this);
    ::GtkScaleFormatValueFunc _peel_func = peel::internals::CallbackHelper<char *, ::GtkScale *, double>::wrap_notified_callback (
      static_cast<ScaleFormatValueFunc &&> (func),
      [] (::GtkScale *scale, double value, gpointer user_data) -> char *
      {
        ScaleFormatValueFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<ScaleFormatValueFunc>::type *> (user_data);
        Scale *_peel_scale = reinterpret_cast<Scale *> (scale);
        peel::String _peel_return = peel::internals::invoke_if_nonnull<peel::String> (_peel_captured_func) (_peel_scale, value);
        return std::move (_peel_return).release_string ();
      },
      &_peel_user_data, &_peel_destroy_notify, peel::internals::is_const_invocable<ScaleFormatValueFunc, void, Scale *, double>::value);
    gtk_scale_set_format_value_func (_peel_this, _peel_func, _peel_user_data, _peel_destroy_notify);
  }

  void
  set_has_origin (bool has_origin) noexcept
  {
    ::GtkScale *_peel_this = reinterpret_cast<::GtkScale *> (this);
    gboolean _peel_has_origin = static_cast<gboolean> (has_origin);
    gtk_scale_set_has_origin (_peel_this, _peel_has_origin);
  }

  void
  set_value_pos (PositionType pos) noexcept
  {
    ::GtkScale *_peel_this = reinterpret_cast<::GtkScale *> (this);
    ::GtkPositionType _peel_pos = static_cast<::GtkPositionType> (pos);
    gtk_scale_set_value_pos (_peel_this, _peel_pos);
  }

  static peel::Property<int>
  prop_digits ()
  {
    return peel::Property<int> { "digits" };
  }

  static peel::Property<bool>
  prop_draw_value ()
  {
    return peel::Property<bool> { "draw-value" };
  }

  static peel::Property<bool>
  prop_has_origin ()
  {
    return peel::Property<bool> { "has-origin" };
  }

  static peel::Property<PositionType>
  prop_value_pos ()
  {
    return peel::Property<PositionType> { "value-pos" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Scale> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_arg_out (2) peel_arg_out (3)
  void
  parent_vfunc_get_layout_offsets (int *x, int *y) noexcept
  {
    ::GtkScaleClass *_peel_class = reinterpret_cast<::GtkScaleClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkScale *_peel_this = reinterpret_cast<::GtkScale *> (this);
    _peel_class->get_layout_offsets (_peel_this, x, y);
  }

public:
  class Class : public Range::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkScaleClass) - sizeof (Range::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_get_layout_offsets ()
    {
      ::GtkScaleClass *klass = reinterpret_cast<::GtkScaleClass *> (this);
      klass->get_layout_offsets = +[] (::GtkScale *scale, int *x, int *y) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (scale);
        _peel_this->DerivedClass::vfunc_get_layout_offsets (x, y);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkScaleClass),
                 "Scale::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkScaleClass),
                 "Scale::Class align mismatch");
}; /* class Scale */

static_assert (sizeof (Scale) == sizeof (::GtkScale),
               "Scale size mismatch");
static_assert (alignof (Scale) == alignof (::GtkScale),
               "Scale align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
