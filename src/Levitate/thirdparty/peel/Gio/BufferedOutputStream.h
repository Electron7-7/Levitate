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
#include <peel/Gio/FilterOutputStream.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class BufferedOutputStream;
class OutputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::BufferedOutputStream> ()
{
  return g_buffered_output_stream_get_type ();
}


namespace Gio
{
class BufferedOutputStream : public FilterOutputStream
/* implements Seekable */
{
private:
  unsigned char _placeholder[sizeof (::GBufferedOutputStream) - sizeof (FilterOutputStream)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  BufferedOutputStream () = delete;
  BufferedOutputStream (const BufferedOutputStream &) = delete;
  BufferedOutputStream (BufferedOutputStream &&) = delete;
  BufferedOutputStream &
  operator = (const BufferedOutputStream &) = delete;
  BufferedOutputStream &
  operator = (BufferedOutputStream &&) = delete;
protected:
  ~BufferedOutputStream () = default;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<BufferedOutputStream>
  create (OutputStream *base_stream) noexcept
  {
    ::GOutputStream *_peel_base_stream = reinterpret_cast<::GOutputStream *> (base_stream);
    ::GOutputStream *_peel_return = g_buffered_output_stream_new (_peel_base_stream);
    peel_assume (_peel_return);
    return peel::RefPtr<BufferedOutputStream>::adopt_ref (reinterpret_cast<BufferedOutputStream *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<BufferedOutputStream>
  create_sized (OutputStream *base_stream, size_t size) noexcept
  {
    ::GOutputStream *_peel_base_stream = reinterpret_cast<::GOutputStream *> (base_stream);
    ::GOutputStream *_peel_return = g_buffered_output_stream_new_sized (_peel_base_stream, size);
    peel_assume (_peel_return);
    return peel::RefPtr<BufferedOutputStream>::adopt_ref (reinterpret_cast<BufferedOutputStream *> (_peel_return));
  }

  bool
  get_auto_grow () noexcept
  {
    ::GBufferedOutputStream *_peel_this = reinterpret_cast<::GBufferedOutputStream *> (this);
    gboolean _peel_return = g_buffered_output_stream_get_auto_grow (_peel_this);
    return !!_peel_return;
  }

  size_t
  get_buffer_size () noexcept
  {
    ::GBufferedOutputStream *_peel_this = reinterpret_cast<::GBufferedOutputStream *> (this);
    return g_buffered_output_stream_get_buffer_size (_peel_this);
  }

  void
  set_auto_grow (bool auto_grow) noexcept
  {
    ::GBufferedOutputStream *_peel_this = reinterpret_cast<::GBufferedOutputStream *> (this);
    gboolean _peel_auto_grow = static_cast<gboolean> (auto_grow);
    g_buffered_output_stream_set_auto_grow (_peel_this, _peel_auto_grow);
  }

  void
  set_buffer_size (size_t size) noexcept
  {
    ::GBufferedOutputStream *_peel_this = reinterpret_cast<::GBufferedOutputStream *> (this);
    g_buffered_output_stream_set_buffer_size (_peel_this, size);
  }

  static peel::Property<bool>
  prop_auto_grow ()
  {
    return peel::Property<bool> { "auto-grow" };
  }

  static peel::Property<unsigned>
  prop_buffer_size ()
  {
    return peel::Property<unsigned> { "buffer-size" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<BufferedOutputStream> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public FilterOutputStream::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GBufferedOutputStreamClass) - sizeof (FilterOutputStream::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GBufferedOutputStreamClass),
                 "BufferedOutputStream::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GBufferedOutputStreamClass),
                 "BufferedOutputStream::Class align mismatch");
}; /* class BufferedOutputStream */

static_assert (sizeof (BufferedOutputStream) == sizeof (::GBufferedOutputStream),
               "BufferedOutputStream size mismatch");
static_assert (alignof (BufferedOutputStream) == alignof (::GBufferedOutputStream),
               "BufferedOutputStream align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
