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
class VulkanContext;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::VulkanContext> ()
{
  return gdk_vulkan_context_get_type ();
}


namespace Gdk
{
class VulkanContext : public DrawContext
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  VulkanContext () = delete;
  VulkanContext (const VulkanContext &) = delete;
  VulkanContext (VulkanContext &&) = delete;
  VulkanContext &
  operator = (const VulkanContext &) = delete;
  VulkanContext &
  operator = (VulkanContext &&) = delete;
  ~VulkanContext () = delete;
public:

  template<typename Handler>
  peel::SignalConnection::Token
  connect_images_updated (Handler &&handler, bool after = false) noexcept
  {
    return Signal<VulkanContext, void ()>::_peel_connect_by_name (this, "images-updated", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_images_updated (HandlerObject *object, void (HandlerObject::*handler_method) (VulkanContext *), bool after = false) noexcept
  {
    return Signal<VulkanContext, void ()>::_peel_connect_by_name (this, "images-updated", object, handler_method, after);
  }
}; /* class VulkanContext */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
