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
#include <peel/Gio/PollableOutputStream.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
} /* namespace GLib */

namespace Gio
{
class MemoryOutputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::MemoryOutputStream> ()
{
  return g_memory_output_stream_get_type ();
}


namespace Gio
{
class MemoryOutputStream : public PollableOutputStream
/* extends OutputStream */
/* implements PollableOutputStream, Seekable */
{
private:
  unsigned char _placeholder[sizeof (::GMemoryOutputStream) - sizeof (PollableOutputStream)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MemoryOutputStream () = delete;
  MemoryOutputStream (const MemoryOutputStream &) = delete;
  MemoryOutputStream (MemoryOutputStream &&) = delete;
  MemoryOutputStream &
  operator = (const MemoryOutputStream &) = delete;
  MemoryOutputStream &
  operator = (MemoryOutputStream &&) = delete;
protected:
  ~MemoryOutputStream () = default;
public:

  static peel::RefPtr<MemoryOutputStream>
  create (void *data, size_t size, ::GReallocFunc realloc_function, ::GDestroyNotify destroy_function) noexcept
  {
    ::GOutputStream *_peel_return = g_memory_output_stream_new (data, size, realloc_function, destroy_function);
    peel_assume (_peel_return);
    return peel::RefPtr<MemoryOutputStream>::adopt_ref (reinterpret_cast<MemoryOutputStream *> (_peel_return));
  }

  static peel::RefPtr<MemoryOutputStream>
  create_resizable () noexcept
  {
    ::GOutputStream *_peel_return = g_memory_output_stream_new_resizable ();
    peel_assume (_peel_return);
    return peel::RefPtr<MemoryOutputStream>::adopt_ref (reinterpret_cast<MemoryOutputStream *> (_peel_return));
  }

  void *
  get_data () noexcept
  {
    ::GMemoryOutputStream *_peel_this = reinterpret_cast<::GMemoryOutputStream *> (this);
    return g_memory_output_stream_get_data (_peel_this);
  }

  size_t
  get_data_size () noexcept
  {
    ::GMemoryOutputStream *_peel_this = reinterpret_cast<::GMemoryOutputStream *> (this);
    return g_memory_output_stream_get_data_size (_peel_this);
  }

  size_t
  get_size () noexcept
  {
    ::GMemoryOutputStream *_peel_this = reinterpret_cast<::GMemoryOutputStream *> (this);
    return g_memory_output_stream_get_size (_peel_this);
  }

  peel::RefPtr<GLib::Bytes>
  steal_as_bytes () noexcept
  {
    ::GMemoryOutputStream *_peel_this = reinterpret_cast<::GMemoryOutputStream *> (this);
    ::GBytes *_peel_return = g_memory_output_stream_steal_as_bytes (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  void *
  steal_data () noexcept
  {
    ::GMemoryOutputStream *_peel_this = reinterpret_cast<::GMemoryOutputStream *> (this);
    return g_memory_output_stream_steal_data (_peel_this);
  }

  static peel::Property<void *>
  prop_data ()
  {
    return peel::Property<void *> { "data" };
  }

  /* Unsupported for now: data-size: glong / gulong properties not supported */

  static peel::Property<void *>
  prop_destroy_function ()
  {
    return peel::Property<void *> { "destroy-function" };
  }

  static peel::Property<void *>
  prop_realloc_function ()
  {
    return peel::Property<void *> { "realloc-function" };
  }

  /* Unsupported for now: size: glong / gulong properties not supported */

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<MemoryOutputStream> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public OutputStream::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GMemoryOutputStreamClass) - sizeof (OutputStream::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GMemoryOutputStreamClass),
                 "MemoryOutputStream::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GMemoryOutputStreamClass),
                 "MemoryOutputStream::Class align mismatch");
}; /* class MemoryOutputStream */

static_assert (sizeof (MemoryOutputStream) == sizeof (::GMemoryOutputStream),
               "MemoryOutputStream size mismatch");
static_assert (alignof (MemoryOutputStream) == alignof (::GMemoryOutputStream),
               "MemoryOutputStream align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
