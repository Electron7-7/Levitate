#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>
#include <peel/Gio/SocketControlMessage.h>

peel_begin_header

namespace peel
{
namespace Gio
{
enum class EcnCodePoint : std::underlying_type<::GEcnCodePoint>::type;
class IPv6TclassMessage;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::IPv6TclassMessage> ()
{
  return g_ipv6_tclass_message_get_type ();
}


namespace Gio
{
class IPv6TclassMessage : public SocketControlMessage
/* non-derivable */
{
private:
  using SocketControlMessage::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  IPv6TclassMessage () = delete;
  IPv6TclassMessage (const IPv6TclassMessage &) = delete;
  IPv6TclassMessage (IPv6TclassMessage &&) = delete;
  IPv6TclassMessage &
  operator = (const IPv6TclassMessage &) = delete;
  IPv6TclassMessage &
  operator = (IPv6TclassMessage &&) = delete;
  ~IPv6TclassMessage () = delete;
public:

  static peel::RefPtr<IPv6TclassMessage>
  create (uint8_t dscp, EcnCodePoint ecn) noexcept
  {
    ::GEcnCodePoint _peel_ecn = static_cast<::GEcnCodePoint> (ecn);
    ::GSocketControlMessage *_peel_return = g_ipv6_tclass_message_new (dscp, _peel_ecn);
    peel_assume (_peel_return);
    return peel::RefPtr<IPv6TclassMessage>::adopt_ref (reinterpret_cast<IPv6TclassMessage *> (_peel_return));
  }

  uint8_t
  get_dscp () noexcept
  {
    ::GIPv6TclassMessage *_peel_this = reinterpret_cast<::GIPv6TclassMessage *> (this);
    return g_ipv6_tclass_message_get_dscp (_peel_this);
  }

  EcnCodePoint
  get_ecn () noexcept
  {
    ::GIPv6TclassMessage *_peel_this = reinterpret_cast<::GIPv6TclassMessage *> (this);
    ::GEcnCodePoint _peel_return = g_ipv6_tclass_message_get_ecn (_peel_this);
    return static_cast<EcnCodePoint> (_peel_return);
  }

  class Class : public SocketControlMessage::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GIPv6TclassMessageClass),
                 "IPv6TclassMessage::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GIPv6TclassMessageClass),
                 "IPv6TclassMessage::Class align mismatch");
}; /* class IPv6TclassMessage */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
