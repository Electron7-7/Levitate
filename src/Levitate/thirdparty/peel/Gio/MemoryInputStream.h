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
#include <peel/Gio/PollableInputStream.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
} /* namespace GLib */

namespace Gio
{
class MemoryInputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::MemoryInputStream> ()
{
  return g_memory_input_stream_get_type ();
}


namespace Gio
{
class MemoryInputStream : public PollableInputStream
/* extends InputStream */
/* implements PollableInputStream, Seekable */
{
private:
  unsigned char _placeholder[sizeof (::GMemoryInputStream) - sizeof (PollableInputStream)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MemoryInputStream () = delete;
  MemoryInputStream (const MemoryInputStream &) = delete;
  MemoryInputStream (MemoryInputStream &&) = delete;
  MemoryInputStream &
  operator = (const MemoryInputStream &) = delete;
  MemoryInputStream &
  operator = (MemoryInputStream &&) = delete;
protected:
  ~MemoryInputStream () = default;
public:

  static peel::RefPtr<MemoryInputStream>
  create () noexcept
  {
    ::GInputStream *_peel_return = g_memory_input_stream_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<MemoryInputStream>::adopt_ref (reinterpret_cast<MemoryInputStream *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<MemoryInputStream>
  create_from_bytes (GLib::Bytes *bytes) noexcept
  {
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    ::GInputStream *_peel_return = g_memory_input_stream_new_from_bytes (_peel_bytes);
    peel_assume (_peel_return);
    return peel::RefPtr<MemoryInputStream>::adopt_ref (reinterpret_cast<MemoryInputStream *> (_peel_return));
  }

  static peel::RefPtr<MemoryInputStream>
  create_from_data (peel::UniquePtr<uint8_t[]> data, ::GDestroyNotify destroy) noexcept
  {
    gssize _peel_len;
    void *_peel_data = (_peel_len = data.size (), reinterpret_cast<void *> (std::move (data).release_ref ()));
    ::GInputStream *_peel_return = g_memory_input_stream_new_from_data (_peel_data, _peel_len, destroy);
    peel_assume (_peel_return);
    return peel::RefPtr<MemoryInputStream>::adopt_ref (reinterpret_cast<MemoryInputStream *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  add_bytes (GLib::Bytes *bytes) noexcept
  {
    ::GMemoryInputStream *_peel_this = reinterpret_cast<::GMemoryInputStream *> (this);
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    g_memory_input_stream_add_bytes (_peel_this, _peel_bytes);
  }

  void
  add_data (peel::UniquePtr<uint8_t[]> data, ::GDestroyNotify destroy) noexcept
  {
    gssize _peel_len;
    ::GMemoryInputStream *_peel_this = reinterpret_cast<::GMemoryInputStream *> (this);
    void *_peel_data = (_peel_len = data.size (), reinterpret_cast<void *> (std::move (data).release_ref ()));
    g_memory_input_stream_add_data (_peel_this, _peel_data, _peel_len, destroy);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<MemoryInputStream> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public InputStream::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GMemoryInputStreamClass) - sizeof (InputStream::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GMemoryInputStreamClass),
                 "MemoryInputStream::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GMemoryInputStreamClass),
                 "MemoryInputStream::Class align mismatch");
}; /* class MemoryInputStream */

static_assert (sizeof (MemoryInputStream) == sizeof (::GMemoryInputStream),
               "MemoryInputStream size mismatch");
static_assert (alignof (MemoryInputStream) == alignof (::GMemoryInputStream),
               "MemoryInputStream align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
