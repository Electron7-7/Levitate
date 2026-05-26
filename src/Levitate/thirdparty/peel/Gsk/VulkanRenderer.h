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
class VulkanRenderer;
} /* namespace Gsk */

template<>
inline GObject::Type
GObject::Type::of<Gsk::VulkanRenderer> ()
{
  return gsk_vulkan_renderer_get_type ();
}


namespace Gsk
{
class VulkanRenderer : public Renderer
/* non-derivable */
{
private:
  using Renderer::create_for_surface;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  VulkanRenderer () = delete;
  VulkanRenderer (const VulkanRenderer &) = delete;
  VulkanRenderer (VulkanRenderer &&) = delete;
  VulkanRenderer &
  operator = (const VulkanRenderer &) = delete;
  VulkanRenderer &
  operator = (VulkanRenderer &&) = delete;
  ~VulkanRenderer () = delete;
public:

  static peel::RefPtr<VulkanRenderer>
  create () noexcept
  {
    ::GskRenderer *_peel_return = gsk_vulkan_renderer_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<VulkanRenderer>::adopt_ref (reinterpret_cast<VulkanRenderer *> (_peel_return));
  }

  class Class : public Renderer::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class VulkanRenderer */

} /* namespace Gsk */
} /* namespace peel */

peel_end_header
