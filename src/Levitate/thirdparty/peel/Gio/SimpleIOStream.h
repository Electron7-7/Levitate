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
#include <peel/Gio/IOStream.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class InputStream;
class OutputStream;
class SimpleIOStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::SimpleIOStream> ()
{
  return g_simple_io_stream_get_type ();
}


namespace Gio
{
class SimpleIOStream : public IOStream
/* non-derivable */
{
private:
  using IOStream::splice_finish;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SimpleIOStream () = delete;
  SimpleIOStream (const SimpleIOStream &) = delete;
  SimpleIOStream (SimpleIOStream &&) = delete;
  SimpleIOStream &
  operator = (const SimpleIOStream &) = delete;
  SimpleIOStream &
  operator = (SimpleIOStream &&) = delete;
  ~SimpleIOStream () = delete;
public:

  peel_nonnull_args (1, 2)
  static peel::RefPtr<SimpleIOStream>
  create (InputStream *input_stream, OutputStream *output_stream) noexcept
  {
    ::GInputStream *_peel_input_stream = reinterpret_cast<::GInputStream *> (input_stream);
    ::GOutputStream *_peel_output_stream = reinterpret_cast<::GOutputStream *> (output_stream);
    ::GIOStream *_peel_return = g_simple_io_stream_new (_peel_input_stream, _peel_output_stream);
    peel_assume (_peel_return);
    return peel::RefPtr<SimpleIOStream>::adopt_ref (reinterpret_cast<SimpleIOStream *> (_peel_return));
  }

  static peel::Property<InputStream>
  prop_input_stream ()
  {
    return peel::Property<InputStream> { "input-stream" };
  }

  static peel::Property<OutputStream>
  prop_output_stream ()
  {
    return peel::Property<OutputStream> { "output-stream" };
  }
}; /* class SimpleIOStream */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
