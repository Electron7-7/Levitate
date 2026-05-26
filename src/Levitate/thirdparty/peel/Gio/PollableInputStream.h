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
#include <peel/GObject/TypeInterface.h>
#include <peel/Gio/InputStream.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
struct Source;
} /* namespace GLib */

namespace Gio
{
class Cancellable;
class /* interface */ PollableInputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::PollableInputStream> ()
{
  return g_pollable_input_stream_get_type ();
}


namespace Gio
{
class /* interface */ PollableInputStream : public InputStream
/* requires InputStream */
{
private:
  PollableInputStream () = delete;
  PollableInputStream (const PollableInputStream &) = delete;
  PollableInputStream (PollableInputStream &&) = delete;

  PollableInputStream &
  operator = (const PollableInputStream &) = delete;
  PollableInputStream &
  operator = (PollableInputStream &&) = delete;

protected:
  ~PollableInputStream () = default;

public:

  bool
  can_poll () noexcept
  {
    ::GPollableInputStream *_peel_this = reinterpret_cast<::GPollableInputStream *> (this);
    gboolean _peel_return = g_pollable_input_stream_can_poll (_peel_this);
    return !!_peel_return;
  }

  peel::RefPtr<GLib::Source>
  create_source (Cancellable *cancellable) noexcept
  {
    ::GPollableInputStream *_peel_this = reinterpret_cast<::GPollableInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GSource *_peel_return = g_pollable_input_stream_create_source (_peel_this, _peel_cancellable);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Source>::adopt_ref (reinterpret_cast<GLib::Source *> (_peel_return));
  }

  bool
  is_readable () noexcept
  {
    ::GPollableInputStream *_peel_this = reinterpret_cast<::GPollableInputStream *> (this);
    gboolean _peel_return = g_pollable_input_stream_is_readable (_peel_this);
    return !!_peel_return;
  }

  gssize
  read_nonblocking (peel::ArrayRef<uint8_t> buffer, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_count;
    ::GPollableInputStream *_peel_this = reinterpret_cast<::GPollableInputStream *> (this);
    void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_pollable_input_stream_read_nonblocking (_peel_this, _peel_buffer, _peel_count, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_can_poll () noexcept
  {
    ::GPollableInputStreamInterface *_peel_iface = reinterpret_cast<::GPollableInputStreamInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<PollableInputStream> ())->peek_parent ());
    ::GPollableInputStream *_peel_this = reinterpret_cast<::GPollableInputStream *> (this);
    gboolean _peel_return = _peel_iface->can_poll (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_can_poll () noexcept
  {
    ::GPollableInputStreamInterface *_peel_iface = reinterpret_cast<::GPollableInputStreamInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<PollableInputStream> ()));
    ::GPollableInputStream *_peel_this = reinterpret_cast<::GPollableInputStream *> (this);
    gboolean _peel_return = _peel_iface->can_poll (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::RefPtr<GLib::Source>
  parent_vfunc_create_source (Cancellable *cancellable) noexcept
  {
    ::GPollableInputStreamInterface *_peel_iface = reinterpret_cast<::GPollableInputStreamInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<PollableInputStream> ())->peek_parent ());
    ::GPollableInputStream *_peel_this = reinterpret_cast<::GPollableInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GSource *_peel_return = _peel_iface->create_source (_peel_this, _peel_cancellable);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Source>::adopt_ref (reinterpret_cast<GLib::Source *> (_peel_return));
  }

  peel::RefPtr<GLib::Source>
  default_vfunc_create_source (Cancellable *cancellable) noexcept
  {
    ::GPollableInputStreamInterface *_peel_iface = reinterpret_cast<::GPollableInputStreamInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<PollableInputStream> ()));
    ::GPollableInputStream *_peel_this = reinterpret_cast<::GPollableInputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GSource *_peel_return = _peel_iface->create_source (_peel_this, _peel_cancellable);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Source>::adopt_ref (reinterpret_cast<GLib::Source *> (_peel_return));
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_is_readable () noexcept
  {
    ::GPollableInputStreamInterface *_peel_iface = reinterpret_cast<::GPollableInputStreamInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<PollableInputStream> ())->peek_parent ());
    ::GPollableInputStream *_peel_this = reinterpret_cast<::GPollableInputStream *> (this);
    gboolean _peel_return = _peel_iface->is_readable (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_is_readable () noexcept
  {
    ::GPollableInputStreamInterface *_peel_iface = reinterpret_cast<::GPollableInputStreamInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<PollableInputStream> ()));
    ::GPollableInputStream *_peel_this = reinterpret_cast<::GPollableInputStream *> (this);
    gboolean _peel_return = _peel_iface->is_readable (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  gssize
  parent_vfunc_read_nonblocking (peel::ArrayRef<uint8_t> buffer, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GPollableInputStreamInterface *_peel_iface = reinterpret_cast<::GPollableInputStreamInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<PollableInputStream> ())->peek_parent ());
    gsize _peel_count;
    ::GPollableInputStream *_peel_this = reinterpret_cast<::GPollableInputStream *> (this);
    void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
    ::GError *_peel_error = nullptr;
    gssize _peel_return = _peel_iface->read_nonblocking (_peel_this, _peel_buffer, _peel_count, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  gssize
  default_vfunc_read_nonblocking (peel::ArrayRef<uint8_t> buffer, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GPollableInputStreamInterface *_peel_iface = reinterpret_cast<::GPollableInputStreamInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<PollableInputStream> ()));
    gsize _peel_count;
    ::GPollableInputStream *_peel_this = reinterpret_cast<::GPollableInputStream *> (this);
    void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
    ::GError *_peel_error = nullptr;
    gssize _peel_return = _peel_iface->read_nonblocking (_peel_this, _peel_buffer, _peel_count, error ? &_peel_error : nullptr);
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

    unsigned char _placeholder[sizeof (::GPollableInputStreamInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_can_poll ()
    {
      ::GPollableInputStreamInterface *klass = reinterpret_cast<::GPollableInputStreamInterface *> (this);
      klass->can_poll = +[] (::GPollableInputStream *stream) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_poll ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_create_source ()
    {
      ::GPollableInputStreamInterface *klass = reinterpret_cast<::GPollableInputStreamInterface *> (this);
      klass->create_source = +[] (::GPollableInputStream *stream, ::GCancellable *cancellable) -> ::GSource *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::RefPtr<GLib::Source> _peel_return = _peel_this->DerivedClass::vfunc_create_source (_peel_cancellable);
        return reinterpret_cast<::GSource *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_is_readable ()
    {
      ::GPollableInputStreamInterface *klass = reinterpret_cast<::GPollableInputStreamInterface *> (this);
      klass->is_readable = +[] (::GPollableInputStream *stream) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        bool _peel_return = _peel_this->DerivedClass::vfunc_is_readable ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_read_nonblocking ()
    {
      ::GPollableInputStreamInterface *klass = reinterpret_cast<::GPollableInputStreamInterface *> (this);
      klass->read_nonblocking = +[] (::GPollableInputStream *stream, void *buffer, gsize count, ::GError **error) -> gssize
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        peel::ArrayRef<uint8_t> _peel_buffer = peel::ArrayRef<uint8_t> (reinterpret_cast<uint8_t *> (buffer), count);
        peel::UniquePtr<GLib::Error> _peel_error;
        gssize _peel_return = _peel_this->DerivedClass::vfunc_read_nonblocking (_peel_buffer, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return _peel_return;
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GPollableInputStreamInterface),
                 "PollableInputStream::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GPollableInputStreamInterface),
                 "PollableInputStream::Iface align mismatch");
}; /* interface PollableInputStream */
static_assert (sizeof (PollableInputStream) == sizeof (InputStream),
               "PollableInputStream size mismatch");
static_assert (alignof (PollableInputStream) == alignof (InputStream),
               "PollableInputStream align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GLib/Source.h>
