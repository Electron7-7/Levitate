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
#include <gsk/gsk.h>
#include <peel/Gsk/Renderer.h>

peel_begin_header

namespace peel
{
namespace Gsk
{
class CairoRenderer;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::CairoRenderer> ()
{
  return gsk_cairo_renderer_get_type ();
}


namespace Gsk
{
class CairoRenderer : public Renderer
/* non-derivable */
{
private:
  using Renderer::create_for_surface;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CairoRenderer () = delete;
  CairoRenderer (const CairoRenderer &) = delete;
  CairoRenderer (CairoRenderer &&) = delete;
  CairoRenderer &
  operator = (const CairoRenderer &) = delete;
  CairoRenderer &
  operator = (CairoRenderer &&) = delete;
  ~CairoRenderer () = delete;
public:

  static peel::RefPtr<CairoRenderer>
  create () noexcept
  {
    ::GskRenderer *_peel_return = gsk_cairo_renderer_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<CairoRenderer>::adopt_ref (reinterpret_cast<CairoRenderer *> (_peel_return));
  }

  class Class : public Renderer::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class CairoRenderer */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
