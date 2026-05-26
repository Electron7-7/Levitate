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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class SocketControlMessage;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SocketControlMessage> ()
{
  return g_socket_control_message_get_type ();
}


namespace Gio
{
class SocketControlMessage : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GSocketControlMessage) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SocketControlMessage () = delete;
  SocketControlMessage (const SocketControlMessage &) = delete;
  SocketControlMessage (SocketControlMessage &&) = delete;
  SocketControlMessage &
  operator = (const SocketControlMessage &) = delete;
  SocketControlMessage &
  operator = (SocketControlMessage &&) = delete;
protected:
  ~SocketControlMessage () = default;
public:

  static peel::RefPtr<SocketControlMessage>
  deserialize (int level, int type, peel::ArrayRef<uint8_t> data) noexcept
  {
    gsize _peel_size;
    gpointer _peel_data = (_peel_size = data.size (), reinterpret_cast<gpointer> (data.data ()));
    ::GSocketControlMessage *_peel_return = g_socket_control_message_deserialize (level, type, _peel_size, _peel_data);
    return peel::RefPtr<SocketControlMessage>::adopt_ref (reinterpret_cast<SocketControlMessage *> (_peel_return));
  }

  int
  get_level () noexcept
  {
    ::GSocketControlMessage *_peel_this = reinterpret_cast<::GSocketControlMessage *> (this);
    return g_socket_control_message_get_level (_peel_this);
  }

  int
  get_msg_type () noexcept
  {
    ::GSocketControlMessage *_peel_this = reinterpret_cast<::GSocketControlMessage *> (this);
    return g_socket_control_message_get_msg_type (_peel_this);
  }

  size_t
  get_size () noexcept
  {
    ::GSocketControlMessage *_peel_this = reinterpret_cast<::GSocketControlMessage *> (this);
    return g_socket_control_message_get_size (_peel_this);
  }

  void
  serialize (void *data) noexcept
  {
    ::GSocketControlMessage *_peel_this = reinterpret_cast<::GSocketControlMessage *> (this);
    g_socket_control_message_serialize (_peel_this, data);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<SocketControlMessage> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  int
  parent_vfunc_get_level () noexcept
  {
    ::GSocketControlMessageClass *_peel_class = reinterpret_cast<::GSocketControlMessageClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSocketControlMessage *_peel_this = reinterpret_cast<::GSocketControlMessage *> (this);
    return _peel_class->get_level (_peel_this);
  }

  template<typename DerivedClass>
  size_t
  parent_vfunc_get_size () noexcept
  {
    ::GSocketControlMessageClass *_peel_class = reinterpret_cast<::GSocketControlMessageClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSocketControlMessage *_peel_this = reinterpret_cast<::GSocketControlMessage *> (this);
    return _peel_class->get_size (_peel_this);
  }

  template<typename DerivedClass>
  int
  parent_vfunc_get_type () noexcept
  {
    ::GSocketControlMessageClass *_peel_class = reinterpret_cast<::GSocketControlMessageClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSocketControlMessage *_peel_this = reinterpret_cast<::GSocketControlMessage *> (this);
    return _peel_class->get_type (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_serialize (void *data) noexcept
  {
    ::GSocketControlMessageClass *_peel_class = reinterpret_cast<::GSocketControlMessageClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSocketControlMessage *_peel_this = reinterpret_cast<::GSocketControlMessage *> (this);
    _peel_class->serialize (_peel_this, data);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GSocketControlMessageClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_get_level ()
    {
      ::GSocketControlMessageClass *klass = reinterpret_cast<::GSocketControlMessageClass *> (this);
      klass->get_level = +[] (::GSocketControlMessage *message) -> int
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (message);
        return _peel_this->DerivedClass::vfunc_get_level ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_size ()
    {
      ::GSocketControlMessageClass *klass = reinterpret_cast<::GSocketControlMessageClass *> (this);
      klass->get_size = +[] (::GSocketControlMessage *message) -> gsize
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (message);
        return _peel_this->DerivedClass::vfunc_get_size ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_type ()
    {
      ::GSocketControlMessageClass *klass = reinterpret_cast<::GSocketControlMessageClass *> (this);
      klass->get_type = +[] (::GSocketControlMessage *message) -> int
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (message);
        return _peel_this->DerivedClass::vfunc_get_type ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_serialize ()
    {
      ::GSocketControlMessageClass *klass = reinterpret_cast<::GSocketControlMessageClass *> (this);
      klass->serialize = +[] (::GSocketControlMessage *message, gpointer data) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (message);
        _peel_this->DerivedClass::vfunc_serialize (data);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GSocketControlMessageClass),
                 "SocketControlMessage::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GSocketControlMessageClass),
                 "SocketControlMessage::Class align mismatch");
}; /* class SocketControlMessage */

static_assert (sizeof (SocketControlMessage) == sizeof (::GSocketControlMessage),
               "SocketControlMessage size mismatch");
static_assert (alignof (SocketControlMessage) == alignof (::GSocketControlMessage),
               "SocketControlMessage align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
