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
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
enum class IOCondition : std::underlying_type<::GIOCondition>::type;
struct Source;
} /* namespace GLib */

namespace Gio
{
class Cancellable;
class /* interface */ DatagramBased;
struct InputMessage;
struct OutputMessage;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DatagramBased> ()
{
  return g_datagram_based_get_type ();
}


namespace Gio
{
class /* interface */ DatagramBased : public GObject::Object
/* requires GObject::Object */
{
private:
  DatagramBased () = delete;
  DatagramBased (const DatagramBased &) = delete;
  DatagramBased (DatagramBased &&) = delete;

  DatagramBased &
  operator = (const DatagramBased &) = delete;
  DatagramBased &
  operator = (DatagramBased &&) = delete;

protected:
  ~DatagramBased () = default;

public:

  GLib::IOCondition
  condition_check (GLib::IOCondition condition) noexcept
  {
    ::GDatagramBased *_peel_this = reinterpret_cast<::GDatagramBased *> (this);
    ::GIOCondition _peel_condition = static_cast<::GIOCondition> (condition);
    ::GIOCondition _peel_return = g_datagram_based_condition_check (_peel_this, _peel_condition);
    return static_cast<GLib::IOCondition> (_peel_return);
  }

  bool
  condition_wait (GLib::IOCondition condition, int64_t timeout, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDatagramBased *_peel_this = reinterpret_cast<::GDatagramBased *> (this);
    ::GIOCondition _peel_condition = static_cast<::GIOCondition> (condition);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_datagram_based_condition_wait (_peel_this, _peel_condition, timeout, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::RefPtr<GLib::Source>
  create_source (GLib::IOCondition condition, Cancellable *cancellable) noexcept
  {
    ::GDatagramBased *_peel_this = reinterpret_cast<::GDatagramBased *> (this);
    ::GIOCondition _peel_condition = static_cast<::GIOCondition> (condition);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GSource *_peel_return = g_datagram_based_create_source (_peel_this, _peel_condition, _peel_cancellable);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Source>::adopt_ref (reinterpret_cast<GLib::Source *> (_peel_return));
  }

  int
  receive_messages (peel::ArrayRef<InputMessage> messages, int flags, int64_t timeout, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    guint _peel_num_messages;
    ::GDatagramBased *_peel_this = reinterpret_cast<::GDatagramBased *> (this);
    ::GInputMessage *_peel_messages = (_peel_num_messages = messages.size (), reinterpret_cast<::GInputMessage *> (messages.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gint _peel_return = g_datagram_based_receive_messages (_peel_this, _peel_messages, _peel_num_messages, flags, timeout, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  int
  send_messages (peel::ArrayRef<OutputMessage> messages, int flags, int64_t timeout, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    guint _peel_num_messages;
    ::GDatagramBased *_peel_this = reinterpret_cast<::GDatagramBased *> (this);
    ::GOutputMessage *_peel_messages = (_peel_num_messages = messages.size (), reinterpret_cast<::GOutputMessage *> (messages.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gint _peel_return = g_datagram_based_send_messages (_peel_this, _peel_messages, _peel_num_messages, flags, timeout, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  template<typename DerivedClass>
  GLib::IOCondition
  parent_vfunc_condition_check (GLib::IOCondition condition) noexcept
  {
    ::GDatagramBasedInterface *_peel_iface = reinterpret_cast<::GDatagramBasedInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DatagramBased> ())->peek_parent ());
    ::GDatagramBased *_peel_this = reinterpret_cast<::GDatagramBased *> (this);
    ::GIOCondition _peel_condition = static_cast<::GIOCondition> (condition);
    ::GIOCondition _peel_return = _peel_iface->condition_check (_peel_this, _peel_condition);
    return static_cast<GLib::IOCondition> (_peel_return);
  }

  GLib::IOCondition
  default_vfunc_condition_check (GLib::IOCondition condition) noexcept
  {
    ::GDatagramBasedInterface *_peel_iface = reinterpret_cast<::GDatagramBasedInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DatagramBased> ()));
    ::GDatagramBased *_peel_this = reinterpret_cast<::GDatagramBased *> (this);
    ::GIOCondition _peel_condition = static_cast<::GIOCondition> (condition);
    ::GIOCondition _peel_return = _peel_iface->condition_check (_peel_this, _peel_condition);
    return static_cast<GLib::IOCondition> (_peel_return);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_condition_wait (GLib::IOCondition condition, int64_t timeout, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDatagramBasedInterface *_peel_iface = reinterpret_cast<::GDatagramBasedInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DatagramBased> ())->peek_parent ());
    ::GDatagramBased *_peel_this = reinterpret_cast<::GDatagramBased *> (this);
    ::GIOCondition _peel_condition = static_cast<::GIOCondition> (condition);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->condition_wait (_peel_this, _peel_condition, timeout, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  default_vfunc_condition_wait (GLib::IOCondition condition, int64_t timeout, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDatagramBasedInterface *_peel_iface = reinterpret_cast<::GDatagramBasedInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DatagramBased> ()));
    ::GDatagramBased *_peel_this = reinterpret_cast<::GDatagramBased *> (this);
    ::GIOCondition _peel_condition = static_cast<::GIOCondition> (condition);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_iface->condition_wait (_peel_this, _peel_condition, timeout, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::RefPtr<GLib::Source>
  parent_vfunc_create_source (GLib::IOCondition condition, Cancellable *cancellable) noexcept
  {
    ::GDatagramBasedInterface *_peel_iface = reinterpret_cast<::GDatagramBasedInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DatagramBased> ())->peek_parent ());
    ::GDatagramBased *_peel_this = reinterpret_cast<::GDatagramBased *> (this);
    ::GIOCondition _peel_condition = static_cast<::GIOCondition> (condition);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GSource *_peel_return = _peel_iface->create_source (_peel_this, _peel_condition, _peel_cancellable);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Source>::adopt_ref (reinterpret_cast<GLib::Source *> (_peel_return));
  }

  peel::RefPtr<GLib::Source>
  default_vfunc_create_source (GLib::IOCondition condition, Cancellable *cancellable) noexcept
  {
    ::GDatagramBasedInterface *_peel_iface = reinterpret_cast<::GDatagramBasedInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DatagramBased> ()));
    ::GDatagramBased *_peel_this = reinterpret_cast<::GDatagramBased *> (this);
    ::GIOCondition _peel_condition = static_cast<::GIOCondition> (condition);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GSource *_peel_return = _peel_iface->create_source (_peel_this, _peel_condition, _peel_cancellable);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Source>::adopt_ref (reinterpret_cast<GLib::Source *> (_peel_return));
  }

  template<typename DerivedClass>
  int
  parent_vfunc_receive_messages (peel::ArrayRef<InputMessage> messages, int flags, int64_t timeout, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDatagramBasedInterface *_peel_iface = reinterpret_cast<::GDatagramBasedInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DatagramBased> ())->peek_parent ());
    guint _peel_num_messages;
    ::GDatagramBased *_peel_this = reinterpret_cast<::GDatagramBased *> (this);
    ::GInputMessage *_peel_messages = (_peel_num_messages = messages.size (), reinterpret_cast<::GInputMessage *> (messages.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gint _peel_return = _peel_iface->receive_messages (_peel_this, _peel_messages, _peel_num_messages, flags, timeout, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  int
  default_vfunc_receive_messages (peel::ArrayRef<InputMessage> messages, int flags, int64_t timeout, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDatagramBasedInterface *_peel_iface = reinterpret_cast<::GDatagramBasedInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DatagramBased> ()));
    guint _peel_num_messages;
    ::GDatagramBased *_peel_this = reinterpret_cast<::GDatagramBased *> (this);
    ::GInputMessage *_peel_messages = (_peel_num_messages = messages.size (), reinterpret_cast<::GInputMessage *> (messages.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gint _peel_return = _peel_iface->receive_messages (_peel_this, _peel_messages, _peel_num_messages, flags, timeout, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  template<typename DerivedClass>
  int
  parent_vfunc_send_messages (peel::ArrayRef<OutputMessage> messages, int flags, int64_t timeout, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDatagramBasedInterface *_peel_iface = reinterpret_cast<::GDatagramBasedInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<DatagramBased> ())->peek_parent ());
    guint _peel_num_messages;
    ::GDatagramBased *_peel_this = reinterpret_cast<::GDatagramBased *> (this);
    ::GOutputMessage *_peel_messages = (_peel_num_messages = messages.size (), reinterpret_cast<::GOutputMessage *> (messages.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gint _peel_return = _peel_iface->send_messages (_peel_this, _peel_messages, _peel_num_messages, flags, timeout, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  int
  default_vfunc_send_messages (peel::ArrayRef<OutputMessage> messages, int flags, int64_t timeout, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDatagramBasedInterface *_peel_iface = reinterpret_cast<::GDatagramBasedInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<DatagramBased> ()));
    guint _peel_num_messages;
    ::GDatagramBased *_peel_this = reinterpret_cast<::GDatagramBased *> (this);
    ::GOutputMessage *_peel_messages = (_peel_num_messages = messages.size (), reinterpret_cast<::GOutputMessage *> (messages.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gint _peel_return = _peel_iface->send_messages (_peel_this, _peel_messages, _peel_num_messages, flags, timeout, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GDatagramBasedInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_condition_check ()
    {
      ::GDatagramBasedInterface *klass = reinterpret_cast<::GDatagramBasedInterface *> (this);
      klass->condition_check = +[] (::GDatagramBased *datagram_based, ::GIOCondition condition) -> ::GIOCondition
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (datagram_based);
        GLib::IOCondition _peel_condition = static_cast<GLib::IOCondition> (condition);
        GLib::IOCondition _peel_return = _peel_this->DerivedClass::vfunc_condition_check (_peel_condition);
        return static_cast<::GIOCondition> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_condition_wait ()
    {
      ::GDatagramBasedInterface *klass = reinterpret_cast<::GDatagramBasedInterface *> (this);
      klass->condition_wait = +[] (::GDatagramBased *datagram_based, ::GIOCondition condition, gint64 timeout, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (datagram_based);
        GLib::IOCondition _peel_condition = static_cast<GLib::IOCondition> (condition);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_condition_wait (_peel_condition, timeout, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_create_source ()
    {
      ::GDatagramBasedInterface *klass = reinterpret_cast<::GDatagramBasedInterface *> (this);
      klass->create_source = +[] (::GDatagramBased *datagram_based, ::GIOCondition condition, ::GCancellable *cancellable) -> ::GSource *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (datagram_based);
        GLib::IOCondition _peel_condition = static_cast<GLib::IOCondition> (condition);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::RefPtr<GLib::Source> _peel_return = _peel_this->DerivedClass::vfunc_create_source (_peel_condition, _peel_cancellable);
        return reinterpret_cast<::GSource *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_receive_messages ()
    {
      ::GDatagramBasedInterface *klass = reinterpret_cast<::GDatagramBasedInterface *> (this);
      klass->receive_messages = +[] (::GDatagramBased *datagram_based, ::GInputMessage *messages, guint num_messages, gint flags, gint64 timeout, ::GCancellable *cancellable, ::GError **error) -> gint
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (datagram_based);
        peel::ArrayRef<InputMessage> _peel_messages = peel::ArrayRef<InputMessage> (reinterpret_cast<InputMessage *> (messages), num_messages);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        int _peel_return = _peel_this->DerivedClass::vfunc_receive_messages (_peel_messages, flags, timeout, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return _peel_return;
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_send_messages ()
    {
      ::GDatagramBasedInterface *klass = reinterpret_cast<::GDatagramBasedInterface *> (this);
      klass->send_messages = +[] (::GDatagramBased *datagram_based, ::GOutputMessage *messages, guint num_messages, gint flags, gint64 timeout, ::GCancellable *cancellable, ::GError **error) -> gint
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (datagram_based);
        peel::ArrayRef<OutputMessage> _peel_messages = peel::ArrayRef<OutputMessage> (reinterpret_cast<OutputMessage *> (messages), num_messages);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        int _peel_return = _peel_this->DerivedClass::vfunc_send_messages (_peel_messages, flags, timeout, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return _peel_return;
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GDatagramBasedInterface),
                 "DatagramBased::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GDatagramBasedInterface),
                 "DatagramBased::Iface align mismatch");
}; /* interface DatagramBased */
static_assert (sizeof (DatagramBased) == sizeof (GObject::Object),
               "DatagramBased size mismatch");
static_assert (alignof (DatagramBased) == alignof (GObject::Object),
               "DatagramBased align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GLib/Source.h>
