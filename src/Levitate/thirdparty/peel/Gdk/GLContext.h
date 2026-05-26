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
#include <gdk/gdk.h>
#include <peel/Gdk/DrawContext.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gdk
{
class Display;
enum class GLAPI : std::underlying_type<::GdkGLAPI>::type;
class GLContext;
class Surface;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::GLContext> ()
{
  return gdk_gl_context_get_type ();
}


namespace Gdk
{
class GLContext : public DrawContext
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GLContext () = delete;
  GLContext (const GLContext &) = delete;
  GLContext (GLContext &&) = delete;
  GLContext &
  operator = (const GLContext &) = delete;
  GLContext &
  operator = (GLContext &&) = delete;
  ~GLContext () = delete;
public:

  static void
  clear_current () noexcept
  {
    gdk_gl_context_clear_current ();
  }

  static GLContext *
  get_current () noexcept
  {
    ::GdkGLContext *_peel_return = gdk_gl_context_get_current ();
    return reinterpret_cast<GLContext *> (_peel_return);
  }

  GLAPI
  get_allowed_apis () noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    ::GdkGLAPI _peel_return = gdk_gl_context_get_allowed_apis (_peel_this);
    return static_cast<GLAPI> (_peel_return);
  }

  GLAPI
  get_api () noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    ::GdkGLAPI _peel_return = gdk_gl_context_get_api (_peel_this);
    return static_cast<GLAPI> (_peel_return);
  }

  bool
  get_debug_enabled () noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    gboolean _peel_return = gdk_gl_context_get_debug_enabled (_peel_this);
    return !!_peel_return;
  }

  Display *
  get_display () noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    ::GdkDisplay *_peel_return = gdk_gl_context_get_display (_peel_this);
    return reinterpret_cast<Display *> (_peel_return);
  }

  bool
  get_forward_compatible () noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    gboolean _peel_return = gdk_gl_context_get_forward_compatible (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  get_required_version (int *major, int *minor) noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    gdk_gl_context_get_required_version (_peel_this, major, minor);
  }

  GLContext *
  get_shared_context () noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    ::GdkGLContext *_peel_return = gdk_gl_context_get_shared_context (_peel_this);
    return reinterpret_cast<GLContext *> (_peel_return);
  }

  Surface *
  get_surface () noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    ::GdkSurface *_peel_return = gdk_gl_context_get_surface (_peel_this);
    return reinterpret_cast<Surface *> (_peel_return);
  }

  bool
  get_use_es () noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    gboolean _peel_return = gdk_gl_context_get_use_es (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  get_version (int *major, int *minor) noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    gdk_gl_context_get_version (_peel_this, major, minor);
  }

  bool
  is_legacy () noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    gboolean _peel_return = gdk_gl_context_is_legacy (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  is_shared (GLContext *other) noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    ::GdkGLContext *_peel_other = reinterpret_cast<::GdkGLContext *> (other);
    gboolean _peel_return = gdk_gl_context_is_shared (_peel_this, _peel_other);
    return !!_peel_return;
  }

  void
  make_current () noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    gdk_gl_context_make_current (_peel_this);
  }

  bool
  realize (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gdk_gl_context_realize (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  set_allowed_apis (GLAPI apis) noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    ::GdkGLAPI _peel_apis = static_cast<::GdkGLAPI> (apis);
    gdk_gl_context_set_allowed_apis (_peel_this, _peel_apis);
  }

  void
  set_debug_enabled (bool enabled) noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    gboolean _peel_enabled = static_cast<gboolean> (enabled);
    gdk_gl_context_set_debug_enabled (_peel_this, _peel_enabled);
  }

  void
  set_forward_compatible (bool compatible) noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    gboolean _peel_compatible = static_cast<gboolean> (compatible);
    gdk_gl_context_set_forward_compatible (_peel_this, _peel_compatible);
  }

  void
  set_required_version (int major, int minor) noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    gdk_gl_context_set_required_version (_peel_this, major, minor);
  }

  void
  set_use_es (int use_es) noexcept
  {
    ::GdkGLContext *_peel_this = reinterpret_cast<::GdkGLContext *> (this);
    gdk_gl_context_set_use_es (_peel_this, use_es);
  }

  static peel::Property<GLAPI>
  prop_allowed_apis ()
  {
    return peel::Property<GLAPI> { "allowed-apis" };
  }

  static peel::Property<GLAPI>
  prop_api ()
  {
    return peel::Property<GLAPI> { "api" };
  }

  static peel::Property<GLContext>
  prop_shared_context ()
  {
    return peel::Property<GLContext> { "shared-context" };
  }
}; /* class GLContext */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
