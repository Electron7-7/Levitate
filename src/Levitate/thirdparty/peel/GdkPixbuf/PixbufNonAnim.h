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
class PixbufNonAnim;
} /* namespace GdkPixbuf */

#ifdef GDK_PIXBUF_ENABLE_BACKEND
template<>
inline GObject::Type
GObject::Type::of<GdkPixbuf::PixbufNonAnim> ()
{
  return gdk_pixbuf_non_anim_get_type ();
}
#endif /* GDK_PIXBUF_ENABLE_BACKEND */


namespace GdkPixbuf
{
#ifdef GDK_PIXBUF_ENABLE_BACKEND
/* non-derivable */
class PixbufNonAnim : public PixbufAnimation
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

  PixbufNonAnim () = delete;
  PixbufNonAnim (const PixbufNonAnim &) = delete;
  PixbufNonAnim (PixbufNonAnim &&) = delete;
  PixbufNonAnim &
  operator = (const PixbufNonAnim &) = delete;
  PixbufNonAnim &
  operator = (PixbufNonAnim &&) = delete;
  ~PixbufNonAnim () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<PixbufNonAnim>
  create (Pixbuf *pixbuf) noexcept
  {
    ::GdkPixbuf *_peel_pixbuf = reinterpret_cast<::GdkPixbuf *> (pixbuf);
    ::GdkPixbufAnimation *_peel_return = gdk_pixbuf_non_anim_new (_peel_pixbuf);
    peel_assume (_peel_return);
    return peel::RefPtr<PixbufNonAnim>::adopt_ref (reinterpret_cast<PixbufNonAnim *> (_peel_return));
  }
}; /* class PixbufNonAnim */
#endif /* GDK_PIXBUF_ENABLE_BACKEND */

} /* namespace GdkPixbuf */
} /* namespace peel */

peel_end_header
