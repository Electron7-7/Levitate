#pragma once

/* Auto-generated, do not modify */
/* Package gdk-pixbuf-2.0 */

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
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <peel/GdkPixbuf/PixbufAnimation.h>

peel_begin_header

namespace peel
{
namespace GdkPixbuf
{
class Pixbuf;
class PixbufSimpleAnim;
} /* namespace GdkPixbuf */

template<>
inline GObject::Type
GObject::Type::of<GdkPixbuf::PixbufSimpleAnim> ()
{
  return gdk_pixbuf_simple_anim_get_type ();
}


namespace GdkPixbuf
{
class PixbufSimpleAnim : public PixbufAnimation
/* non-derivable */
{
private:
  using PixbufAnimation::create_from_file;
  using PixbufAnimation::create_from_resource;
  using PixbufAnimation::create_from_stream;
  using PixbufAnimation::create_from_stream_finish;
  using PixbufAnimation::new_from_stream_async;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PixbufSimpleAnim () = delete;
  PixbufSimpleAnim (const PixbufSimpleAnim &) = delete;
  PixbufSimpleAnim (PixbufSimpleAnim &&) = delete;
  PixbufSimpleAnim &
  operator = (const PixbufSimpleAnim &) = delete;
  PixbufSimpleAnim &
  operator = (PixbufSimpleAnim &&) = delete;
  ~PixbufSimpleAnim () = delete;
public:

  static peel::RefPtr<PixbufSimpleAnim>
  create (int width, int height, float rate) noexcept
  {
    ::GdkPixbufSimpleAnim *_peel_return = gdk_pixbuf_simple_anim_new (width, height, rate);
    peel_assume (_peel_return);
    return peel::RefPtr<PixbufSimpleAnim>::adopt_ref (reinterpret_cast<PixbufSimpleAnim *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  add_frame (Pixbuf *pixbuf) noexcept
  {
    ::GdkPixbufSimpleAnim *_peel_this = reinterpret_cast<::GdkPixbufSimpleAnim *> (this);
    ::GdkPixbuf *_peel_pixbuf = reinterpret_cast<::GdkPixbuf *> (pixbuf);
    gdk_pixbuf_simple_anim_add_frame (_peel_this, _peel_pixbuf);
  }

  bool
  get_loop () noexcept
  {
    ::GdkPixbufSimpleAnim *_peel_this = reinterpret_cast<::GdkPixbufSimpleAnim *> (this);
    gboolean _peel_return = gdk_pixbuf_simple_anim_get_loop (_peel_this);
    return !!_peel_return;
  }

  void
  set_loop (bool loop) noexcept
  {
    ::GdkPixbufSimpleAnim *_peel_this = reinterpret_cast<::GdkPixbufSimpleAnim *> (this);
    gboolean _peel_loop = static_cast<gboolean> (loop);
    gdk_pixbuf_simple_anim_set_loop (_peel_this, _peel_loop);
  }

  static peel::Property<bool>
  prop_loop ()
  {
    return peel::Property<bool> { "loop" };
  }

  class Class : public PixbufAnimation::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class PixbufSimpleAnim */

} /* namespace GdkPixbuf */
} /* namespace peel */

peel_end_header
