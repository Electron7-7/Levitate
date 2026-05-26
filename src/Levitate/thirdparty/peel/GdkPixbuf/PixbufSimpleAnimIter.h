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
#include <peel/GdkPixbuf/PixbufAnimationIter.h>

peel_begin_header

namespace peel
{
namespace GdkPixbuf
{
class PixbufSimpleAnimIter;
} /* namespace GdkPixbuf */

template<>
inline GObject::Type
GObject::Type::of<GdkPixbuf::PixbufSimpleAnimIter> ()
{
  return gdk_pixbuf_simple_anim_iter_get_type ();
}


namespace GdkPixbuf
{
class PixbufSimpleAnimIter : public PixbufAnimationIter
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PixbufSimpleAnimIter () = delete;
  PixbufSimpleAnimIter (const PixbufSimpleAnimIter &) = delete;
  PixbufSimpleAnimIter (PixbufSimpleAnimIter &&) = delete;
  PixbufSimpleAnimIter &
  operator = (const PixbufSimpleAnimIter &) = delete;
  PixbufSimpleAnimIter &
  operator = (PixbufSimpleAnimIter &&) = delete;
  ~PixbufSimpleAnimIter () = delete;
public:
}; /* class PixbufSimpleAnimIter */

} /* namespace GdkPixbuf */
} /* namespace peel */

peel_end_header
