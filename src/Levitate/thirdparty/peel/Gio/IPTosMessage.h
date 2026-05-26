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
class IPTosMessage;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::IPTosMessage> ()
{
  return g_ip_tos_message_get_type ();
}


namespace Gio
{
class IPTosMessage : public SocketControlMessage
/* non-derivable */
{
private:
  using SocketControlMessage::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  IPTosMessage () = delete;
  IPTosMessage (const IPTosMessage &) = delete;
  IPTosMessage (IPTosMessage &&) = delete;
  IPTosMessage &
  operator = (const IPTosMessage &) = delete;
  IPTosMessage &
  operator = (IPTosMessage &&) = delete;
  ~IPTosMessage () = delete;
public:

  static peel::RefPtr<IPTosMessage>
  create (uint8_t dscp, EcnCodePoint ecn) noexcept
  {
    ::GEcnCodePoint _peel_ecn = static_cast<::GEcnCodePoint> (ecn);
    ::GSocketControlMessage *_peel_return = g_ip_tos_message_new (dscp, _peel_ecn);
    peel_assume (_peel_return);
    return peel::RefPtr<IPTosMessage>::adopt_ref (reinterpret_cast<IPTosMessage *> (_peel_return));
  }

  uint8_t
  get_dscp () noexcept
  {
    ::GIPTosMessage *_peel_this = reinterpret_cast<::GIPTosMessage *> (this);
    return g_ip_tos_message_get_dscp (_peel_this);
  }

  EcnCodePoint
  get_ecn () noexcept
  {
    ::GIPTosMessage *_peel_this = reinterpret_cast<::GIPTosMessage *> (this);
    ::GEcnCodePoint _peel_return = g_ip_tos_message_get_ecn (_peel_this);
    return static_cast<EcnCodePoint> (_peel_return);
  }

  class Class : public SocketControlMessage::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GIPTosMessageClass),
                 "IPTosMessage::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GIPTosMessageClass),
                 "IPTosMessage::Class align mismatch");
}; /* class IPTosMessage */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
