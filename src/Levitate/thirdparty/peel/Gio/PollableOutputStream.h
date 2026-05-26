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
#include <peel/Gio/OutputStream.h>

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
struct OutputVector;
class /* interface */ PollableOutputStream;
enum class PollableReturn : std::underlying_type<::GPollableReturn>::type;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::PollableOutputStream> ()
{
  return g_pollable_output_stream_get_type ();
}


namespace Gio
{
class /* interface */ PollableOutputStream : public OutputStream
/* requires OutputStream */
{
private:
  PollableOutputStream () = delete;
  PollableOutputStream (const PollableOutputStream &) = delete;
  PollableOutputStream (PollableOutputStream &&) = delete;

  PollableOutputStream &
  operator = (const PollableOutputStream &) = delete;
  PollableOutputStream &
  operator = (PollableOutputStream &&) = delete;

protected:
  ~PollableOutputStream () = default;

public:

  bool
  can_poll () noexcept
  {
    ::GPollableOutputStream *_peel_this = reinterpret_cast<::GPollableOutputStream *> (this);
    gboolean _peel_return = g_pollable_output_stream_can_poll (_peel_this);
    return !!_peel_return;
  }

  peel::RefPtr<GLib::Source>
  create_source (Cancellable *cancellable) noexcept
  {
    ::GPollableOutputStream *_peel_this = reinterpret_cast<::GPollableOutputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GSource *_peel_return = g_pollable_output_stream_create_source (_peel_this, _peel_cancellable);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Source>::adopt_ref (reinterpret_cast<GLib::Source *> (_peel_return));
  }

  bool
  is_writable () noexcept
  {
    ::GPollableOutputStream *_peel_this = reinterpret_cast<::GPollableOutputStream *> (this);
    gboolean _peel_return = g_pollable_output_stream_is_writable (_peel_this);
    return !!_peel_return;
  }

  gssize
  write_nonblocking (peel::ArrayRef<uint8_t> buffer, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_count;
    ::GPollableOutputStream *_peel_this = reinterpret_cast<::GPollableOutputStream *> (this);
    void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_pollable_output_stream_write_nonblocking (_peel_this, _peel_buffer, _peel_count, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_arg_out (3)
  PollableReturn
  writev_nonblocking (peel::ArrayRef<const OutputVector> vectors, size_t *bytes_written, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_n_vectors;
    ::GPollableOutputStream *_peel_this = reinterpret_cast<::GPollableOutputStream *> (this);
    const ::GOutputVector *_peel_vectors = (_peel_n_vectors = vectors.size (), reinterpret_cast<const ::GOutputVector *> (vectors.data ()));
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GPollableReturn _peel_return = g_pollable_output_stream_writev_nonblocking (_peel_this, _peel_vectors, _peel_n_vectors, _peel_bytes_written, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<PollableReturn> (_peel_return);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_can_poll () noexcept
  {
    ::GPollableOutputStreamInterface *_peel_iface = reinterpret_cast<::GPollableOutputStreamInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<PollableOutputStream> ())->peek_parent ());
    ::GPollableOutputStream *_peel_this = reinterpret_cast<::GPollableOutputStream *> (this);
    gboolean _peel_return = _peel_iface->can_poll (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_can_poll () noexcept
  {
    ::GPollableOutputStreamInterface *_peel_iface = reinterpret_cast<::GPollableOutputStreamInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<PollableOutputStream> ()));
    ::GPollableOutputStream *_peel_this = reinterpret_cast<::GPollableOutputStream *> (this);
    gboolean _peel_return = _peel_iface->can_poll (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::RefPtr<GLib::Source>
  parent_vfunc_create_source (Cancellable *cancellable) noexcept
  {
    ::GPollableOutputStreamInterface *_peel_iface = reinterpret_cast<::GPollableOutputStreamInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<PollableOutputStream> ())->peek_parent ());
    ::GPollableOutputStream *_peel_this = reinterpret_cast<::GPollableOutputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GSource *_peel_return = _peel_iface->create_source (_peel_this, _peel_cancellable);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Source>::adopt_ref (reinterpret_cast<GLib::Source *> (_peel_return));
  }

  peel::RefPtr<GLib::Source>
  default_vfunc_create_source (Cancellable *cancellable) noexcept
  {
    ::GPollableOutputStreamInterface *_peel_iface = reinterpret_cast<::GPollableOutputStreamInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<PollableOutputStream> ()));
    ::GPollableOutputStream *_peel_this = reinterpret_cast<::GPollableOutputStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GSource *_peel_return = _peel_iface->create_source (_peel_this, _peel_cancellable);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Source>::adopt_ref (reinterpret_cast<GLib::Source *> (_peel_return));
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_is_writable () noexcept
  {
    ::GPollableOutputStreamInterface *_peel_iface = reinterpret_cast<::GPollableOutputStreamInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<PollableOutputStream> ())->peek_parent ());
    ::GPollableOutputStream *_peel_this = reinterpret_cast<::GPollableOutputStream *> (this);
    gboolean _peel_return = _peel_iface->is_writable (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_is_writable () noexcept
  {
    ::GPollableOutputStreamInterface *_peel_iface = reinterpret_cast<::GPollableOutputStreamInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<PollableOutputStream> ()));
    ::GPollableOutputStream *_peel_this = reinterpret_cast<::GPollableOutputStream *> (this);
    gboolean _peel_return = _peel_iface->is_writable (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  gssize
  parent_vfunc_write_nonblocking (peel::ArrayRef<uint8_t> buffer, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GPollableOutputStreamInterface *_peel_iface = reinterpret_cast<::GPollableOutputStreamInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<PollableOutputStream> ())->peek_parent ());
    gsize _peel_count;
    ::GPollableOutputStream *_peel_this = reinterpret_cast<::GPollableOutputStream *> (this);
    void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
    ::GError *_peel_error = nullptr;
    gssize _peel_return = _peel_iface->write_nonblocking (_peel_this, _peel_buffer, _peel_count, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  gssize
  default_vfunc_write_nonblocking (peel::ArrayRef<uint8_t> buffer, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GPollableOutputStreamInterface *_peel_iface = reinterpret_cast<::GPollableOutputStreamInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<PollableOutputStream> ()));
    gsize _peel_count;
    ::GPollableOutputStream *_peel_this = reinterpret_cast<::GPollableOutputStream *> (this);
    void *_peel_buffer = (_peel_count = buffer.size (), reinterpret_cast<void *> (buffer.data ()));
    ::GError *_peel_error = nullptr;
    gssize _peel_return = _peel_iface->write_nonblocking (_peel_this, _peel_buffer, _peel_count, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  template<typename DerivedClass>
  peel_arg_out (3)
  PollableReturn
  parent_vfunc_writev_nonblocking (peel::ArrayRef<const OutputVector> vectors, size_t *bytes_written, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GPollableOutputStreamInterface *_peel_iface = reinterpret_cast<::GPollableOutputStreamInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<PollableOutputStream> ())->peek_parent ());
    gsize _peel_n_vectors;
    ::GPollableOutputStream *_peel_this = reinterpret_cast<::GPollableOutputStream *> (this);
    const ::GOutputVector *_peel_vectors = (_peel_n_vectors = vectors.size (), reinterpret_cast<const ::GOutputVector *> (vectors.data ()));
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GError *_peel_error = nullptr;
    ::GPollableReturn _peel_return = _peel_iface->writev_nonblocking (_peel_this, _peel_vectors, _peel_n_vectors, _peel_bytes_written, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<PollableReturn> (_peel_return);
  }

  peel_arg_out (3)
  PollableReturn
  default_vfunc_writev_nonblocking (peel::ArrayRef<const OutputVector> vectors, size_t *bytes_written, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GPollableOutputStreamInterface *_peel_iface = reinterpret_cast<::GPollableOutputStreamInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<PollableOutputStream> ()));
    gsize _peel_n_vectors;
    ::GPollableOutputStream *_peel_this = reinterpret_cast<::GPollableOutputStream *> (this);
    const ::GOutputVector *_peel_vectors = (_peel_n_vectors = vectors.size (), reinterpret_cast<const ::GOutputVector *> (vectors.data ()));
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GError *_peel_error = nullptr;
    ::GPollableReturn _peel_return = _peel_iface->writev_nonblocking (_peel_this, _peel_vectors, _peel_n_vectors, _peel_bytes_written, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<PollableReturn> (_peel_return);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GPollableOutputStreamInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_can_poll ()
    {
      ::GPollableOutputStreamInterface *klass = reinterpret_cast<::GPollableOutputStreamInterface *> (this);
      klass->can_poll = +[] (::GPollableOutputStream *stream) -> gboolean
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
      ::GPollableOutputStreamInterface *klass = reinterpret_cast<::GPollableOutputStreamInterface *> (this);
      klass->create_source = +[] (::GPollableOutputStream *stream, ::GCancellable *cancellable) -> ::GSource *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::RefPtr<GLib::Source> _peel_return = _peel_this->DerivedClass::vfunc_create_source (_peel_cancellable);
        return reinterpret_cast<::GSource *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_is_writable ()
    {
      ::GPollableOutputStreamInterface *klass = reinterpret_cast<::GPollableOutputStreamInterface *> (this);
      klass->is_writable = +[] (::GPollableOutputStream *stream) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        bool _peel_return = _peel_this->DerivedClass::vfunc_is_writable ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_write_nonblocking ()
    {
      ::GPollableOutputStreamInterface *klass = reinterpret_cast<::GPollableOutputStreamInterface *> (this);
      klass->write_nonblocking = +[] (::GPollableOutputStream *stream, void *buffer, gsize count, ::GError **error) -> gssize
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        peel::ArrayRef<uint8_t> _peel_buffer = peel::ArrayRef<uint8_t> (reinterpret_cast<uint8_t *> (buffer), count);
        peel::UniquePtr<GLib::Error> _peel_error;
        gssize _peel_return = _peel_this->DerivedClass::vfunc_write_nonblocking (_peel_buffer, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return _peel_return;
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_writev_nonblocking ()
    {
      ::GPollableOutputStreamInterface *klass = reinterpret_cast<::GPollableOutputStreamInterface *> (this);
      klass->writev_nonblocking = +[] (::GPollableOutputStream *stream, const ::GOutputVector *vectors, gsize n_vectors, gsize *bytes_written, ::GError **error) -> ::GPollableReturn
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        peel::ArrayRef<const OutputVector> _peel_vectors = peel::ArrayRef<const OutputVector> (reinterpret_cast<const OutputVector *> (vectors), n_vectors);
        peel::UniquePtr<GLib::Error> _peel_error;
        PollableReturn _peel_return = _peel_this->DerivedClass::vfunc_writev_nonblocking (_peel_vectors, bytes_written, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<::GPollableReturn> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GPollableOutputStreamInterface),
                 "PollableOutputStream::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GPollableOutputStreamInterface),
                 "PollableOutputStream::Iface align mismatch");
}; /* interface PollableOutputStream */
static_assert (sizeof (PollableOutputStream) == sizeof (OutputStream),
               "PollableOutputStream size mismatch");
static_assert (alignof (PollableOutputStream) == alignof (OutputStream),
               "PollableOutputStream align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GLib/Source.h>
