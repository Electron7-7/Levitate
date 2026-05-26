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
class Credentials;
class UnixCredentialsMessage;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::UnixCredentialsMessage> ()
{
  return g_unix_credentials_message_get_type ();
}


namespace Gio
{
class UnixCredentialsMessage : public SocketControlMessage
{
private:
  unsigned char _placeholder[sizeof (::GUnixCredentialsMessage) - sizeof (SocketControlMessage)] peel_no_warn_unused;
  using SocketControlMessage::deserialize;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  UnixCredentialsMessage () = delete;
  UnixCredentialsMessage (const UnixCredentialsMessage &) = delete;
  UnixCredentialsMessage (UnixCredentialsMessage &&) = delete;
  UnixCredentialsMessage &
  operator = (const UnixCredentialsMessage &) = delete;
  UnixCredentialsMessage &
  operator = (UnixCredentialsMessage &&) = delete;
protected:
  ~UnixCredentialsMessage () = default;
public:

  static peel::RefPtr<UnixCredentialsMessage>
  create () noexcept
  {
    ::GSocketControlMessage *_peel_return = g_unix_credentials_message_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<UnixCredentialsMessage>::adopt_ref (reinterpret_cast<UnixCredentialsMessage *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<UnixCredentialsMessage>
  create_with_credentials (Credentials *credentials) noexcept
  {
    ::GCredentials *_peel_credentials = reinterpret_cast<::GCredentials *> (credentials);
    ::GSocketControlMessage *_peel_return = g_unix_credentials_message_new_with_credentials (_peel_credentials);
    peel_assume (_peel_return);
    return peel::RefPtr<UnixCredentialsMessage>::adopt_ref (reinterpret_cast<UnixCredentialsMessage *> (_peel_return));
  }

  static bool
  is_supported () noexcept
  {
    gboolean _peel_return = g_unix_credentials_message_is_supported ();
    return !!_peel_return;
  }

  peel_returns_nonnull
  Credentials *
  get_credentials () noexcept
  {
    ::GUnixCredentialsMessage *_peel_this = reinterpret_cast<::GUnixCredentialsMessage *> (this);
    ::GCredentials *_peel_return = g_unix_credentials_message_get_credentials (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Credentials *> (_peel_return);
  }

  static peel::Property<Credentials>
  prop_credentials ()
  {
    return peel::Property<Credentials> { "credentials" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<UnixCredentialsMessage> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public SocketControlMessage::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GUnixCredentialsMessageClass) - sizeof (SocketControlMessage::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GUnixCredentialsMessageClass),
                 "UnixCredentialsMessage::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GUnixCredentialsMessageClass),
                 "UnixCredentialsMessage::Class align mismatch");
}; /* class UnixCredentialsMessage */

static_assert (sizeof (UnixCredentialsMessage) == sizeof (::GUnixCredentialsMessage),
               "UnixCredentialsMessage size mismatch");
static_assert (alignof (UnixCredentialsMessage) == alignof (::GUnixCredentialsMessage),
               "UnixCredentialsMessage align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
