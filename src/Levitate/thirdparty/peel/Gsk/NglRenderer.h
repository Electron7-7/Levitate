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
class NglRenderer;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::NglRenderer> ()
{
  return gsk_ngl_renderer_get_type ();
}


namespace Gsk
{
class NglRenderer : public Renderer
/* non-derivable */
{
private:
  using Renderer::create_for_surface;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  NglRenderer () = delete;
  NglRenderer (const NglRenderer &) = delete;
  NglRenderer (NglRenderer &&) = delete;
  NglRenderer &
  operator = (const NglRenderer &) = delete;
  NglRenderer &
  operator = (NglRenderer &&) = delete;
  ~NglRenderer () = delete;
public:

  static peel::RefPtr<NglRenderer>
  create () noexcept
  {
    ::GskRenderer *_peel_return = gsk_ngl_renderer_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<NglRenderer>::adopt_ref (reinterpret_cast<NglRenderer *> (_peel_return));
  }
}; /* class NglRenderer */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
