#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>
#include <peel/GLib/Quark.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
struct IOChannel;
enum class IOChannelError : std::underlying_type<::GIOChannelError>::type;
enum class IOCondition : std::underlying_type<::GIOCondition>::type;
enum class IOError : std::underlying_type<::GIOError>::type;
enum class IOFlags : std::underlying_type<::GIOFlags>::type;
enum class IOStatus : std::underlying_type<::GIOStatus>::type;
struct Quark;
enum class SeekType : std::underlying_type<::GSeekType>::type;
struct String;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::IOChannel> ()
{
  return g_io_channel_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::IOChannel>
{
  typedef RefPtr<GLib::IOChannel> OwnedType;
  typedef GLib::IOChannel * UnownedType;

  static GLib::IOChannel *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::IOChannel *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::IOChannel * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::IOChannel>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::IOChannel>::adopt_ref (reinterpret_cast<GLib::IOChannel *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::IOChannel> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::IOChannel *
  cast_for_create (GLib::IOChannel * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::IOChannel>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::IOChannel> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::IOChannel, void>
{
  static void
  ref (GLib::IOChannel *ptr)
  {
    g_io_channel_ref (reinterpret_cast<::GIOChannel *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::IOChannel *ptr)
  {
    g_io_channel_unref (reinterpret_cast<::GIOChannel *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
struct IOChannel
{
private:
  ::GIOChannel inner peel_no_warn_unused;

  IOChannel () = delete;
  IOChannel (const IOChannel &) = delete;
  IOChannel (IOChannel &&) = delete;
  ~IOChannel ();

public:
  peel_nonnull_args (1, 2)
  static peel::RefPtr<IOChannel>
  create_file (const char *filename, const char *mode, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GIOChannel *_peel_return = g_io_channel_new_file (filename, mode, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<IOChannel>::adopt_ref (reinterpret_cast<IOChannel *> (_peel_return));
  }

  static peel::RefPtr<IOChannel>
  unix_new (int fd) noexcept
  {
    ::GIOChannel *_peel_return = g_io_channel_unix_new (fd);
    peel_assume (_peel_return);
    return peel::RefPtr<IOChannel>::adopt_ref (reinterpret_cast<IOChannel *> (_peel_return));
  }

  void
  close () noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    g_io_channel_close (_peel_this);
  }

  IOStatus
  flush (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    ::GError *_peel_error = nullptr;
    ::GIOStatus _peel_return = g_io_channel_flush (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<IOStatus> (_peel_return);
  }

  IOCondition
  get_buffer_condition () noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    ::GIOCondition _peel_return = g_io_channel_get_buffer_condition (_peel_this);
    return static_cast<IOCondition> (_peel_return);
  }

  size_t
  get_buffer_size () noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    return g_io_channel_get_buffer_size (_peel_this);
  }

  bool
  get_buffered () noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    gboolean _peel_return = g_io_channel_get_buffered (_peel_this);
    return !!_peel_return;
  }

  bool
  get_close_on_unref () noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    gboolean _peel_return = g_io_channel_get_close_on_unref (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  const char *
  get_encoding () noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    return g_io_channel_get_encoding (_peel_this);
  }

  IOFlags
  get_flags () noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    ::GIOFlags _peel_return = g_io_channel_get_flags (_peel_this);
    return static_cast<IOFlags> (_peel_return);
  }

  peel_arg_out (2) peel_returns_nonnull
  const char *
  get_line_term (int *length) noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    gint *_peel_length = reinterpret_cast<gint *> (length);
    return g_io_channel_get_line_term (_peel_this, _peel_length);
  }

  void
  init () noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    g_io_channel_init (_peel_this);
  }

  /* Unsupported for now: read: explicitly skipped */

  peel_arg_out (3)
  IOStatus
  read_chars (peel::ArrayRef<uint8_t> buf, size_t *bytes_read, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_count;
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    gchar *_peel_buf = (_peel_count = buf.size (), reinterpret_cast<gchar *> (buf.data ()));
    gsize *_peel_bytes_read = reinterpret_cast<gsize *> (bytes_read);
    ::GError *_peel_error = nullptr;
    ::GIOStatus _peel_return = g_io_channel_read_chars (_peel_this, _peel_buf, _peel_count, _peel_bytes_read, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<IOStatus> (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2)
  IOStatus
  read_line (peel::String *str_return, size_t *length, size_t *terminator_pos, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    gchar *_peel_str_return;
    gsize *_peel_length = reinterpret_cast<gsize *> (length);
    gsize *_peel_terminator_pos = reinterpret_cast<gsize *> (terminator_pos);
    ::GError *_peel_error = nullptr;
    ::GIOStatus _peel_return = g_io_channel_read_line (_peel_this, &_peel_str_return, _peel_length, _peel_terminator_pos, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        *str_return = peel::String::adopt_string (_peel_str_return);
      }
    return static_cast<IOStatus> (_peel_return);
  }

  /* Unsupported for now: read_line_string: explicitly skipped */

  IOStatus
  read_to_end (peel::UniquePtr<uint8_t[]> *str_return, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_length;
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    gchar *_peel_str_return;
    ::GError *_peel_error = nullptr;
    ::GIOStatus _peel_return = g_io_channel_read_to_end (_peel_this, &_peel_str_return, &_peel_length, &_peel_error);
    if (_peel_error)
      {
        if (error)
          *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
        else
          g_error_free (_peel_error);
      }
    else
      {
        if (error)
          *error = nullptr;
        *str_return = peel::UniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_str_return), _peel_length);
      }
    return static_cast<IOStatus> (_peel_return);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  IOStatus
  read_unichar (gunichar *thechar, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    ::GError *_peel_error = nullptr;
    ::GIOStatus _peel_return = g_io_channel_read_unichar (_peel_this, thechar, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<IOStatus> (_peel_return);
  }

  /* ref bound as RefTraits */

  IOError
  seek (int64_t offset, SeekType type) noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    ::GSeekType _peel_type = static_cast<::GSeekType> (type);
    ::GIOError _peel_return = g_io_channel_seek (_peel_this, offset, _peel_type);
    return static_cast<IOError> (_peel_return);
  }

  IOStatus
  seek_position (int64_t offset, SeekType type, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    ::GSeekType _peel_type = static_cast<::GSeekType> (type);
    ::GError *_peel_error = nullptr;
    ::GIOStatus _peel_return = g_io_channel_seek_position (_peel_this, offset, _peel_type, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<IOStatus> (_peel_return);
  }

  void
  set_buffer_size (size_t size) noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    g_io_channel_set_buffer_size (_peel_this, size);
  }

  void
  set_buffered (bool buffered) noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    gboolean _peel_buffered = static_cast<gboolean> (buffered);
    g_io_channel_set_buffered (_peel_this, _peel_buffered);
  }

  void
  set_close_on_unref (bool do_close) noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    gboolean _peel_do_close = static_cast<gboolean> (do_close);
    g_io_channel_set_close_on_unref (_peel_this, _peel_do_close);
  }

  IOStatus
  set_encoding (const char *encoding, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    ::GError *_peel_error = nullptr;
    ::GIOStatus _peel_return = g_io_channel_set_encoding (_peel_this, encoding, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<IOStatus> (_peel_return);
  }

  IOStatus
  set_flags (IOFlags flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    ::GIOFlags _peel_flags = static_cast<::GIOFlags> (flags);
    ::GError *_peel_error = nullptr;
    ::GIOStatus _peel_return = g_io_channel_set_flags (_peel_this, _peel_flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<IOStatus> (_peel_return);
  }

  void
  set_line_term (const char *line_term, int length) noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    g_io_channel_set_line_term (_peel_this, line_term, length);
  }

  IOStatus
  shutdown (bool flush, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    gboolean _peel_flush = static_cast<gboolean> (flush);
    ::GError *_peel_error = nullptr;
    ::GIOStatus _peel_return = g_io_channel_shutdown (_peel_this, _peel_flush, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<IOStatus> (_peel_return);
  }

  int
  unix_get_fd () noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    return g_io_channel_unix_get_fd (_peel_this);
  }

  /* unref bound as RefTraits */

  /* Unsupported for now: write: explicitly skipped */

  peel_arg_out (4) peel_nonnull_args (4)
  IOStatus
  write_chars (const uint8_t *buf, gssize count, size_t *bytes_written, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    const gchar *_peel_buf = reinterpret_cast<const gchar *> (buf);
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GError *_peel_error = nullptr;
    ::GIOStatus _peel_return = g_io_channel_write_chars (_peel_this, _peel_buf, count, _peel_bytes_written, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<IOStatus> (_peel_return);
  }

  IOStatus
  write_unichar (gunichar thechar, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GIOChannel *_peel_this = reinterpret_cast<::GIOChannel *> (this);
    ::GError *_peel_error = nullptr;
    ::GIOStatus _peel_return = g_io_channel_write_unichar (_peel_this, thechar, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<IOStatus> (_peel_return);
  }

  static IOChannelError
  error_from_errno (int en) noexcept
  {
    ::GIOChannelError _peel_return = g_io_channel_error_from_errno (en);
    return static_cast<IOChannelError> (_peel_return);
  }

  static Quark
  error_quark () noexcept
  {
    ::GQuark _peel_return = g_io_channel_error_quark ();
    return static_cast<Quark> (_peel_return);
  }
}; /* record IOChannel */

static_assert (sizeof (IOChannel) == sizeof (::GIOChannel),
               "IOChannel size mismatch");
static_assert (alignof (IOChannel) == alignof (::GIOChannel),
               "IOChannel align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
