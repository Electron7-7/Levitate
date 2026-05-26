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
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gdk
{
enum class GLAPI : std::underlying_type<::GdkGLAPI>::type;
class GLContext;
} /* namespace Gdk */

namespace Gtk
{
class GLArea;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::GLArea> ()
{
  return gtk_gl_area_get_type ();
}


namespace Gtk
{
class GLArea : public Widget
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GLArea () = delete;
  GLArea (const GLArea &) = delete;
  GLArea (GLArea &&) = delete;
  GLArea &
  operator = (const GLArea &) = delete;
  GLArea &
  operator = (GLArea &&) = delete;
protected:
  ~GLArea () = default;
public:

  static peel::FloatPtr<GLArea>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_gl_area_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<GLArea> (reinterpret_cast<GLArea *> (_peel_return));
  }

  void
  attach_buffers () noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    gtk_gl_area_attach_buffers (_peel_this);
  }

  Gdk::GLAPI
  get_allowed_apis () noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    ::GdkGLAPI _peel_return = gtk_gl_area_get_allowed_apis (_peel_this);
    return static_cast<Gdk::GLAPI> (_peel_return);
  }

  Gdk::GLAPI
  get_api () noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    ::GdkGLAPI _peel_return = gtk_gl_area_get_api (_peel_this);
    return static_cast<Gdk::GLAPI> (_peel_return);
  }

  bool
  get_auto_render () noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    gboolean _peel_return = gtk_gl_area_get_auto_render (_peel_this);
    return !!_peel_return;
  }

  Gdk::GLContext *
  get_context () noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    ::GdkGLContext *_peel_return = gtk_gl_area_get_context (_peel_this);
    return reinterpret_cast<Gdk::GLContext *> (_peel_return);
  }

  GLib::Error *
  get_error () noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    ::GError *_peel_return = gtk_gl_area_get_error (_peel_this);
    return reinterpret_cast<GLib::Error *> (_peel_return);
  }

  bool
  get_has_depth_buffer () noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    gboolean _peel_return = gtk_gl_area_get_has_depth_buffer (_peel_this);
    return !!_peel_return;
  }

  bool
  get_has_stencil_buffer () noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    gboolean _peel_return = gtk_gl_area_get_has_stencil_buffer (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  get_required_version (int *major, int *minor) noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    gtk_gl_area_get_required_version (_peel_this, major, minor);
  }

  bool
  get_use_es () noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    gboolean _peel_return = gtk_gl_area_get_use_es (_peel_this);
    return !!_peel_return;
  }

  void
  make_current () noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    gtk_gl_area_make_current (_peel_this);
  }

  void
  queue_render () noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    gtk_gl_area_queue_render (_peel_this);
  }

  void
  set_allowed_apis (Gdk::GLAPI apis) noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    ::GdkGLAPI _peel_apis = static_cast<::GdkGLAPI> (apis);
    gtk_gl_area_set_allowed_apis (_peel_this, _peel_apis);
  }

  void
  set_auto_render (bool auto_render) noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    gboolean _peel_auto_render = static_cast<gboolean> (auto_render);
    gtk_gl_area_set_auto_render (_peel_this, _peel_auto_render);
  }

  peel_arg_in (2)
  void
  set_error (const GLib::Error *error) noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    const ::GError *_peel_error = reinterpret_cast<const ::GError *> (error);
    gtk_gl_area_set_error (_peel_this, _peel_error);
  }

  void
  set_has_depth_buffer (bool has_depth_buffer) noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    gboolean _peel_has_depth_buffer = static_cast<gboolean> (has_depth_buffer);
    gtk_gl_area_set_has_depth_buffer (_peel_this, _peel_has_depth_buffer);
  }

  void
  set_has_stencil_buffer (bool has_stencil_buffer) noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    gboolean _peel_has_stencil_buffer = static_cast<gboolean> (has_stencil_buffer);
    gtk_gl_area_set_has_stencil_buffer (_peel_this, _peel_has_stencil_buffer);
  }

  void
  set_required_version (int major, int minor) noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    gtk_gl_area_set_required_version (_peel_this, major, minor);
  }

  void
  set_use_es (bool use_es) noexcept
  {
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    gboolean _peel_use_es = static_cast<gboolean> (use_es);
    gtk_gl_area_set_use_es (_peel_this, _peel_use_es);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_create_context (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GLArea, peel::RefPtr<Gdk::GLContext> ()>::_peel_connect_by_name (this, "create-context", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_create_context (HandlerObject *object, peel::RefPtr<Gdk::GLContext> (HandlerObject::*handler_method) (GLArea *), bool after = false) noexcept
  {
    return Signal<GLArea, peel::RefPtr<Gdk::GLContext> ()>::_peel_connect_by_name (this, "create-context", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_render (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GLArea, bool (Gdk::GLContext *)>::_peel_connect_by_name (this, "render", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_render (HandlerObject *object, bool (HandlerObject::*handler_method) (GLArea *, Gdk::GLContext *), bool after = false) noexcept
  {
    return Signal<GLArea, bool (Gdk::GLContext *)>::_peel_connect_by_name (this, "render", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_resize (Handler &&handler, bool after = false) noexcept
  {
    return Signal<GLArea, void (int, int)>::_peel_connect_by_name (this, "resize", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_resize (HandlerObject *object, void (HandlerObject::*handler_method) (GLArea *, int, int), bool after = false) noexcept
  {
    return Signal<GLArea, void (int, int)>::_peel_connect_by_name (this, "resize", object, handler_method, after);
  }

  static peel::Property<Gdk::GLAPI>
  prop_allowed_apis ()
  {
    return peel::Property<Gdk::GLAPI> { "allowed-apis" };
  }

  static peel::Property<Gdk::GLAPI>
  prop_api ()
  {
    return peel::Property<Gdk::GLAPI> { "api" };
  }

  static peel::Property<bool>
  prop_auto_render ()
  {
    return peel::Property<bool> { "auto-render" };
  }

  static peel::Property<Gdk::GLContext>
  prop_context ()
  {
    return peel::Property<Gdk::GLContext> { "context" };
  }

  static peel::Property<bool>
  prop_has_depth_buffer ()
  {
    return peel::Property<bool> { "has-depth-buffer" };
  }

  static peel::Property<bool>
  prop_has_stencil_buffer ()
  {
    return peel::Property<bool> { "has-stencil-buffer" };
  }

  static peel::Property<bool>
  prop_use_es ()
  {
    return peel::Property<bool> { "use-es" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<GLArea> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  Gdk::GLContext *
  parent_vfunc_create_context () noexcept
  {
    ::GtkGLAreaClass *_peel_class = reinterpret_cast<::GtkGLAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    ::GdkGLContext *_peel_return = _peel_class->create_context (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Gdk::GLContext *> (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_render (Gdk::GLContext *context) noexcept
  {
    ::GtkGLAreaClass *_peel_class = reinterpret_cast<::GtkGLAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    ::GdkGLContext *_peel_context = reinterpret_cast<::GdkGLContext *> (context);
    gboolean _peel_return = _peel_class->render (_peel_this, _peel_context);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  void
  parent_vfunc_resize (int width, int height) noexcept
  {
    ::GtkGLAreaClass *_peel_class = reinterpret_cast<::GtkGLAreaClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkGLArea *_peel_this = reinterpret_cast<::GtkGLArea *> (this);
    _peel_class->resize (_peel_this, width, height);
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkGLAreaClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_create_context ()
    {
      ::GtkGLAreaClass *klass = reinterpret_cast<::GtkGLAreaClass *> (this);
      klass->create_context = +[] (::GtkGLArea *area) -> ::GdkGLContext *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        Gdk::GLContext *_peel_return = _peel_this->DerivedClass::vfunc_create_context ();
        return reinterpret_cast<::GdkGLContext *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_render ()
    {
      ::GtkGLAreaClass *klass = reinterpret_cast<::GtkGLAreaClass *> (this);
      klass->render = +[] (::GtkGLArea *area, ::GdkGLContext *context) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        Gdk::GLContext *_peel_context = reinterpret_cast<Gdk::GLContext *> (context);
        bool _peel_return = _peel_this->DerivedClass::vfunc_render (_peel_context);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_resize ()
    {
      ::GtkGLAreaClass *klass = reinterpret_cast<::GtkGLAreaClass *> (this);
      klass->resize = +[] (::GtkGLArea *area, int width, int height) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (area);
        _peel_this->DerivedClass::vfunc_resize (width, height);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkGLAreaClass),
                 "GLArea::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkGLAreaClass),
                 "GLArea::Class align mismatch");
}; /* class GLArea */

static_assert (sizeof (GLArea) == sizeof (::GtkGLArea),
               "GLArea size mismatch");
static_assert (alignof (GLArea) == alignof (::GtkGLArea),
               "GLArea align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/GLContext.h>
