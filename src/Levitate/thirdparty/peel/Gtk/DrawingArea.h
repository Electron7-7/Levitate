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
class DrawingArea;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::DrawingArea> ()
{
  return gtk_drawing_area_get_type ();
}


namespace Gtk
{
class DrawingArea : public Widget
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DrawingArea () = delete;
  DrawingArea (const DrawingArea &) = delete;
  DrawingArea (DrawingArea &&) = delete;
  DrawingArea &
  operator = (const DrawingArea &) = delete;
  DrawingArea &
  operator = (DrawingArea &&) = delete;
protected:
  ~DrawingArea () = default;
public:

  static peel::FloatPtr<DrawingArea>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_drawing_area_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<DrawingArea> (reinterpret_cast<DrawingArea *> (_peel_return));
  }

  int
  get_content_height () noexcept
  {
    ::GtkDrawingArea *_peel_this = reinterpret_cast<::GtkDrawingArea *> (this);
    return gtk_drawing_area_get_content_height (_peel_this);
  }

  int
  get_content_width () noexcept
  {
    ::GtkDrawingArea *_peel_this = reinterpret_cast<::GtkDrawingArea *> (this);
    return gtk_drawing_area_get_content_width (_peel_this);
  }

  void
  set_content_height (int height) noexcept
  {
    ::GtkDrawingArea *_peel_this = reinterpret_cast<::GtkDrawingArea *> (this);
    gtk_drawing_area_set_content_height (_peel_this, height);
  }

  void
  set_content_width (int width) noexcept
  {
    ::GtkDrawingArea *_peel_this = reinterpret_cast<::GtkDrawingArea *> (this);
    gtk_drawing_area_set_content_width (_peel_this, width);
  }

  template<typename DrawingAreaDrawFunc>
  void
  set_draw_func (DrawingAreaDrawFunc &&draw_func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_destroy;
    ::GtkDrawingArea *_peel_this = reinterpret_cast<::GtkDrawingArea *> (this);
    ::GtkDrawingAreaDrawFunc _peel_draw_func = peel::internals::CallbackHelper<void, ::GtkDrawingArea *, ::cairo_t *, int, int>::wrap_notified_callback (
      static_cast<DrawingAreaDrawFunc &&> (draw_func),
      [] (::GtkDrawingArea *drawing_area, ::cairo_t *cr, int width, int height, gpointer user_data) -> void
      {
        DrawingAreaDrawFunc &_peel_captured_draw_func = *reinterpret_cast<typename std::remove_reference<DrawingAreaDrawFunc>::type *> (user_data);
        DrawingArea *_peel_drawing_area = reinterpret_cast<DrawingArea *> (drawing_area);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_draw_func) (_peel_drawing_area, cr, width, height);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<DrawingAreaDrawFunc, void, DrawingArea *, ::cairo_t *, int, int>::value);
    gtk_drawing_area_set_draw_func (_peel_this, _peel_draw_func, _peel_user_data, _peel_destroy);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_resize (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DrawingArea, void (int, int)>::_peel_connect_by_name (this, "resize", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_resize (HandlerObject *object, void (HandlerObject::*handler_method) (DrawingArea *, int, int), bool after = false) noexcept
  {
    return Signal<DrawingArea, void (int, int)>::_peel_connect_by_name (this, "resize", object, handler_method, after);
  }

  static peel::Property<int>
  prop_content_height ()
  {
    return peel::Property<int> { "content-height" };
  }

  static peel::Property<int>
  prop_content_width ()
  {
    return peel::Property<int> { "content-width" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<DrawingArea> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_resize (int width, int height) noexcept
  {
    ::GtkDrawingAreaClass *_peel_class = reinterpret_cast<::GtkDrawingAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkDrawingArea *_peel_this = reinterpret_cast<::GtkDrawingArea *> (this);
    _peel_class->resize (_peel_this, width, height);
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkDrawingAreaClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_resize ()
    {
      ::GtkDrawingAreaClass *klass = reinterpret_cast<::GtkDrawingAreaClass *> (this);
      klass->resize = +[] (::GtkDrawingArea *area, int width, int height) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        _peel_this->DerivedClass::vfunc_resize (width, height);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkDrawingAreaClass),
                 "DrawingArea::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkDrawingAreaClass),
                 "DrawingArea::Class align mismatch");
}; /* class DrawingArea */

static_assert (sizeof (DrawingArea) == sizeof (::GtkDrawingArea),
               "DrawingArea size mismatch");
static_assert (alignof (DrawingArea) == alignof (::GtkDrawingArea),
               "DrawingArea align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
