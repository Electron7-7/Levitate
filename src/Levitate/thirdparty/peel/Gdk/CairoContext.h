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
namespace Gdk
{
class CairoContext;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::CairoContext> ()
{
  return gdk_cairo_context_get_type ();
}


namespace Gdk
{
class CairoContext : public DrawContext
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CairoContext () = delete;
  CairoContext (const CairoContext &) = delete;
  CairoContext (CairoContext &&) = delete;
  CairoContext &
  operator = (const CairoContext &) = delete;
  CairoContext &
  operator = (CairoContext &&) = delete;
  ~CairoContext () = delete;
public:

  ::cairo_t *
  cairo_create () noexcept
  {
    ::GdkCairoContext *_peel_this = reinterpret_cast<::GdkCairoContext *> (this);
    return gdk_cairo_context_cairo_create (_peel_this);
  }
}; /* class CairoContext */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
