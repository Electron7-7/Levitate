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
#include <glib/gstdio.h>
#include <peel/GLib/List.h>
#include <peel/GLib/Quark.h>
#include <peel/GLib/SList.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
enum class ChecksumType : std::underlying_type<::GChecksumType>::type;
class /* record */ Data;
struct DebugKey;
struct Error;
enum class FileError : std::underlying_type<::GFileError>::type;
enum class FileSetContentsFlags : std::underlying_type<::GFileSetContentsFlags>::type;
enum class FileTest : std::underlying_type<::GFileTest>::type;
enum class FormatSizeFlags : std::underlying_type<::GFormatSizeFlags>::type;
class /* record */ IConv;
struct IOChannel;
enum class IOCondition : std::underlying_type<::GIOCondition>::type;
struct LogField;
enum class LogLevelFlags : std::underlying_type<::GLogLevelFlags>::type;
enum class LogWriterOutput : std::underlying_type<::GLogWriterOutput>::type;
enum class MarkupCollectType : std::underlying_type<::GMarkupCollectType>::type;
struct MemVTable;
enum class NormalizeMode : std::underlying_type<::GNormalizeMode>::type;
class /* record */ PatternSpec;
struct PollFD;
struct Quark;
enum class SliceConfig : std::underlying_type<::GSliceConfig>::type;
struct Source;
enum class SpawnFlags : std::underlying_type<::GSpawnFlags>::type;
class /* record */ StatBuf;
class /* record */ TestCase;
enum class TestFileType : std::underlying_type<::GTestFileType>::type;
enum class TestLogType : std::underlying_type<::GTestLogType>::type;
enum class TestSubprocessFlags : std::underlying_type<::GTestSubprocessFlags>::type;
class /* record */ TestSuite;
enum class TestTrapFlags : std::underlying_type<::GTestTrapFlags>::type;
struct TimeVal;
enum class UnicodeBreakType : std::underlying_type<::GUnicodeBreakType>::type;
enum class UnicodeScript : std::underlying_type<::GUnicodeScript>::type;
enum class UnicodeType : std::underlying_type<::GUnicodeType>::type;
enum class UserDirectory : std::underlying_type<::GUserDirectory>::type;
class /* record */ Variant;
} /* namespace GLib */


namespace GLib
{
/* Unsupported for now: access: explicitly skipped */

peel_no_warn_unused
static void *
aligned_alloc (size_t n_blocks, size_t n_block_bytes, size_t alignment) noexcept
{
  return g_aligned_alloc (n_blocks, n_block_bytes, alignment);
}

peel_no_warn_unused
static void *
aligned_alloc0 (size_t n_blocks, size_t n_block_bytes, size_t alignment) noexcept
{
  return g_aligned_alloc0 (n_blocks, n_block_bytes, alignment);
}

peel_no_warn_unused
static void
aligned_free (void *mem) noexcept
{
  g_aligned_free (mem);
}

peel_no_warn_unused
static void
aligned_free_sized (void *mem, size_t alignment, size_t size) noexcept
{
  g_aligned_free_sized (mem, alignment, size);
}

/* array_new_take moved to Array.new_take */

/* array_new_take_zero_terminated moved to Array.new_take_zero_terminated */

peel_no_warn_unused
static int
ascii_digit_value (char c) noexcept
{
  return g_ascii_digit_value (c);
}

/* Unsupported for now: ascii_dtostr: explicitly skipped */

/* Unsupported for now: ascii_formatd: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1, 2)
static int
ascii_strcasecmp (const char *s1, const char *s2) noexcept
{
  return g_ascii_strcasecmp (s1, s2);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
ascii_strdown (const char *str, gssize len) noexcept
{
  gchar *_peel_return = g_ascii_strdown (str, len);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_arg_out (5) peel_nonnull_args (1)
static bool
ascii_string_to_signed (const char *str, unsigned base, int64_t min, int64_t max, int64_t *out_num, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gint64 *_peel_out_num = reinterpret_cast<gint64 *> (out_num);
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_ascii_string_to_signed (str, base, min, max, _peel_out_num, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_out (5) peel_nonnull_args (1)
static bool
ascii_string_to_unsigned (const char *str, unsigned base, uint64_t min, uint64_t max, uint64_t *out_num, peel::UniquePtr<GLib::Error> *error) noexcept
{
  guint64 *_peel_out_num = reinterpret_cast<guint64 *> (out_num);
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_ascii_string_to_unsigned (str, base, min, max, _peel_out_num, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1, 2)
static int
ascii_strncasecmp (const char *s1, const char *s2, size_t n) noexcept
{
  return g_ascii_strncasecmp (s1, s2, n);
}

/* Unsupported for now: ascii_strtod: explicitly skipped */

/* Unsupported for now: ascii_strtoll: explicitly skipped */

/* Unsupported for now: ascii_strtoull: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
ascii_strup (const char *str, gssize len) noexcept
{
  gchar *_peel_return = g_ascii_strup (str, len);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static char
ascii_tolower (char c) noexcept
{
  return g_ascii_tolower (c);
}

peel_no_warn_unused
static char
ascii_toupper (char c) noexcept
{
  return g_ascii_toupper (c);
}

peel_no_warn_unused
static int
ascii_xdigit_value (char c) noexcept
{
  return g_ascii_xdigit_value (c);
}

peel_no_warn_unused peel_nonnull_args (1, 2, 4, 5)
static void
assert_warning (const char *log_domain, const char *file, int line, const char *pretty_function, const char *expression) noexcept
{
  g_assert_warning (log_domain, file, line, pretty_function, expression);
}

peel_no_warn_unused peel_nonnull_args (1, 2, 4, 5)
static void
assertion_message (const char *domain, const char *file, int line, const char *func, const char *message) noexcept
{
  g_assertion_message (domain, file, line, func, message);
}

peel_no_warn_unused peel_nonnull_args (1, 2, 4, 5, 7)
static void
assertion_message_cmpint (const char *domain, const char *file, int line, const char *func, const char *expr, uint64_t arg1, const char *cmp, uint64_t arg2, char numtype) noexcept
{
  g_assertion_message_cmpint (domain, file, line, func, expr, arg1, cmp, arg2, numtype);
}

peel_no_warn_unused peel_nonnull_args (1, 2, 4, 5, 7)
static void
assertion_message_cmpnum (const char *domain, const char *file, int line, const char *func, const char *expr, long double arg1, const char *cmp, long double arg2, char numtype) noexcept
{
  g_assertion_message_cmpnum (domain, file, line, func, expr, arg1, cmp, arg2, numtype);
}

peel_no_warn_unused peel_nonnull_args (1, 2, 4, 5, 6, 7, 8)
static void
assertion_message_cmpstr (const char *domain, const char *file, int line, const char *func, const char *expr, const char *arg1, const char *cmp, const char *arg2) noexcept
{
  g_assertion_message_cmpstr (domain, file, line, func, expr, arg1, cmp, arg2);
}

/* Unsupported for now: assertion_message_cmpstrv: explicitly skipped */

peel_no_warn_unused peel_arg_in (6) peel_nonnull_args (1, 2, 4, 5, 6)
static void
assertion_message_error (const char *domain, const char *file, int line, const char *func, const char *expr, const Error *error, Quark error_domain, int error_code) noexcept
{
  const ::GError *_peel_error = reinterpret_cast<const ::GError *> (error);
  g_assertion_message_error (domain, file, line, func, expr, _peel_error, error_domain, error_code);
}

peel_no_warn_unused peel_nonnull_args (2, 4)
static void
assertion_message_expr (const char *domain, const char *file, int line, const char *func, const char *expr) noexcept
{
  g_assertion_message_expr (domain, file, line, func, expr);
}

/* async_queue_new moved to AsyncQueue.new */

/* async_queue_new_full moved to AsyncQueue.new_full */

peel_no_warn_unused
static void
atexit (::GVoidFunc func) noexcept
{
  g_atexit (func);
}

/* Unsupported for now: atomic_int_add: explicitly skipped */

/* Unsupported for now: atomic_int_and: explicitly skipped */

/* Unsupported for now: atomic_int_compare_and_exchange: explicitly skipped */

/* Unsupported for now: atomic_int_compare_and_exchange_full: explicitly skipped */

/* Unsupported for now: atomic_int_dec_and_test: explicitly skipped */

/* Unsupported for now: atomic_int_exchange: explicitly skipped */

/* Unsupported for now: atomic_int_exchange_and_add: explicitly skipped */

/* Unsupported for now: atomic_int_get: explicitly skipped */

/* Unsupported for now: atomic_int_inc: explicitly skipped */

/* Unsupported for now: atomic_int_or: explicitly skipped */

/* Unsupported for now: atomic_int_set: explicitly skipped */

/* Unsupported for now: atomic_int_xor: explicitly skipped */

/* Unsupported for now: atomic_pointer_add: explicitly skipped */

/* Unsupported for now: atomic_pointer_and: explicitly skipped */

/* Unsupported for now: atomic_pointer_compare_and_exchange: explicitly skipped */

/* Unsupported for now: atomic_pointer_compare_and_exchange_full: explicitly skipped */

/* Unsupported for now: atomic_pointer_exchange: explicitly skipped */

/* Unsupported for now: atomic_pointer_get: explicitly skipped */

/* Unsupported for now: atomic_pointer_or: explicitly skipped */

/* Unsupported for now: atomic_pointer_set: explicitly skipped */

/* Unsupported for now: atomic_pointer_xor: explicitly skipped */

peel_no_warn_unused
static void *
atomic_rc_box_acquire (void *mem_block) noexcept
{
  return g_atomic_rc_box_acquire (mem_block);
}

peel_no_warn_unused
static void *
atomic_rc_box_alloc (size_t block_size) noexcept
{
  return g_atomic_rc_box_alloc (block_size);
}

peel_no_warn_unused
static void *
atomic_rc_box_alloc0 (size_t block_size) noexcept
{
  return g_atomic_rc_box_alloc0 (block_size);
}

/* Unsupported for now: atomic_rc_box_dup: explicitly skipped */

peel_no_warn_unused
static size_t
atomic_rc_box_get_size (void *mem_block) noexcept
{
  return g_atomic_rc_box_get_size (mem_block);
}

peel_no_warn_unused
static void
atomic_rc_box_release (void *mem_block) noexcept
{
  g_atomic_rc_box_release (mem_block);
}

peel_no_warn_unused
static void
atomic_rc_box_release_full (void *mem_block, ::GDestroyNotify clear_func) noexcept
{
  g_atomic_rc_box_release_full (mem_block, clear_func);
}

/* Unsupported for now: atomic_ref_count_compare: explicitly skipped */

/* Unsupported for now: atomic_ref_count_dec: explicitly skipped */

/* Unsupported for now: atomic_ref_count_inc: explicitly skipped */

/* Unsupported for now: atomic_ref_count_init: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1)
static peel::UniquePtr<uint8_t[]>
base64_decode (const char *text) noexcept
{
  gsize _peel_out_len;
  guchar *_peel_return = g_base64_decode (text, &_peel_out_len);
  peel_assume (_peel_return);
  return peel::UniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_return), _peel_out_len);
}

/* Unsupported for now: base64_decode_inplace: explicitly skipped */

peel_no_warn_unused peel_arg_inout (3) peel_arg_inout (4) peel_nonnull_args (3, 4)
static size_t
base64_decode_step (peel::ArrayRef<const uint8_t> in, uint8_t *out, int *state, unsigned *save) noexcept
{
  gsize _peel_len;
  const gchar *_peel_in = (_peel_len = in.size (), reinterpret_cast<const gchar *> (in.data ()));
  guchar *_peel_out = reinterpret_cast<guchar *> (out);
  gint *_peel_state = reinterpret_cast<gint *> (state);
  guint *_peel_save = reinterpret_cast<guint *> (save);
  return g_base64_decode_step (_peel_in, _peel_len, _peel_out, _peel_state, _peel_save);
}

peel_no_warn_unused
static peel::String
base64_encode (peel::ArrayRef<const uint8_t> data) noexcept
{
  gsize _peel_len;
  const guchar *_peel_data = (_peel_len = data.size (), reinterpret_cast<const guchar *> (data.data ()));
  gchar *_peel_return = g_base64_encode (_peel_data, _peel_len);
  return peel::String::adopt_string (_peel_return);
}

/* Unsupported for now: base64_encode_close: Complex array */

/* Unsupported for now: base64_encode_step: Complex array */

peel_no_warn_unused peel_nonnull_args (1) peel_returns_nonnull
static const char *
basename (const char *file_name) noexcept
{
  return g_basename (file_name);
}

peel_no_warn_unused
static void
bit_lock (volatile gint *address, int lock_bit) noexcept
{
  g_bit_lock (address, lock_bit);
}

peel_no_warn_unused peel_arg_out (3)
static void
bit_lock_and_get (gint *address, unsigned lock_bit, int *out_val) noexcept
{
  gint *_peel_out_val = reinterpret_cast<gint *> (out_val);
  g_bit_lock_and_get (address, lock_bit, _peel_out_val);
}

peel_no_warn_unused
static int
bit_nth_lsf (unsigned long mask, int nth_bit) noexcept
{
  return g_bit_nth_lsf (mask, nth_bit);
}

peel_no_warn_unused
static int
bit_nth_msf (unsigned long mask, int nth_bit) noexcept
{
  return g_bit_nth_msf (mask, nth_bit);
}

peel_no_warn_unused
static unsigned
bit_storage (unsigned long number) noexcept
{
  return g_bit_storage (number);
}

peel_no_warn_unused
static bool
bit_trylock (volatile gint *address, int lock_bit) noexcept
{
  gboolean _peel_return = g_bit_trylock (address, lock_bit);
  return !!_peel_return;
}

peel_no_warn_unused
static void
bit_unlock (volatile gint *address, int lock_bit) noexcept
{
  g_bit_unlock (address, lock_bit);
}

peel_no_warn_unused
static void
bit_unlock_and_set (gint *address, unsigned lock_bit, int new_val, int preserve_mask) noexcept
{
  g_bit_unlock_and_set (address, lock_bit, new_val, preserve_mask);
}

peel_no_warn_unused
static void
blow_chunks () noexcept
{
  g_blow_chunks ();
}

/* bookmark_file_error_quark moved to BookmarkFile.error_quark */

template<typename... Args>
peel_no_warn_unused peel_nonnull_args (1)
static peel::String
build_filename (const char *first_element, Args &&...args) noexcept
{
  gchar *_peel_return = g_build_filename (first_element, static_cast<const char *> (std::forward<Args> (args))..., nullptr);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
build_filename_valist (const char *first_element, va_list *args) noexcept
{
  gchar *_peel_return = g_build_filename_valist (first_element, args);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static peel::String
build_filenamev (peel::StrvRef args) noexcept
{
  gchar **_peel_args = const_cast<gchar **> (args.data ());
  gchar *_peel_return = g_build_filenamev (_peel_args);
  return peel::String::adopt_string (_peel_return);
}

template<typename... Args>
peel_no_warn_unused peel_nonnull_args (1, 2)
static peel::String
build_path (const char *separator, const char *first_element, Args &&...args) noexcept
{
  gchar *_peel_return = g_build_path (separator, first_element, static_cast<const char *> (std::forward<Args> (args))..., nullptr);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
build_pathv (const char *separator, peel::StrvRef args) noexcept
{
  gchar **_peel_args = const_cast<gchar **> (args.data ());
  gchar *_peel_return = g_build_pathv (separator, _peel_args);
  return peel::String::adopt_string (_peel_return);
}

/* byte_array_append moved to ByteArray.append */

/* byte_array_free moved to ByteArray.free */

/* byte_array_free_to_bytes moved to ByteArray.free_to_bytes */

/* byte_array_new moved to ByteArray.new */

/* byte_array_new_take moved to ByteArray.new_take */

/* byte_array_prepend moved to ByteArray.prepend */

/* byte_array_ref moved to ByteArray.ref */

/* byte_array_remove_index moved to ByteArray.remove_index */

/* byte_array_remove_index_fast moved to ByteArray.remove_index_fast */

/* byte_array_remove_range moved to ByteArray.remove_range */

/* byte_array_set_size moved to ByteArray.set_size */

/* byte_array_sized_new moved to ByteArray.sized_new */

/* byte_array_sort moved to ByteArray.sort */

/* byte_array_sort_with_data moved to ByteArray.sort_with_data */

/* byte_array_steal moved to ByteArray.steal */

/* byte_array_unref moved to ByteArray.unref */

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
canonicalize_filename (const char *filename, const char *relative_to) noexcept
{
  gchar *_peel_return = g_canonicalize_filename (filename, relative_to);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static int
chdir (const char *path) noexcept
{
  return g_chdir (path);
}

peel_no_warn_unused
static const char *
check_version (unsigned required_major, unsigned required_minor, unsigned required_micro) noexcept
{
  return glib_check_version (required_major, required_minor, required_micro);
}

/* checksum_type_get_length moved to Checksum.type_get_length */

template<typename ChildWatchFunc>
peel_no_warn_unused
static unsigned
child_watch_add (int pid, ChildWatchFunc &&function) noexcept
{
  gpointer _peel_data;
  ::GChildWatchFunc _peel_function = peel::internals::CallbackHelper<void, GPid, gint>::wrap_call_callback (
      static_cast<ChildWatchFunc &&> (function),
      [] (GPid pid, gint wait_status, gpointer user_data) -> void
      {
        ChildWatchFunc &_peel_captured_function = *reinterpret_cast<typename std::remove_reference<ChildWatchFunc>::type *> (user_data);
        _peel_captured_function (pid, wait_status);
      },
      &_peel_data, peel::internals::is_const_invocable<ChildWatchFunc, void, int, int>::value);
  return g_child_watch_add (pid, _peel_function, _peel_data);
}

template<typename ChildWatchFunc>
peel_no_warn_unused
static unsigned
child_watch_add_full (int priority, int pid, ChildWatchFunc &&function) noexcept
{
  gpointer _peel_data;
  ::GDestroyNotify _peel_notify;
  ::GChildWatchFunc _peel_function = peel::internals::CallbackHelper<void, GPid, gint>::wrap_notified_callback (
      static_cast<ChildWatchFunc &&> (function),
      [] (GPid pid, gint wait_status, gpointer user_data) -> void
      {
        ChildWatchFunc &_peel_captured_function = *reinterpret_cast<typename std::remove_reference<ChildWatchFunc>::type *> (user_data);
        _peel_captured_function (pid, wait_status);
      },
      &_peel_data, &_peel_notify, peel::internals::is_const_invocable<ChildWatchFunc, void, int, int>::value);
  return g_child_watch_add_full (priority, pid, _peel_function, _peel_data, _peel_notify);
}

peel_no_warn_unused
static peel::RefPtr<Source>
child_watch_source_new (int pid) noexcept
{
  ::GSource *_peel_return = g_child_watch_source_new (pid);
  peel_assume (_peel_return);
  return peel::RefPtr<Source>::adopt_ref (reinterpret_cast<Source *> (_peel_return));
}

/* Unsupported for now: chmod: explicitly skipped */

peel_no_warn_unused
static void
clear_error (peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GError *_peel_error = nullptr;
  g_clear_error (error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
}

/* Unsupported for now: clear_handle_id: explicitly skipped */

/* Unsupported for now: clear_list: explicitly skipped */

peel_no_warn_unused peel_arg_inout (1) peel_nonnull_args (1)
static void
clear_pointer (void **pp, ::GDestroyNotify destroy) noexcept
{
  gpointer *_peel_pp = reinterpret_cast<gpointer *> (pp);
  g_clear_pointer (_peel_pp, destroy);
}

/* Unsupported for now: clear_slist: explicitly skipped */

peel_no_warn_unused
static bool
close (int fd, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_close (fd, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (2)
static peel::String
compute_checksum_for_bytes (ChecksumType checksum_type, Bytes *data) noexcept
{
  ::GChecksumType _peel_checksum_type = static_cast<::GChecksumType> (checksum_type);
  ::GBytes *_peel_data = reinterpret_cast<::GBytes *> (data);
  gchar *_peel_return = g_compute_checksum_for_bytes (_peel_checksum_type, _peel_data);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static peel::String
compute_checksum_for_data (ChecksumType checksum_type, peel::ArrayRef<const uint8_t> data) noexcept
{
  gsize _peel_length;
  ::GChecksumType _peel_checksum_type = static_cast<::GChecksumType> (checksum_type);
  const guchar *_peel_data = (_peel_length = data.size (), reinterpret_cast<const guchar *> (data.data ()));
  gchar *_peel_return = g_compute_checksum_for_data (_peel_checksum_type, _peel_data, _peel_length);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (2)
static peel::String
compute_checksum_for_string (ChecksumType checksum_type, const char *str, gssize length) noexcept
{
  ::GChecksumType _peel_checksum_type = static_cast<::GChecksumType> (checksum_type);
  gchar *_peel_return = g_compute_checksum_for_string (_peel_checksum_type, str, length);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
static peel::String
compute_hmac_for_bytes (ChecksumType digest_type, Bytes *key, Bytes *data) noexcept
{
  ::GChecksumType _peel_digest_type = static_cast<::GChecksumType> (digest_type);
  ::GBytes *_peel_key = reinterpret_cast<::GBytes *> (key);
  ::GBytes *_peel_data = reinterpret_cast<::GBytes *> (data);
  gchar *_peel_return = g_compute_hmac_for_bytes (_peel_digest_type, _peel_key, _peel_data);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static peel::String
compute_hmac_for_data (ChecksumType digest_type, peel::ArrayRef<const uint8_t> key, peel::ArrayRef<const uint8_t> data) noexcept
{
  gsize _peel_key_len;
  gsize _peel_length;
  ::GChecksumType _peel_digest_type = static_cast<::GChecksumType> (digest_type);
  const guchar *_peel_key = (_peel_key_len = key.size (), reinterpret_cast<const guchar *> (key.data ()));
  const guchar *_peel_data = (_peel_length = data.size (), reinterpret_cast<const guchar *> (data.data ()));
  gchar *_peel_return = g_compute_hmac_for_data (_peel_digest_type, _peel_key, _peel_key_len, _peel_data, _peel_length);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (3)
static peel::String
compute_hmac_for_string (ChecksumType digest_type, peel::ArrayRef<const uint8_t> key, const char *str, gssize length) noexcept
{
  gsize _peel_key_len;
  ::GChecksumType _peel_digest_type = static_cast<::GChecksumType> (digest_type);
  const guchar *_peel_key = (_peel_key_len = key.size (), reinterpret_cast<const guchar *> (key.data ()));
  gchar *_peel_return = g_compute_hmac_for_string (_peel_digest_type, _peel_key, _peel_key_len, str, length);
  return peel::String::adopt_string (_peel_return);
}

/* cond_new moved to Cond.new */

peel_no_warn_unused peel_arg_out (4) peel_nonnull_args (2, 3)
static peel::UniquePtr<uint8_t[]>
convert (peel::ArrayRef<const uint8_t> str, const char *to_codeset, const char *from_codeset, size_t *bytes_read, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gssize _peel_len;
  gsize _peel_bytes_written;
  const gchar *_peel_str = (_peel_len = str.size (), reinterpret_cast<const gchar *> (str.data ()));
  gsize *_peel_bytes_read = reinterpret_cast<gsize *> (bytes_read);
  ::GError *_peel_error = nullptr;
  gchar *_peel_return = g_convert (_peel_str, _peel_len, to_codeset, from_codeset, _peel_bytes_read, &_peel_bytes_written, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return peel::UniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_return), _peel_bytes_written);
}

peel_no_warn_unused
static Quark
convert_error_quark () noexcept
{
  ::GQuark _peel_return = g_convert_error_quark ();
  return static_cast<Quark> (_peel_return);
}

peel_no_warn_unused peel_arg_out (5) peel_nonnull_args (2, 3, 4)
static peel::UniquePtr<uint8_t[]>
convert_with_fallback (peel::ArrayRef<const uint8_t> str, const char *to_codeset, const char *from_codeset, const char *fallback, size_t *bytes_read, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gssize _peel_len;
  gsize _peel_bytes_written;
  const gchar *_peel_str = (_peel_len = str.size (), reinterpret_cast<const gchar *> (str.data ()));
  gsize *_peel_bytes_read = reinterpret_cast<gsize *> (bytes_read);
  ::GError *_peel_error = nullptr;
  gchar *_peel_return = g_convert_with_fallback (_peel_str, _peel_len, to_codeset, from_codeset, fallback, _peel_bytes_read, &_peel_bytes_written, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return peel::UniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_return), _peel_bytes_written);
}

peel_no_warn_unused peel_arg_in (2) peel_arg_out (3) peel_nonnull_args (2)
static peel::UniquePtr<uint8_t[]>
convert_with_iconv (peel::ArrayRef<const uint8_t> str, IConv *converter, size_t *bytes_read, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gssize _peel_len;
  gsize _peel_bytes_written;
  const gchar *_peel_str = (_peel_len = str.size (), reinterpret_cast<const gchar *> (str.data ()));
  ::GIConv _peel_converter = reinterpret_cast<::GIConv> (converter);
  gsize *_peel_bytes_read = reinterpret_cast<gsize *> (bytes_read);
  ::GError *_peel_error = nullptr;
  gchar *_peel_return = g_convert_with_iconv (_peel_str, _peel_len, _peel_converter, _peel_bytes_read, &_peel_bytes_written, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return peel::UniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_return), _peel_bytes_written);
}

/* Unsupported for now: creat: explicitly skipped */

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void
datalist_clear (Data *datalist) noexcept
{
  ::GData **_peel_datalist = reinterpret_cast<::GData **> (datalist);
  g_datalist_clear (_peel_datalist);
}

template<typename DataForeachFunc>
peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void
datalist_foreach (Data *datalist, DataForeachFunc &&func) noexcept
{
  gpointer _peel_user_data;
  ::GData **_peel_datalist = reinterpret_cast<::GData **> (datalist);
  ::GDataForeachFunc _peel_func = peel::internals::CallbackHelper<void, ::GQuark, gpointer>::wrap_call_callback (
      static_cast<DataForeachFunc &&> (func),
      [] (::GQuark key_id, gpointer data, gpointer user_data) -> void
      {
        DataForeachFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<DataForeachFunc>::type *> (user_data);
        Quark _peel_key_id = static_cast<Quark> (key_id);
        _peel_captured_func (_peel_key_id, data);
      },
      &_peel_user_data, peel::internals::is_const_invocable<DataForeachFunc, void, Quark, void *>::value);
  g_datalist_foreach (_peel_datalist, _peel_func, _peel_user_data);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1, 2)
static void *
datalist_get_data (Data *datalist, const char *key) noexcept
{
  ::GData **_peel_datalist = reinterpret_cast<::GData **> (datalist);
  return g_datalist_get_data (_peel_datalist, key);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static unsigned
datalist_get_flags (Data *datalist) noexcept
{
  ::GData **_peel_datalist = reinterpret_cast<::GData **> (datalist);
  return g_datalist_get_flags (_peel_datalist);
}

template<typename DuplicateFunc>
peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void *
datalist_id_dup_data (Data *datalist, Quark key_id, DuplicateFunc &&dup_func) noexcept
{
  gpointer _peel_user_data;
  ::GData **_peel_datalist = reinterpret_cast<::GData **> (datalist);
  ::GDuplicateFunc _peel_dup_func = peel::internals::CallbackHelper<gpointer, gpointer>::wrap_call_callback (
      static_cast<DuplicateFunc &&> (dup_func),
      [] (gpointer data, gpointer user_data) -> gpointer
      {
        DuplicateFunc &_peel_captured_dup_func = *reinterpret_cast<typename std::remove_reference<DuplicateFunc>::type *> (user_data);
        return peel::internals::invoke_if_nonnull<void *> (_peel_captured_dup_func) (data);
      },
      &_peel_user_data, peel::internals::is_const_invocable<DuplicateFunc, void, void *>::value);
  return g_datalist_id_dup_data (_peel_datalist, key_id, _peel_dup_func, _peel_user_data);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void *
datalist_id_get_data (Data *datalist, Quark key_id) noexcept
{
  ::GData **_peel_datalist = reinterpret_cast<::GData **> (datalist);
  return g_datalist_id_get_data (_peel_datalist, key_id);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void
datalist_id_remove_multiple (Data *datalist, peel::ArrayRef<Quark> keys) noexcept
{
  gsize _peel_n_keys;
  ::GData **_peel_datalist = reinterpret_cast<::GData **> (datalist);
  ::GQuark *_peel_keys = (_peel_n_keys = keys.size (), reinterpret_cast<::GQuark *> (keys.data ()));
  g_datalist_id_remove_multiple (_peel_datalist, _peel_keys, _peel_n_keys);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void *
datalist_id_remove_no_notify (Data *datalist, Quark key_id) noexcept
{
  ::GData **_peel_datalist = reinterpret_cast<::GData **> (datalist);
  return g_datalist_id_remove_no_notify (_peel_datalist, key_id);
}

/* Unsupported for now: datalist_id_replace_data: explicitly skipped */

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void
datalist_id_set_data_full (Data *datalist, Quark key_id, void *data, ::GDestroyNotify destroy_func) noexcept
{
  ::GData **_peel_datalist = reinterpret_cast<::GData **> (datalist);
  g_datalist_id_set_data_full (_peel_datalist, key_id, data, destroy_func);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void
datalist_init (Data *datalist) noexcept
{
  ::GData **_peel_datalist = reinterpret_cast<::GData **> (datalist);
  g_datalist_init (_peel_datalist);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void
datalist_set_flags (Data *datalist, unsigned flags) noexcept
{
  ::GData **_peel_datalist = reinterpret_cast<::GData **> (datalist);
  g_datalist_set_flags (_peel_datalist, flags);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void
datalist_unset_flags (Data *datalist, unsigned flags) noexcept
{
  ::GData **_peel_datalist = reinterpret_cast<::GData **> (datalist);
  g_datalist_unset_flags (_peel_datalist, flags);
}

peel_no_warn_unused
static void
dataset_destroy (const void *dataset_location) noexcept
{
  g_dataset_destroy (dataset_location);
}

template<typename DataForeachFunc>
peel_no_warn_unused
static void
dataset_foreach (const void *dataset_location, DataForeachFunc &&func) noexcept
{
  gpointer _peel_user_data;
  ::GDataForeachFunc _peel_func = peel::internals::CallbackHelper<void, ::GQuark, gpointer>::wrap_call_callback (
      static_cast<DataForeachFunc &&> (func),
      [] (::GQuark key_id, gpointer data, gpointer user_data) -> void
      {
        DataForeachFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<DataForeachFunc>::type *> (user_data);
        Quark _peel_key_id = static_cast<Quark> (key_id);
        _peel_captured_func (_peel_key_id, data);
      },
      &_peel_user_data, peel::internals::is_const_invocable<DataForeachFunc, void, Quark, void *>::value);
  g_dataset_foreach (dataset_location, _peel_func, _peel_user_data);
}

peel_no_warn_unused
static void *
dataset_id_get_data (const void *dataset_location, Quark key_id) noexcept
{
  return g_dataset_id_get_data (dataset_location, key_id);
}

peel_no_warn_unused
static void *
dataset_id_remove_no_notify (const void *dataset_location, Quark key_id) noexcept
{
  return g_dataset_id_remove_no_notify (dataset_location, key_id);
}

peel_no_warn_unused
static void
dataset_id_set_data_full (const void *dataset_location, Quark key_id, void *data, ::GDestroyNotify destroy_func) noexcept
{
  g_dataset_id_set_data_full (dataset_location, key_id, data, destroy_func);
}

/* date_get_days_in_month moved to Date.get_days_in_month */

/* date_get_monday_weeks_in_year moved to Date.get_monday_weeks_in_year */

/* date_get_sunday_weeks_in_year moved to Date.get_sunday_weeks_in_year */

/* date_get_weeks_in_year moved to Date.get_weeks_in_year */

/* date_is_leap_year moved to Date.is_leap_year */

/* date_strftime moved to Date.strftime */

/* date_valid_day moved to Date.valid_day */

/* date_valid_dmy moved to Date.valid_dmy */

/* date_valid_julian moved to Date.valid_julian */

/* date_valid_month moved to Date.valid_month */

/* date_valid_weekday moved to Date.valid_weekday */

/* date_valid_year moved to Date.valid_year */

peel_no_warn_unused peel_nonnull_args (2) peel_returns_nonnull
static const char *
dcgettext (const char *domain, const char *msgid, int category) noexcept
{
  return g_dcgettext (domain, msgid, category);
}

peel_no_warn_unused peel_nonnull_args (2) peel_returns_nonnull
static const char *
dgettext (const char *domain, const char *msgid) noexcept
{
  return g_dgettext (domain, msgid);
}

/* dir_make_tmp moved to Dir.make_tmp */

peel_no_warn_unused
static bool
direct_equal (const void *v1, const void *v2) noexcept
{
  gboolean _peel_return = g_direct_equal (v1, v2);
  return !!_peel_return;
}

peel_no_warn_unused
static unsigned
direct_hash (const void *v) noexcept
{
  return g_direct_hash (v);
}

peel_no_warn_unused peel_nonnull_args (2, 3) peel_returns_nonnull
static const char *
dngettext (const char *domain, const char *msgid, const char *msgid_plural, unsigned long n) noexcept
{
  return g_dngettext (domain, msgid, msgid_plural, n);
}

peel_no_warn_unused
static bool
double_equal (const void *v1, const void *v2) noexcept
{
  gboolean _peel_return = g_double_equal (v1, v2);
  return !!_peel_return;
}

peel_no_warn_unused
static unsigned
double_hash (const void *v) noexcept
{
  return g_double_hash (v);
}

peel_no_warn_unused peel_nonnull_args (2) peel_returns_nonnull
static const char *
dpgettext (const char *domain, const char *msgctxtid, size_t msgidoffset) noexcept
{
  return g_dpgettext (domain, msgctxtid, msgidoffset);
}

peel_no_warn_unused peel_nonnull_args (2, 3) peel_returns_nonnull
static const char *
dpgettext2 (const char *domain, const char *context, const char *msgid) noexcept
{
  return g_dpgettext2 (domain, context, msgid);
}

peel_no_warn_unused peel_nonnull_args (2)
static const char *
environ_getenv (peel::StrvRef envp, const char *variable) noexcept
{
  gchar **_peel_envp = const_cast<gchar **> (envp.data ());
  return g_environ_getenv (_peel_envp, variable);
}

peel_no_warn_unused peel_nonnull_args (2, 3)
static peel::Strv
environ_setenv (peel::Strv envp, const char *variable, const char *value, bool overwrite) noexcept
{
  gchar **_peel_envp = reinterpret_cast<gchar **> (std::move (envp).release_ref ());
  gboolean _peel_overwrite = static_cast<gboolean> (overwrite);
  gchar **_peel_return = g_environ_setenv (_peel_envp, variable, value, _peel_overwrite);
  peel_assume (_peel_return);
  return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (2)
static peel::Strv
environ_unsetenv (peel::Strv envp, const char *variable) noexcept
{
  gchar **_peel_envp = reinterpret_cast<gchar **> (std::move (envp).release_ref ());
  gchar **_peel_return = g_environ_unsetenv (_peel_envp, variable);
  peel_assume (_peel_return);
  return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
}

/* error_domain_register moved to Error.domain_register */

/* error_domain_register_static moved to Error.domain_register_static */

peel_no_warn_unused
static FileError
file_error_from_errno (int err_no) noexcept
{
  ::GFileError _peel_return = g_file_error_from_errno (err_no);
  return static_cast<FileError> (_peel_return);
}

peel_no_warn_unused
static Quark
file_error_quark () noexcept
{
  ::GQuark _peel_return = g_file_error_quark ();
  return static_cast<Quark> (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
file_get_contents (const char *filename, peel::UniquePtr<uint8_t[]> *contents, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gsize _peel_length;
  gchar *_peel_contents;
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_file_get_contents (filename, &_peel_contents, &_peel_length, &_peel_error);
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
      *contents = peel::UniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_contents), _peel_length);
    }
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_out (2) peel_nonnull_args (2)
static int
file_open_tmp (const char *tmpl, peel::String *name_used, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gchar *_peel_name_used;
  ::GError *_peel_error = nullptr;
  gint _peel_return = g_file_open_tmp (tmpl, &_peel_name_used, &_peel_error);
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
      *name_used = peel::String::adopt_string (_peel_name_used);
    }
  return _peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
file_read_link (const char *filename, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GError *_peel_error = nullptr;
  gchar *_peel_return = g_file_read_link (filename, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
file_set_contents (const char *filename, peel::ArrayRef<const uint8_t> contents, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gssize _peel_length;
  const gchar *_peel_contents = (_peel_length = contents.size (), reinterpret_cast<const gchar *> (contents.data ()));
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_file_set_contents (filename, _peel_contents, _peel_length, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
file_set_contents_full (const char *filename, peel::ArrayRef<const uint8_t> contents, FileSetContentsFlags flags, int mode, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gssize _peel_length;
  const gchar *_peel_contents = (_peel_length = contents.size (), reinterpret_cast<const gchar *> (contents.data ()));
  ::GFileSetContentsFlags _peel_flags = static_cast<::GFileSetContentsFlags> (flags);
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_file_set_contents_full (filename, _peel_contents, _peel_length, _peel_flags, mode, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
file_test (const char *filename, FileTest test) noexcept
{
  ::GFileTest _peel_test = static_cast<::GFileTest> (test);
  gboolean _peel_return = g_file_test (filename, _peel_test);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
filename_display_basename (const char *filename) noexcept
{
  gchar *_peel_return = g_filename_display_basename (filename);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
filename_display_name (const char *filename) noexcept
{
  gchar *_peel_return = g_filename_display_name (filename);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_arg_out (2) peel_nonnull_args (1)
static peel::String
filename_from_uri (const char *uri, peel::String *hostname, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gchar *_peel_hostname;
  ::GError *_peel_error = nullptr;
  gchar *_peel_return = g_filename_from_uri (uri, hostname ? &_peel_hostname : nullptr, &_peel_error);
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
      if (hostname)
        *hostname = peel::String::adopt_string (_peel_hostname);
    }
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (1)
static peel::String
filename_from_utf8 (const char *utf8string, gssize len, size_t *bytes_read, size_t *bytes_written, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gsize *_peel_bytes_read = reinterpret_cast<gsize *> (bytes_read);
  gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
  ::GError *_peel_error = nullptr;
  gchar *_peel_return = g_filename_from_utf8 (utf8string, len, _peel_bytes_read, _peel_bytes_written, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
filename_to_uri (const char *filename, const char *hostname, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GError *_peel_error = nullptr;
  gchar *_peel_return = g_filename_to_uri (filename, hostname, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (1)
static peel::String
filename_to_utf8 (const char *opsysstring, gssize len, size_t *bytes_read, size_t *bytes_written, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gsize *_peel_bytes_read = reinterpret_cast<gsize *> (bytes_read);
  gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
  ::GError *_peel_error = nullptr;
  gchar *_peel_return = g_filename_to_utf8 (opsysstring, len, _peel_bytes_read, _peel_bytes_written, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
find_program_in_path (const char *program) noexcept
{
  gchar *_peel_return = g_find_program_in_path (program);
  return peel::String::adopt_string (_peel_return);
}

/* Unsupported for now: fopen: explicitly skipped */

peel_no_warn_unused
static peel::String
format_size (uint64_t size) noexcept
{
  gchar *_peel_return = g_format_size (size);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static peel::String
format_size_for_display (int64_t size) noexcept
{
  gchar *_peel_return = g_format_size_for_display (size);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static peel::String
format_size_full (uint64_t size, FormatSizeFlags flags) noexcept
{
  ::GFormatSizeFlags _peel_flags = static_cast<::GFormatSizeFlags> (flags);
  gchar *_peel_return = g_format_size_full (size, _peel_flags);
  return peel::String::adopt_string (_peel_return);
}

/* Unsupported for now: fprintf: varargs */

peel_no_warn_unused
static void
free (void *mem) noexcept
{
  g_free (mem);
}

peel_no_warn_unused
static void
free_sized (void *mem, size_t size) noexcept
{
  g_free_sized (mem, size);
}

/* Unsupported for now: freopen: explicitly skipped */

/* Unsupported for now: fsync: explicitly skipped */

peel_no_warn_unused
static const char *
get_application_name () noexcept
{
  return g_get_application_name ();
}

peel_no_warn_unused peel_arg_out (1)
static bool
get_charset (const char **charset) noexcept
{
  gboolean _peel_return = g_get_charset (charset);
  return !!_peel_return;
}

peel_no_warn_unused
static peel::String
get_codeset () noexcept
{
  gchar *_peel_return = g_get_codeset ();
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_arg_out (1)
static bool
get_console_charset (const char **charset) noexcept
{
  gboolean _peel_return = g_get_console_charset (charset);
  return !!_peel_return;
}

peel_no_warn_unused
static peel::String
get_current_dir () noexcept
{
  gchar *_peel_return = g_get_current_dir ();
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void
get_current_time (TimeVal *result) noexcept
{
  ::GTimeVal *_peel_result = reinterpret_cast<::GTimeVal *> (result);
  g_get_current_time (_peel_result);
}

peel_no_warn_unused
static peel::Strv
get_environ () noexcept
{
  gchar **_peel_return = g_get_environ ();
  peel_assume (_peel_return);
  return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
}

peel_no_warn_unused
static bool
get_filename_charsets (peel::StrvRef *filename_charsets) noexcept
{
  const gchar **_peel_filename_charsets;
  gboolean _peel_return = g_get_filename_charsets (&_peel_filename_charsets);
  *filename_charsets = peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_filename_charsets));
  return !!_peel_return;
}

peel_no_warn_unused peel_returns_nonnull
static const char *
get_home_dir () noexcept
{
  return g_get_home_dir ();
}

peel_no_warn_unused peel_returns_nonnull
static const char *
get_host_name () noexcept
{
  return g_get_host_name ();
}

peel_no_warn_unused
static peel::StrvRef
get_language_names () noexcept
{
  const gchar* const *_peel_return = g_get_language_names ();
  peel_assume (_peel_return);
  return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::StrvRef
get_language_names_with_category (const char *category_name) noexcept
{
  const gchar* const *_peel_return = g_get_language_names_with_category (category_name);
  peel_assume (_peel_return);
  return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::Strv
get_locale_variants (const char *locale) noexcept
{
  gchar **_peel_return = g_get_locale_variants (locale);
  peel_assume (_peel_return);
  return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
}

peel_no_warn_unused
static int64_t
get_monotonic_time () noexcept
{
  return g_get_monotonic_time ();
}

peel_no_warn_unused
static uint64_t
get_monotonic_time_ns () noexcept
{
  return g_get_monotonic_time_ns ();
}

peel_no_warn_unused
static unsigned
get_num_processors () noexcept
{
  return g_get_num_processors ();
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
get_os_info (const char *key_name) noexcept
{
  gchar *_peel_return = g_get_os_info (key_name);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static const char *
get_prgname () noexcept
{
  return g_get_prgname ();
}

peel_no_warn_unused peel_returns_nonnull
static const char *
get_real_name () noexcept
{
  return g_get_real_name ();
}

peel_no_warn_unused
static int64_t
get_real_time () noexcept
{
  return g_get_real_time ();
}

peel_no_warn_unused
static peel::StrvRef
get_system_config_dirs () noexcept
{
  const gchar* const *_peel_return = g_get_system_config_dirs ();
  peel_assume (_peel_return);
  return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
}

peel_no_warn_unused
static peel::StrvRef
get_system_data_dirs () noexcept
{
  const gchar* const *_peel_return = g_get_system_data_dirs ();
  peel_assume (_peel_return);
  return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
}

peel_no_warn_unused peel_returns_nonnull
static const char *
get_tmp_dir () noexcept
{
  return g_get_tmp_dir ();
}

peel_no_warn_unused peel_returns_nonnull
static const char *
get_user_cache_dir () noexcept
{
  return g_get_user_cache_dir ();
}

peel_no_warn_unused peel_returns_nonnull
static const char *
get_user_config_dir () noexcept
{
  return g_get_user_config_dir ();
}

peel_no_warn_unused peel_returns_nonnull
static const char *
get_user_data_dir () noexcept
{
  return g_get_user_data_dir ();
}

peel_no_warn_unused peel_returns_nonnull
static const char *
get_user_name () noexcept
{
  return g_get_user_name ();
}

peel_no_warn_unused peel_returns_nonnull
static const char *
get_user_runtime_dir () noexcept
{
  return g_get_user_runtime_dir ();
}

peel_no_warn_unused
static const char *
get_user_special_dir (UserDirectory directory) noexcept
{
  ::GUserDirectory _peel_directory = static_cast<::GUserDirectory> (directory);
  return g_get_user_special_dir (_peel_directory);
}

peel_no_warn_unused peel_returns_nonnull
static const char *
get_user_state_dir () noexcept
{
  return g_get_user_state_dir ();
}

peel_no_warn_unused peel_nonnull_args (1)
static const char *
getenv (const char *variable) noexcept
{
  return g_getenv (variable);
}

/* hash_table_add moved to HashTable.add */

/* hash_table_contains moved to HashTable.contains */

/* hash_table_destroy moved to HashTable.destroy */

/* hash_table_find moved to HashTable.find */

/* hash_table_foreach moved to HashTable.foreach */

/* hash_table_foreach_remove moved to HashTable.foreach_remove */

/* hash_table_foreach_steal moved to HashTable.foreach_steal */

/* hash_table_get_keys_as_ptr_array moved to HashTable.get_keys_as_ptr_array */

/* hash_table_get_values_as_ptr_array moved to HashTable.get_values_as_ptr_array */

/* hash_table_insert moved to HashTable.insert */

/* hash_table_lookup moved to HashTable.lookup */

/* hash_table_lookup_extended moved to HashTable.lookup_extended */

/* hash_table_new_similar moved to HashTable.new_similar */

/* hash_table_ref moved to HashTable.ref */

/* hash_table_remove moved to HashTable.remove */

/* hash_table_remove_all moved to HashTable.remove_all */

/* hash_table_replace moved to HashTable.replace */

/* hash_table_size moved to HashTable.size */

/* hash_table_steal moved to HashTable.steal */

/* hash_table_steal_all moved to HashTable.steal_all */

/* hash_table_steal_all_keys moved to HashTable.steal_all_keys */

/* hash_table_steal_all_values moved to HashTable.steal_all_values */

/* hash_table_steal_extended moved to HashTable.steal_extended */

/* hash_table_unref moved to HashTable.unref */

/* hook_destroy moved to Hook.destroy */

/* hook_destroy_link moved to Hook.destroy_link */

/* hook_free moved to Hook.free */

/* hook_insert_before moved to Hook.insert_before */

/* hook_insert_sorted moved to Hook.insert_sorted */

/* hook_prepend moved to Hook.prepend */

/* hook_unref moved to Hook.unref */

peel_no_warn_unused peel_nonnull_args (1)
static bool
hostname_is_ascii_encoded (const char *hostname) noexcept
{
  gboolean _peel_return = g_hostname_is_ascii_encoded (hostname);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
hostname_is_ip_address (const char *hostname) noexcept
{
  gboolean _peel_return = g_hostname_is_ip_address (hostname);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
hostname_is_non_ascii (const char *hostname) noexcept
{
  gboolean _peel_return = g_hostname_is_non_ascii (hostname);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
hostname_to_ascii (const char *hostname) noexcept
{
  gchar *_peel_return = g_hostname_to_ascii (hostname);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
hostname_to_unicode (const char *hostname) noexcept
{
  gchar *_peel_return = g_hostname_to_unicode (hostname);
  return peel::String::adopt_string (_peel_return);
}

/* Unsupported for now: iconv: explicitly skipped */

/* iconv_open moved to IConv.open */

template<typename SourceFunc>
peel_no_warn_unused
static unsigned
idle_add (SourceFunc &&function) noexcept
{
  gpointer _peel_data;
  ::GSourceFunc _peel_function = peel::internals::CallbackHelper<gboolean>::wrap_gsourcefunc_callback (
      static_cast<SourceFunc &&> (function),
      [] (gpointer user_data) -> gboolean
      {
        SourceFunc &_peel_captured_function = *reinterpret_cast<typename std::remove_reference<SourceFunc>::type *> (user_data);
        bool _peel_return = _peel_captured_function ();
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, peel::internals::is_const_invocable<SourceFunc, void>::value);
  return g_idle_add (_peel_function, _peel_data);
}

template<typename SourceFunc>
peel_no_warn_unused
static unsigned
idle_add_full (int priority, SourceFunc &&function) noexcept
{
  gpointer _peel_data;
  ::GDestroyNotify _peel_notify;
  ::GSourceFunc _peel_function = peel::internals::CallbackHelper<gboolean>::wrap_notified_callback (
      static_cast<SourceFunc &&> (function),
      [] (gpointer user_data) -> gboolean
      {
        SourceFunc &_peel_captured_function = *reinterpret_cast<typename std::remove_reference<SourceFunc>::type *> (user_data);
        bool _peel_return = _peel_captured_function ();
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, &_peel_notify, peel::internals::is_const_invocable<SourceFunc, void>::value);
  return g_idle_add_full (priority, _peel_function, _peel_data, _peel_notify);
}

template<typename SourceOnceFunc>
peel_no_warn_unused
static unsigned
idle_add_once (SourceOnceFunc &&function) noexcept
{
  gpointer _peel_data;
  ::GSourceOnceFunc _peel_function = peel::internals::CallbackHelper<void>::wrap_async_callback (
      static_cast<SourceOnceFunc &&> (function),
      [] (gpointer user_data) -> void
      {
        SourceOnceFunc &_peel_captured_function = *reinterpret_cast<typename std::remove_reference<SourceOnceFunc>::type *> (user_data);
        static_cast<SourceOnceFunc &&> (_peel_captured_function) ();
      },
      &_peel_data);
  return g_idle_add_once (_peel_function, _peel_data);
}

peel_no_warn_unused
static bool
idle_remove_by_data (void *data) noexcept
{
  gboolean _peel_return = g_idle_remove_by_data (data);
  return !!_peel_return;
}

peel_no_warn_unused
static peel::RefPtr<Source>
idle_source_new () noexcept
{
  ::GSource *_peel_return = g_idle_source_new ();
  peel_assume (_peel_return);
  return peel::RefPtr<Source>::adopt_ref (reinterpret_cast<Source *> (_peel_return));
}

peel_no_warn_unused
static bool
int64_equal (const void *v1, const void *v2) noexcept
{
  gboolean _peel_return = g_int64_equal (v1, v2);
  return !!_peel_return;
}

peel_no_warn_unused
static unsigned
int64_hash (const void *v) noexcept
{
  return g_int64_hash (v);
}

peel_no_warn_unused
static bool
int_equal (const void *v1, const void *v2) noexcept
{
  gboolean _peel_return = g_int_equal (v1, v2);
  return !!_peel_return;
}

peel_no_warn_unused
static unsigned
int_hash (const void *v) noexcept
{
  return g_int_hash (v);
}

peel_no_warn_unused peel_returns_nonnull
static const char *
intern_static_string (const char *string) noexcept
{
  return g_intern_static_string (string);
}

peel_no_warn_unused peel_returns_nonnull
static const char *
intern_string (const char *string) noexcept
{
  return g_intern_string (string);
}

template<typename IOFunc>
peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static unsigned
io_add_watch (IOChannel *channel, IOCondition condition, IOFunc &&func) noexcept
{
  gpointer _peel_user_data;
  ::GIOChannel *_peel_channel = reinterpret_cast<::GIOChannel *> (channel);
  ::GIOCondition _peel_condition = static_cast<::GIOCondition> (condition);
  ::GIOFunc _peel_func = peel::internals::CallbackHelper<gboolean, ::GIOChannel *, ::GIOCondition>::wrap_gsourcefunc_callback (
      static_cast<IOFunc &&> (func),
      [] (::GIOChannel *source, ::GIOCondition condition, gpointer data) -> gboolean
      {
        IOFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<IOFunc>::type *> (data);
        IOChannel *_peel_source = reinterpret_cast<IOChannel *> (source);
        IOCondition _peel_condition = static_cast<IOCondition> (condition);
        bool _peel_return = _peel_captured_func (_peel_source, _peel_condition);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<IOFunc, void, IOChannel *, IOCondition>::value);
  return g_io_add_watch (_peel_channel, _peel_condition, _peel_func, _peel_user_data);
}

template<typename IOFunc>
peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static unsigned
io_add_watch_full (IOChannel *channel, int priority, IOCondition condition, IOFunc &&func) noexcept
{
  gpointer _peel_user_data;
  ::GDestroyNotify _peel_notify;
  ::GIOChannel *_peel_channel = reinterpret_cast<::GIOChannel *> (channel);
  ::GIOCondition _peel_condition = static_cast<::GIOCondition> (condition);
  ::GIOFunc _peel_func = peel::internals::CallbackHelper<gboolean, ::GIOChannel *, ::GIOCondition>::wrap_notified_callback (
      static_cast<IOFunc &&> (func),
      [] (::GIOChannel *source, ::GIOCondition condition, gpointer data) -> gboolean
      {
        IOFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<IOFunc>::type *> (data);
        IOChannel *_peel_source = reinterpret_cast<IOChannel *> (source);
        IOCondition _peel_condition = static_cast<IOCondition> (condition);
        bool _peel_return = _peel_captured_func (_peel_source, _peel_condition);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, &_peel_notify, peel::internals::is_const_invocable<IOFunc, void, IOChannel *, IOCondition>::value);
  return g_io_add_watch_full (_peel_channel, priority, _peel_condition, _peel_func, _peel_user_data, _peel_notify);
}

/* io_channel_error_from_errno moved to IOChannel.error_from_errno */

/* io_channel_error_quark moved to IOChannel.error_quark */

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static peel::RefPtr<Source>
io_create_watch (IOChannel *channel, IOCondition condition) noexcept
{
  ::GIOChannel *_peel_channel = reinterpret_cast<::GIOChannel *> (channel);
  ::GIOCondition _peel_condition = static_cast<::GIOCondition> (condition);
  ::GSource *_peel_return = g_io_create_watch (_peel_channel, _peel_condition);
  peel_assume (_peel_return);
  return peel::RefPtr<Source>::adopt_ref (reinterpret_cast<Source *> (_peel_return));
}

/* key_file_error_quark moved to KeyFile.error_quark */

/* list_pop_allocator moved to List.pop_allocator */

/* list_push_allocator moved to List.push_allocator */

peel_no_warn_unused
static peel::Strv
listenv () noexcept
{
  gchar **_peel_return = g_listenv ();
  peel_assume (_peel_return);
  return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
}

peel_no_warn_unused peel_arg_out (3) peel_nonnull_args (1)
static peel::UniquePtr<uint8_t[]>
locale_from_utf8 (const char *utf8string, gssize len, size_t *bytes_read, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gsize _peel_bytes_written;
  gsize *_peel_bytes_read = reinterpret_cast<gsize *> (bytes_read);
  ::GError *_peel_error = nullptr;
  gchar *_peel_return = g_locale_from_utf8 (utf8string, len, _peel_bytes_read, &_peel_bytes_written, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return peel::UniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_return), _peel_bytes_written);
}

peel_no_warn_unused peel_arg_out (2) peel_arg_out (3)
static peel::String
locale_to_utf8 (peel::ArrayRef<const uint8_t> opsysstring, size_t *bytes_read, size_t *bytes_written, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gssize _peel_len;
  const gchar *_peel_opsysstring = (_peel_len = opsysstring.size (), reinterpret_cast<const gchar *> (opsysstring.data ()));
  gsize *_peel_bytes_read = reinterpret_cast<gsize *> (bytes_read);
  gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
  ::GError *_peel_error = nullptr;
  gchar *_peel_return = g_locale_to_utf8 (_peel_opsysstring, _peel_len, _peel_bytes_read, _peel_bytes_written, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return peel::String::adopt_string (_peel_return);
}

template<typename... Args>
peel_no_warn_unused peel_nonnull_args (3)
static void
log (const char *log_domain, LogLevelFlags log_level, const char *format, Args ...args) noexcept
{
  ::GLogLevelFlags _peel_log_level = static_cast<::GLogLevelFlags> (log_level);
  g_log (log_domain, _peel_log_level, format, args...);
}

peel_no_warn_unused
static void
log_default_handler (const char *log_domain, LogLevelFlags log_level, const char *message, void *unused_data) noexcept
{
  ::GLogLevelFlags _peel_log_level = static_cast<::GLogLevelFlags> (log_level);
  g_log_default_handler (log_domain, _peel_log_level, message, unused_data);
}

peel_no_warn_unused
static LogLevelFlags
log_get_always_fatal () noexcept
{
  ::GLogLevelFlags _peel_return = g_log_get_always_fatal ();
  return static_cast<LogLevelFlags> (_peel_return);
}

peel_no_warn_unused
static bool
log_get_debug_enabled () noexcept
{
  gboolean _peel_return = g_log_get_debug_enabled ();
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static void
log_remove_handler (const char *log_domain, unsigned handler_id) noexcept
{
  g_log_remove_handler (log_domain, handler_id);
}

peel_no_warn_unused
static LogLevelFlags
log_set_always_fatal (LogLevelFlags fatal_mask) noexcept
{
  ::GLogLevelFlags _peel_fatal_mask = static_cast<::GLogLevelFlags> (fatal_mask);
  ::GLogLevelFlags _peel_return = g_log_set_always_fatal (_peel_fatal_mask);
  return static_cast<LogLevelFlags> (_peel_return);
}

peel_no_warn_unused
static void
log_set_debug_enabled (bool enabled) noexcept
{
  gboolean _peel_enabled = static_cast<gboolean> (enabled);
  g_log_set_debug_enabled (_peel_enabled);
}

template<typename LogFunc>
peel_no_warn_unused
static ::GLogFunc
log_set_default_handler (LogFunc &&log_func) noexcept
{
  gpointer _peel_user_data;
  ::GLogFunc _peel_log_func = peel::internals::CallbackHelper<void, const gchar *, ::GLogLevelFlags, const gchar *>::wrap_call_callback (
      static_cast<LogFunc &&> (log_func),
      [] (const gchar *log_domain, ::GLogLevelFlags log_level, const gchar *message, gpointer user_data) -> void
      {
        LogFunc &_peel_captured_log_func = *reinterpret_cast<typename std::remove_reference<LogFunc>::type *> (user_data);
        LogLevelFlags _peel_log_level = static_cast<LogLevelFlags> (log_level);
        _peel_captured_log_func (log_domain, _peel_log_level, message);
      },
      &_peel_user_data, peel::internals::is_const_invocable<LogFunc, void, const char *, LogLevelFlags, const char *>::value);
  return g_log_set_default_handler (_peel_log_func, _peel_user_data);
}

peel_no_warn_unused peel_nonnull_args (1)
static LogLevelFlags
log_set_fatal_mask (const char *log_domain, LogLevelFlags fatal_mask) noexcept
{
  ::GLogLevelFlags _peel_fatal_mask = static_cast<::GLogLevelFlags> (fatal_mask);
  ::GLogLevelFlags _peel_return = g_log_set_fatal_mask (log_domain, _peel_fatal_mask);
  return static_cast<LogLevelFlags> (_peel_return);
}

template<typename LogFunc>
peel_no_warn_unused
static unsigned
log_set_handler (const char *log_domain, LogLevelFlags log_levels, LogFunc &&log_func) noexcept
{
  gpointer _peel_user_data;
  ::GLogLevelFlags _peel_log_levels = static_cast<::GLogLevelFlags> (log_levels);
  ::GLogFunc _peel_log_func = peel::internals::CallbackHelper<void, const gchar *, ::GLogLevelFlags, const gchar *>::wrap_call_callback (
      static_cast<LogFunc &&> (log_func),
      [] (const gchar *log_domain, ::GLogLevelFlags log_level, const gchar *message, gpointer user_data) -> void
      {
        LogFunc &_peel_captured_log_func = *reinterpret_cast<typename std::remove_reference<LogFunc>::type *> (user_data);
        LogLevelFlags _peel_log_level = static_cast<LogLevelFlags> (log_level);
        _peel_captured_log_func (log_domain, _peel_log_level, message);
      },
      &_peel_user_data, peel::internals::is_const_invocable<LogFunc, void, const char *, LogLevelFlags, const char *>::value);
  return g_log_set_handler (log_domain, _peel_log_levels, _peel_log_func, _peel_user_data);
}

template<typename LogFunc>
peel_no_warn_unused
static unsigned
log_set_handler_full (const char *log_domain, LogLevelFlags log_levels, LogFunc &&log_func) noexcept
{
  gpointer _peel_user_data;
  ::GDestroyNotify _peel_destroy;
  ::GLogLevelFlags _peel_log_levels = static_cast<::GLogLevelFlags> (log_levels);
  ::GLogFunc _peel_log_func = peel::internals::CallbackHelper<void, const gchar *, ::GLogLevelFlags, const gchar *>::wrap_notified_callback (
      static_cast<LogFunc &&> (log_func),
      [] (const gchar *log_domain, ::GLogLevelFlags log_level, const gchar *message, gpointer user_data) -> void
      {
        LogFunc &_peel_captured_log_func = *reinterpret_cast<typename std::remove_reference<LogFunc>::type *> (user_data);
        LogLevelFlags _peel_log_level = static_cast<LogLevelFlags> (log_level);
        _peel_captured_log_func (log_domain, _peel_log_level, message);
      },
      &_peel_user_data, &_peel_destroy, peel::internals::is_const_invocable<LogFunc, void, const char *, LogLevelFlags, const char *>::value);
  return g_log_set_handler_full (log_domain, _peel_log_levels, _peel_log_func, _peel_user_data, _peel_destroy);
}

template<typename LogWriterFunc>
peel_no_warn_unused
static void
log_set_writer_func (LogWriterFunc &&func) noexcept
{
  gpointer _peel_user_data;
  ::GDestroyNotify _peel_user_data_free;
  ::GLogWriterFunc _peel_func = peel::internals::CallbackHelper<::GLogWriterOutput, ::GLogLevelFlags, const ::GLogField *, gsize>::wrap_notified_callback (
      static_cast<LogWriterFunc &&> (func),
      [] (::GLogLevelFlags log_level, const ::GLogField *fields, gsize n_fields, gpointer user_data) -> ::GLogWriterOutput
      {
        LogWriterFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<LogWriterFunc>::type *> (user_data);
        LogLevelFlags _peel_log_level = static_cast<LogLevelFlags> (log_level);
        peel::ArrayRef<const LogField> _peel_fields = peel::ArrayRef<const LogField> (reinterpret_cast<const LogField *> (fields), n_fields);
        LogWriterOutput _peel_return = _peel_captured_func (_peel_log_level, _peel_fields);
        return static_cast<::GLogWriterOutput> (_peel_return);
      },
      &_peel_user_data, &_peel_user_data_free, peel::internals::is_const_invocable<LogWriterFunc, void, LogLevelFlags, peel::ArrayRef<const LogField>, size_t>::value);
  g_log_set_writer_func (_peel_func, _peel_user_data, _peel_user_data_free);
}

/* Unsupported for now: log_structured: varargs */

peel_no_warn_unused
static void
log_structured_array (LogLevelFlags log_level, peel::ArrayRef<const LogField> fields) noexcept
{
  gsize _peel_n_fields;
  ::GLogLevelFlags _peel_log_level = static_cast<::GLogLevelFlags> (log_level);
  const ::GLogField *_peel_fields = (_peel_n_fields = fields.size (), reinterpret_cast<const ::GLogField *> (fields.data ()));
  g_log_structured_array (_peel_log_level, _peel_fields, _peel_n_fields);
}

/* Unsupported for now: log_structured_standard: varargs */

peel_no_warn_unused peel_arg_in (3) peel_nonnull_args (3)
static void
log_variant (const char *log_domain, LogLevelFlags log_level, Variant *fields) noexcept
{
  ::GLogLevelFlags _peel_log_level = static_cast<::GLogLevelFlags> (log_level);
  ::GVariant *_peel_fields = reinterpret_cast<::GVariant *> (fields);
  g_log_variant (log_domain, _peel_log_level, _peel_fields);
}

peel_no_warn_unused
static LogWriterOutput
log_writer_default (LogLevelFlags log_level, peel::ArrayRef<const LogField> fields, void *user_data) noexcept
{
  gsize _peel_n_fields;
  ::GLogLevelFlags _peel_log_level = static_cast<::GLogLevelFlags> (log_level);
  const ::GLogField *_peel_fields = (_peel_n_fields = fields.size (), reinterpret_cast<const ::GLogField *> (fields.data ()));
  ::GLogWriterOutput _peel_return = g_log_writer_default (_peel_log_level, _peel_fields, _peel_n_fields, user_data);
  return static_cast<LogWriterOutput> (_peel_return);
}

/* Unsupported for now: log_writer_default_set_debug_domains: explicitly skipped */

peel_no_warn_unused
static void
log_writer_default_set_use_stderr (bool use_stderr) noexcept
{
  gboolean _peel_use_stderr = static_cast<gboolean> (use_stderr);
  g_log_writer_default_set_use_stderr (_peel_use_stderr);
}

peel_no_warn_unused
static bool
log_writer_default_would_drop (LogLevelFlags log_level, const char *log_domain) noexcept
{
  ::GLogLevelFlags _peel_log_level = static_cast<::GLogLevelFlags> (log_level);
  gboolean _peel_return = g_log_writer_default_would_drop (_peel_log_level, log_domain);
  return !!_peel_return;
}

peel_no_warn_unused
static peel::String
log_writer_format_fields (LogLevelFlags log_level, peel::ArrayRef<const LogField> fields, bool use_color) noexcept
{
  gsize _peel_n_fields;
  ::GLogLevelFlags _peel_log_level = static_cast<::GLogLevelFlags> (log_level);
  const ::GLogField *_peel_fields = (_peel_n_fields = fields.size (), reinterpret_cast<const ::GLogField *> (fields.data ()));
  gboolean _peel_use_color = static_cast<gboolean> (use_color);
  gchar *_peel_return = g_log_writer_format_fields (_peel_log_level, _peel_fields, _peel_n_fields, _peel_use_color);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static bool
log_writer_is_journald (int output_fd) noexcept
{
  gboolean _peel_return = g_log_writer_is_journald (output_fd);
  return !!_peel_return;
}

peel_no_warn_unused
static LogWriterOutput
log_writer_journald (LogLevelFlags log_level, peel::ArrayRef<const LogField> fields, void *user_data) noexcept
{
  gsize _peel_n_fields;
  ::GLogLevelFlags _peel_log_level = static_cast<::GLogLevelFlags> (log_level);
  const ::GLogField *_peel_fields = (_peel_n_fields = fields.size (), reinterpret_cast<const ::GLogField *> (fields.data ()));
  ::GLogWriterOutput _peel_return = g_log_writer_journald (_peel_log_level, _peel_fields, _peel_n_fields, user_data);
  return static_cast<LogWriterOutput> (_peel_return);
}

peel_no_warn_unused
static LogWriterOutput
log_writer_standard_streams (LogLevelFlags log_level, peel::ArrayRef<const LogField> fields, void *user_data) noexcept
{
  gsize _peel_n_fields;
  ::GLogLevelFlags _peel_log_level = static_cast<::GLogLevelFlags> (log_level);
  const ::GLogField *_peel_fields = (_peel_n_fields = fields.size (), reinterpret_cast<const ::GLogField *> (fields.data ()));
  ::GLogWriterOutput _peel_return = g_log_writer_standard_streams (_peel_log_level, _peel_fields, _peel_n_fields, user_data);
  return static_cast<LogWriterOutput> (_peel_return);
}

peel_no_warn_unused
static bool
log_writer_supports_color (int output_fd) noexcept
{
  gboolean _peel_return = g_log_writer_supports_color (output_fd);
  return !!_peel_return;
}

peel_no_warn_unused
static LogWriterOutput
log_writer_syslog (LogLevelFlags log_level, peel::ArrayRef<const LogField> fields, void *user_data) noexcept
{
  gsize _peel_n_fields;
  ::GLogLevelFlags _peel_log_level = static_cast<::GLogLevelFlags> (log_level);
  const ::GLogField *_peel_fields = (_peel_n_fields = fields.size (), reinterpret_cast<const ::GLogField *> (fields.data ()));
  ::GLogWriterOutput _peel_return = g_log_writer_syslog (_peel_log_level, _peel_fields, _peel_n_fields, user_data);
  return static_cast<LogWriterOutput> (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (3)
static void
logv (const char *log_domain, LogLevelFlags log_level, const char *format, va_list args) noexcept
{
  ::GLogLevelFlags _peel_log_level = static_cast<::GLogLevelFlags> (log_level);
  g_logv (log_domain, _peel_log_level, format, args);
}

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static int
lstat (const char *filename, StatBuf *buf) noexcept
{
  ::GStatBuf *_peel_buf = reinterpret_cast<::GStatBuf *> (buf);
  return g_lstat (filename, _peel_buf);
}

/* main_context_default moved to MainContext.default */

/* main_context_get_thread_default moved to MainContext.get_thread_default */

/* main_context_ref_thread_default moved to MainContext.ref_thread_default */

peel_no_warn_unused
static Source *
main_current_source () noexcept
{
  ::GSource *_peel_return = g_main_current_source ();
  return reinterpret_cast<Source *> (_peel_return);
}

peel_no_warn_unused
static int
main_depth () noexcept
{
  return g_main_depth ();
}

peel_no_warn_unused
static void *
malloc (size_t n_bytes) noexcept
{
  return g_malloc (n_bytes);
}

peel_no_warn_unused
static void *
malloc0 (size_t n_bytes) noexcept
{
  return g_malloc0 (n_bytes);
}

peel_no_warn_unused
static void *
malloc0_n (size_t n_blocks, size_t n_block_bytes) noexcept
{
  return g_malloc0_n (n_blocks, n_block_bytes);
}

peel_no_warn_unused
static void *
malloc_n (size_t n_blocks, size_t n_block_bytes) noexcept
{
  return g_malloc_n (n_blocks, n_block_bytes);
}

/* Unsupported for now: markup_collect_attributes: varargs */

peel_no_warn_unused
static Quark
markup_error_quark () noexcept
{
  ::GQuark _peel_return = g_markup_error_quark ();
  return static_cast<Quark> (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
markup_escape_text (const char *text, gssize length) noexcept
{
  gchar *_peel_return = g_markup_escape_text (text, length);
  return peel::String::adopt_string (_peel_return);
}

/* Unsupported for now: markup_printf_escaped: varargs */

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
markup_vprintf_escaped (const char *format, va_list args) noexcept
{
  gchar *_peel_return = g_markup_vprintf_escaped (format, args);
  return peel::String::adopt_string (_peel_return);
}

/* mem_chunk_info moved to MemChunk.info */

peel_no_warn_unused
static bool
mem_is_system_malloc () noexcept
{
  gboolean _peel_return = g_mem_is_system_malloc ();
  return !!_peel_return;
}

peel_no_warn_unused
static void
mem_profile () noexcept
{
  g_mem_profile ();
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static void
mem_set_vtable (MemVTable *vtable) noexcept
{
  ::GMemVTable *_peel_vtable = reinterpret_cast<::GMemVTable *> (vtable);
  g_mem_set_vtable (_peel_vtable);
}

peel_no_warn_unused
static void *
memdup (const void *mem, unsigned byte_size) noexcept
{
  return g_memdup (mem, byte_size);
}

peel_no_warn_unused
static void *
memdup2 (const void *mem, size_t byte_size) noexcept
{
  return g_memdup2 (mem, byte_size);
}

/* Unsupported for now: mkdir: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1)
static int
mkdir_with_parents (const char *pathname, int mode) noexcept
{
  return g_mkdir_with_parents (pathname, mode);
}

/* Unsupported for now: mkdtemp: explicitly skipped */

/* Unsupported for now: mkdtemp_full: explicitly skipped */

/* Unsupported for now: mkstemp: explicitly skipped */

/* Unsupported for now: mkstemp_full: explicitly skipped */

/* mutex_new moved to Mutex.new */

/* node_pop_allocator moved to Node.pop_allocator */

/* node_push_allocator moved to Node.push_allocator */

peel_no_warn_unused
static void
nullify_pointer (gpointer *nullify_location) noexcept
{
  g_nullify_pointer (nullify_location);
}

peel_no_warn_unused
static Quark
number_parser_error_quark () noexcept
{
  ::GQuark _peel_return = g_number_parser_error_quark ();
  return static_cast<Quark> (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static void
on_error_query (const char *prg_name) noexcept
{
  g_on_error_query (prg_name);
}

peel_no_warn_unused
static void
on_error_stack_trace (const char *prg_name) noexcept
{
  g_on_error_stack_trace (prg_name);
}

/* once_init_enter moved to Once.init_enter */

/* once_init_enter_impl moved to Once.init_enter_impl */

/* once_init_enter_pointer moved to Once.init_enter_pointer */

/* once_init_leave moved to Once.init_leave */

/* once_init_leave_pointer moved to Once.init_leave_pointer */

/* Unsupported for now: open: explicitly skipped */

peel_no_warn_unused
static Quark
option_error_quark () noexcept
{
  ::GQuark _peel_return = g_option_error_quark ();
  return static_cast<Quark> (_peel_return);
}

peel_no_warn_unused
static unsigned
parse_debug_string (const char *string, peel::ArrayRef<const DebugKey *> keys) noexcept
{
  guint _peel_nkeys;
  const ::GDebugKey *_peel_keys = (_peel_nkeys = keys.size (), reinterpret_cast<const ::GDebugKey *> (keys.data ()));
  return g_parse_debug_string (string, _peel_keys, _peel_nkeys);
}

/* path_buf_equal moved to PathBuf.equal */

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
path_get_basename (const char *file_name) noexcept
{
  gchar *_peel_return = g_path_get_basename (file_name);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
path_get_dirname (const char *file_name) noexcept
{
  gchar *_peel_return = g_path_get_dirname (file_name);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
path_is_absolute (const char *file_name) noexcept
{
  gboolean _peel_return = g_path_is_absolute (file_name);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static const char *
path_skip_root (const char *file_name) noexcept
{
  return g_path_skip_root (file_name);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1, 3)
static bool
pattern_match (PatternSpec *pspec, unsigned string_length, const char *string, const char *string_reversed) noexcept
{
  ::GPatternSpec *_peel_pspec = reinterpret_cast<::GPatternSpec *> (pspec);
  gboolean _peel_return = g_pattern_match (_peel_pspec, string_length, string, string_reversed);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1, 2)
static bool
pattern_match_simple (const char *pattern, const char *string) noexcept
{
  gboolean _peel_return = g_pattern_match_simple (pattern, string);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1, 2)
static bool
pattern_match_string (PatternSpec *pspec, const char *string) noexcept
{
  ::GPatternSpec *_peel_pspec = reinterpret_cast<::GPatternSpec *> (pspec);
  gboolean _peel_return = g_pattern_match_string (_peel_pspec, string);
  return !!_peel_return;
}

/* Unsupported for now: pointer_bit_lock: explicitly skipped */

/* Unsupported for now: pointer_bit_lock_and_get: explicitly skipped */

peel_no_warn_unused
static void *
pointer_bit_lock_mask_ptr (void *ptr, unsigned lock_bit, bool set, uintptr_t preserve_mask, void *preserve_ptr) noexcept
{
  gboolean _peel_set = static_cast<gboolean> (set);
  return g_pointer_bit_lock_mask_ptr (ptr, lock_bit, _peel_set, preserve_mask, preserve_ptr);
}

/* Unsupported for now: pointer_bit_trylock: explicitly skipped */

/* Unsupported for now: pointer_bit_unlock: explicitly skipped */

/* Unsupported for now: pointer_bit_unlock_and_set: explicitly skipped */

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static int
poll (PollFD *fds, unsigned nfds, int timeout) noexcept
{
  ::GPollFD *_peel_fds = reinterpret_cast<::GPollFD *> (fds);
  return g_poll (_peel_fds, nfds, timeout);
}

template<typename... Args>
peel_no_warn_unused peel_arg_inout (1) peel_nonnull_args (2)
static void
prefix_error (peel::UniquePtr<Error> *err, const char *format, Args ...args) noexcept
{
  ::GError *_peel_err;
  if (err)
    _peel_err = reinterpret_cast<::GError *> (std::move (*err).release_ref ());
  g_prefix_error (err ? &_peel_err : nullptr, format, args...);
  if (err)
    *err = peel::UniquePtr<Error>::adopt_ref (reinterpret_cast<Error *> (_peel_err));
}

/* Unsupported for now: prefix_error_literal: explicitly skipped */

template<typename... Args>
peel_no_warn_unused peel_nonnull_args (1)
static void
print (const char *format, Args ...args) noexcept
{
  g_print (format, args...);
}

template<typename... Args>
peel_no_warn_unused peel_nonnull_args (1)
static void
printerr (const char *format, Args ...args) noexcept
{
  g_printerr (format, args...);
}

/* Unsupported for now: printf: varargs */

peel_no_warn_unused peel_nonnull_args (1)
static size_t
printf_string_upper_bound (const char *format, va_list args) noexcept
{
  return g_printf_string_upper_bound (format, args);
}

/* private_new moved to Private.new */

peel_no_warn_unused peel_arg_inout (1)
static void
propagate_error (peel::UniquePtr<Error> *dest, peel::UniquePtr<Error> src) noexcept
{
  ::GError *_peel_dest;
  if (dest)
    _peel_dest = reinterpret_cast<::GError *> (std::move (*dest).release_ref ());
  ::GError *_peel_src = reinterpret_cast<::GError *> (std::move (src).release_ref ());
  g_propagate_error (dest ? &_peel_dest : nullptr, _peel_src);
  if (dest)
    *dest = peel::UniquePtr<Error>::adopt_ref (reinterpret_cast<Error *> (_peel_dest));
}

template<typename... Args>
peel_no_warn_unused peel_arg_in (1) peel_arg_in (2) peel_nonnull_args (1, 2, 3)
static void
propagate_prefixed_error (Error *dest, Error *src, const char *format, Args ...args) noexcept
{
  ::GError **_peel_dest = reinterpret_cast<::GError **> (dest);
  ::GError *_peel_src = reinterpret_cast<::GError *> (src);
  g_propagate_prefixed_error (_peel_dest, _peel_src, format, args...);
}

/* ptr_array_find moved to PtrArray.find */

/* ptr_array_find_with_equal_func moved to PtrArray.find_with_equal_func */

/* ptr_array_new_from_array moved to PtrArray.new_from_array */

/* ptr_array_new_from_null_terminated_array moved to PtrArray.new_from_null_terminated_array */

/* ptr_array_new_take moved to PtrArray.new_take */

/* ptr_array_new_take_null_terminated moved to PtrArray.new_take_null_terminated */

template<typename CompareDataFunc>
peel_no_warn_unused
static void
qsort_with_data (const void *pbase, int total_elems, size_t size, CompareDataFunc &&compare_func) noexcept
{
  gpointer _peel_user_data;
  ::GCompareDataFunc _peel_compare_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (compare_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_compare_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_compare_func (a, b);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
  g_qsort_with_data (pbase, total_elems, size, _peel_compare_func, _peel_user_data);
}

peel_no_warn_unused
static Quark
quark_from_static_string (const char *string) noexcept
{
  ::GQuark _peel_return = g_quark_from_static_string (string);
  return static_cast<Quark> (_peel_return);
}

peel_no_warn_unused
static Quark
quark_from_string (const char *string) noexcept
{
  ::GQuark _peel_return = g_quark_from_string (string);
  return static_cast<Quark> (_peel_return);
}

peel_no_warn_unused peel_returns_nonnull
static const char *
quark_to_string (Quark quark) noexcept
{
  return g_quark_to_string (quark);
}

peel_no_warn_unused
static Quark
quark_try_string (const char *string) noexcept
{
  ::GQuark _peel_return = g_quark_try_string (string);
  return static_cast<Quark> (_peel_return);
}

peel_no_warn_unused
static double
random_double () noexcept
{
  return g_random_double ();
}

peel_no_warn_unused
static double
random_double_range (double begin, double end) noexcept
{
  return g_random_double_range (begin, end);
}

peel_no_warn_unused
static uint32_t
random_int () noexcept
{
  return g_random_int ();
}

peel_no_warn_unused
static int32_t
random_int_range (int32_t begin, int32_t end) noexcept
{
  return g_random_int_range (begin, end);
}

peel_no_warn_unused
static void
random_set_seed (uint32_t seed) noexcept
{
  g_random_set_seed (seed);
}

peel_no_warn_unused
static void *
rc_box_acquire (void *mem_block) noexcept
{
  return g_rc_box_acquire (mem_block);
}

peel_no_warn_unused
static void *
rc_box_alloc (size_t block_size) noexcept
{
  return g_rc_box_alloc (block_size);
}

peel_no_warn_unused
static void *
rc_box_alloc0 (size_t block_size) noexcept
{
  return g_rc_box_alloc0 (block_size);
}

/* Unsupported for now: rc_box_dup: explicitly skipped */

peel_no_warn_unused
static size_t
rc_box_get_size (void *mem_block) noexcept
{
  return g_rc_box_get_size (mem_block);
}

peel_no_warn_unused
static void
rc_box_release (void *mem_block) noexcept
{
  g_rc_box_release (mem_block);
}

peel_no_warn_unused
static void
rc_box_release_full (void *mem_block, ::GDestroyNotify clear_func) noexcept
{
  g_rc_box_release_full (mem_block, clear_func);
}

peel_no_warn_unused
static void *
realloc (void *mem, size_t n_bytes) noexcept
{
  return g_realloc (mem, n_bytes);
}

peel_no_warn_unused
static void *
realloc_n (void *mem, size_t n_blocks, size_t n_block_bytes) noexcept
{
  return g_realloc_n (mem, n_blocks, n_block_bytes);
}

/* Unsupported for now: ref_count_compare: explicitly skipped */

/* Unsupported for now: ref_count_dec: explicitly skipped */

/* Unsupported for now: ref_count_inc: explicitly skipped */

/* Unsupported for now: ref_count_init: explicitly skipped */

/* Unsupported for now: ref_string_acquire: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1, 2)
static bool
ref_string_equal (const char *str1, const char *str2) noexcept
{
  gboolean _peel_return = g_ref_string_equal (str1, str2);
  return !!_peel_return;
}

/* Unsupported for now: ref_string_length: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
ref_string_new (const char *str) noexcept
{
  char *_peel_return = g_ref_string_new (str);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
ref_string_new_intern (const char *str) noexcept
{
  char *_peel_return = g_ref_string_new_intern (str);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
ref_string_new_len (const char *str, gssize len) noexcept
{
  char *_peel_return = g_ref_string_new_len (str, len);
  return peel::String::adopt_string (_peel_return);
}

/* Unsupported for now: ref_string_release: explicitly skipped */

/* regex_check_replacement moved to Regex.check_replacement */

/* regex_error_quark moved to Regex.error_quark */

/* regex_escape_nul moved to Regex.escape_nul */

/* regex_escape_string moved to Regex.escape_string */

/* regex_match_simple moved to Regex.match_simple */

/* regex_split_simple moved to Regex.split_simple */

peel_no_warn_unused
static void
reload_user_special_dirs_cache () noexcept
{
  g_reload_user_special_dirs_cache ();
}

/* Unsupported for now: remove: explicitly skipped */

/* Unsupported for now: rename: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (2)
static void
return_if_fail_warning (const char *log_domain, const char *pretty_function, const char *expression) noexcept
{
  g_return_if_fail_warning (log_domain, pretty_function, expression);
}

peel_no_warn_unused peel_nonnull_args (1)
static int
rmdir (const char *filename) noexcept
{
  return g_rmdir (filename);
}

/* sequence_foreach_range moved to Sequence.foreach_range */

/* sequence_get moved to Sequence.get */

/* sequence_insert_before moved to Sequence.insert_before */

/* sequence_move moved to Sequence.move */

/* sequence_move_range moved to Sequence.move_range */

/* sequence_range_get_midpoint moved to Sequence.range_get_midpoint */

/* sequence_remove moved to Sequence.remove */

/* sequence_remove_range moved to Sequence.remove_range */

/* sequence_set moved to Sequence.set */

/* sequence_sort_changed moved to Sequence.sort_changed */

/* sequence_sort_changed_iter moved to Sequence.sort_changed_iter */

/* sequence_swap moved to Sequence.swap */

peel_no_warn_unused peel_nonnull_args (1)
static void
set_application_name (const char *application_name) noexcept
{
  g_set_application_name (application_name);
}

template<typename... Args>
peel_no_warn_unused peel_arg_inout (1) peel_nonnull_args (4)
static void
set_error (peel::UniquePtr<Error> *err, Quark domain, int code, const char *format, Args ...args) noexcept
{
  ::GError *_peel_err;
  if (err)
    _peel_err = reinterpret_cast<::GError *> (std::move (*err).release_ref ());
  g_set_error (err ? &_peel_err : nullptr, domain, code, format, args...);
  if (err)
    *err = peel::UniquePtr<Error>::adopt_ref (reinterpret_cast<Error *> (_peel_err));
}

peel_no_warn_unused peel_arg_inout (1) peel_nonnull_args (4)
static void
set_error_literal (peel::UniquePtr<Error> *err, Quark domain, int code, const char *message) noexcept
{
  ::GError *_peel_err;
  if (err)
    _peel_err = reinterpret_cast<::GError *> (std::move (*err).release_ref ());
  g_set_error_literal (err ? &_peel_err : nullptr, domain, code, message);
  if (err)
    *err = peel::UniquePtr<Error>::adopt_ref (reinterpret_cast<Error *> (_peel_err));
}

peel_no_warn_unused peel_nonnull_args (1)
static void
set_prgname (const char *prgname) noexcept
{
  g_set_prgname (prgname);
}

peel_no_warn_unused
static ::GPrintFunc
set_print_handler (::GPrintFunc func) noexcept
{
  return g_set_print_handler (func);
}

peel_no_warn_unused
static ::GPrintFunc
set_printerr_handler (::GPrintFunc func) noexcept
{
  return g_set_printerr_handler (func);
}

peel_no_warn_unused peel_nonnull_args (1, 2)
static bool
setenv (const char *variable, const char *value, bool overwrite) noexcept
{
  gboolean _peel_overwrite = static_cast<gboolean> (overwrite);
  gboolean _peel_return = g_setenv (variable, value, _peel_overwrite);
  return !!_peel_return;
}

peel_no_warn_unused
static Quark
shell_error_quark () noexcept
{
  ::GQuark _peel_return = g_shell_error_quark ();
  return static_cast<Quark> (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
shell_parse_argv (const char *command_line, peel::UniquePtr<peel::String[]> *argvp, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gint _peel_argcp;
  gchar **_peel_argvp;
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_shell_parse_argv (command_line, &_peel_argcp, argvp ? &_peel_argvp : nullptr, &_peel_error);
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
      if (argvp)
        *argvp = peel::UniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_argvp), _peel_argcp);
    }
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
shell_quote (const char *unquoted_string) noexcept
{
  gchar *_peel_return = g_shell_quote (unquoted_string);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
shell_unquote (const char *quoted_string, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GError *_peel_error = nullptr;
  gchar *_peel_return = g_shell_unquote (quoted_string, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static void *
slice_alloc (size_t block_size) noexcept
{
  return g_slice_alloc (block_size);
}

peel_no_warn_unused
static void *
slice_alloc0 (size_t block_size) noexcept
{
  return g_slice_alloc0 (block_size);
}

peel_no_warn_unused
static void *
slice_copy (size_t block_size, const void *mem_block) noexcept
{
  return g_slice_copy (block_size, mem_block);
}

peel_no_warn_unused
static void
slice_free1 (size_t block_size, void *mem_block) noexcept
{
  g_slice_free1 (block_size, mem_block);
}

peel_no_warn_unused
static void
slice_free_chain_with_offset (size_t block_size, void *mem_chain, size_t next_offset) noexcept
{
  g_slice_free_chain_with_offset (block_size, mem_chain, next_offset);
}

peel_no_warn_unused
static int64_t
slice_get_config (SliceConfig ckey) noexcept
{
  ::GSliceConfig _peel_ckey = static_cast<::GSliceConfig> (ckey);
  return g_slice_get_config (_peel_ckey);
}

/* Unsupported for now: slice_get_config_state: explicitly skipped */

peel_no_warn_unused
static void
slice_set_config (SliceConfig ckey, int64_t value) noexcept
{
  ::GSliceConfig _peel_ckey = static_cast<::GSliceConfig> (ckey);
  g_slice_set_config (_peel_ckey, value);
}

/* slist_pop_allocator moved to SList.pop_allocator */

/* slist_push_allocator moved to SList.push_allocator */

/* Unsupported for now: snprintf: varargs */

template<typename CompareDataFunc>
peel_no_warn_unused
static void
sort_array (peel::ArrayRef<void *> array, size_t element_size, CompareDataFunc &&compare_func) noexcept
{
  size_t _peel_n_elements;
  void *_peel_user_data;
  void *_peel_array = (_peel_n_elements = array.size (), reinterpret_cast<void *> (array.data ()));
  ::GCompareDataFunc _peel_compare_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_call_callback (
      static_cast<CompareDataFunc &&> (compare_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_compare_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return _peel_captured_compare_func (a, b);
      },
      &_peel_user_data, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
  g_sort_array (_peel_array, _peel_n_elements, element_size, _peel_compare_func, _peel_user_data);
}

/* source_remove moved to Source.remove */

/* source_remove_by_funcs_user_data moved to Source.remove_by_funcs_user_data */

/* source_remove_by_user_data moved to Source.remove_by_user_data */

/* source_set_name_by_id moved to Source.set_name_by_id */

peel_no_warn_unused
static unsigned
spaced_primes_closest (unsigned num) noexcept
{
  return g_spaced_primes_closest (num);
}

template<typename SpawnChildSetupFunc>
peel_no_warn_unused peel_arg_out (6)
static bool
spawn_async (const char *working_directory, peel::StrvRef argv, peel::StrvRef envp, SpawnFlags flags, SpawnChildSetupFunc &&child_setup, int *child_pid, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gpointer _peel_user_data;
  gchar **_peel_argv = const_cast<gchar **> (argv.data ());
  gchar **_peel_envp = const_cast<gchar **> (envp.data ());
  ::GSpawnFlags _peel_flags = static_cast<::GSpawnFlags> (flags);
  ::GSpawnChildSetupFunc _peel_child_setup = peel::internals::CallbackHelper<void>::wrap_async_callback (
      static_cast<SpawnChildSetupFunc &&> (child_setup),
      [] (gpointer data) -> void
      {
        SpawnChildSetupFunc &_peel_captured_child_setup = *reinterpret_cast<typename std::remove_reference<SpawnChildSetupFunc>::type *> (data);
        peel::internals::invoke_if_nonnull<void> (static_cast<SpawnChildSetupFunc &&> (_peel_captured_child_setup)) ();
      },
      &_peel_user_data);
  GPid *_peel_child_pid = reinterpret_cast<GPid *> (child_pid);
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_spawn_async (working_directory, _peel_argv, _peel_envp, _peel_flags, _peel_child_setup, _peel_user_data, _peel_child_pid, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

template<typename SpawnChildSetupFunc>
peel_no_warn_unused peel_arg_out (6)
static bool
spawn_async_with_fds (const char *working_directory, peel::StrvRef argv, peel::StrvRef envp, SpawnFlags flags, SpawnChildSetupFunc &&child_setup, int *child_pid, int stdin_fd, int stdout_fd, int stderr_fd, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gpointer _peel_user_data;
  gchar **_peel_argv = const_cast<gchar **> (argv.data ());
  gchar **_peel_envp = const_cast<gchar **> (envp.data ());
  ::GSpawnFlags _peel_flags = static_cast<::GSpawnFlags> (flags);
  ::GSpawnChildSetupFunc _peel_child_setup = peel::internals::CallbackHelper<void>::wrap_async_callback (
      static_cast<SpawnChildSetupFunc &&> (child_setup),
      [] (gpointer data) -> void
      {
        SpawnChildSetupFunc &_peel_captured_child_setup = *reinterpret_cast<typename std::remove_reference<SpawnChildSetupFunc>::type *> (data);
        peel::internals::invoke_if_nonnull<void> (static_cast<SpawnChildSetupFunc &&> (_peel_captured_child_setup)) ();
      },
      &_peel_user_data);
  GPid *_peel_child_pid = reinterpret_cast<GPid *> (child_pid);
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_spawn_async_with_fds (working_directory, _peel_argv, _peel_envp, _peel_flags, _peel_child_setup, _peel_user_data, _peel_child_pid, stdin_fd, stdout_fd, stderr_fd, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

template<typename SpawnChildSetupFunc>
peel_no_warn_unused peel_arg_out (6) peel_arg_out (7) peel_arg_out (8) peel_arg_out (9)
static bool
spawn_async_with_pipes (const char *working_directory, peel::StrvRef argv, peel::StrvRef envp, SpawnFlags flags, SpawnChildSetupFunc &&child_setup, int *child_pid, int *standard_input, int *standard_output, int *standard_error, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gpointer _peel_user_data;
  gchar **_peel_argv = const_cast<gchar **> (argv.data ());
  gchar **_peel_envp = const_cast<gchar **> (envp.data ());
  ::GSpawnFlags _peel_flags = static_cast<::GSpawnFlags> (flags);
  ::GSpawnChildSetupFunc _peel_child_setup = peel::internals::CallbackHelper<void>::wrap_async_callback (
      static_cast<SpawnChildSetupFunc &&> (child_setup),
      [] (gpointer data) -> void
      {
        SpawnChildSetupFunc &_peel_captured_child_setup = *reinterpret_cast<typename std::remove_reference<SpawnChildSetupFunc>::type *> (data);
        peel::internals::invoke_if_nonnull<void> (static_cast<SpawnChildSetupFunc &&> (_peel_captured_child_setup)) ();
      },
      &_peel_user_data);
  GPid *_peel_child_pid = reinterpret_cast<GPid *> (child_pid);
  gint *_peel_standard_input = reinterpret_cast<gint *> (standard_input);
  gint *_peel_standard_output = reinterpret_cast<gint *> (standard_output);
  gint *_peel_standard_error = reinterpret_cast<gint *> (standard_error);
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_spawn_async_with_pipes (working_directory, _peel_argv, _peel_envp, _peel_flags, _peel_child_setup, _peel_user_data, _peel_child_pid, _peel_standard_input, _peel_standard_output, _peel_standard_error, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

template<typename SpawnChildSetupFunc>
peel_no_warn_unused peel_arg_out (11) peel_arg_out (12) peel_arg_out (13) peel_arg_out (14)
static bool
spawn_async_with_pipes_and_fds (const char *working_directory, peel::StrvRef argv, peel::StrvRef envp, SpawnFlags flags, SpawnChildSetupFunc &&child_setup, int stdin_fd, int stdout_fd, int stderr_fd, peel::ArrayRef<const int> source_fds, peel::ArrayRef<const int> target_fds, int *child_pid_out, int *stdin_pipe_out, int *stdout_pipe_out, int *stderr_pipe_out, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gpointer _peel_user_data;
  gsize _peel_n_fds;
  const gchar* const *_peel_argv = reinterpret_cast<const gchar* const *> (argv.data ());
  const gchar* const *_peel_envp = reinterpret_cast<const gchar* const *> (envp.data ());
  ::GSpawnFlags _peel_flags = static_cast<::GSpawnFlags> (flags);
  ::GSpawnChildSetupFunc _peel_child_setup = peel::internals::CallbackHelper<void>::wrap_async_callback (
      static_cast<SpawnChildSetupFunc &&> (child_setup),
      [] (gpointer data) -> void
      {
        SpawnChildSetupFunc &_peel_captured_child_setup = *reinterpret_cast<typename std::remove_reference<SpawnChildSetupFunc>::type *> (data);
        peel::internals::invoke_if_nonnull<void> (static_cast<SpawnChildSetupFunc &&> (_peel_captured_child_setup)) ();
      },
      &_peel_user_data);
  const gint *_peel_source_fds = (_peel_n_fds = source_fds.size (), reinterpret_cast<const gint *> (source_fds.data ()));
  const gint *_peel_target_fds = (_peel_n_fds = target_fds.size (), reinterpret_cast<const gint *> (target_fds.data ()));
  GPid *_peel_child_pid_out = reinterpret_cast<GPid *> (child_pid_out);
  gint *_peel_stdin_pipe_out = reinterpret_cast<gint *> (stdin_pipe_out);
  gint *_peel_stdout_pipe_out = reinterpret_cast<gint *> (stdout_pipe_out);
  gint *_peel_stderr_pipe_out = reinterpret_cast<gint *> (stderr_pipe_out);
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_spawn_async_with_pipes_and_fds (working_directory, _peel_argv, _peel_envp, _peel_flags, _peel_child_setup, _peel_user_data, stdin_fd, stdout_fd, stderr_fd, _peel_source_fds, _peel_target_fds, _peel_n_fds, _peel_child_pid_out, _peel_stdin_pipe_out, _peel_stdout_pipe_out, _peel_stderr_pipe_out, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

peel_no_warn_unused
static bool
spawn_check_exit_status (int wait_status, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_spawn_check_exit_status (wait_status, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

peel_no_warn_unused
static bool
spawn_check_wait_status (int wait_status, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_spawn_check_wait_status (wait_status, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

peel_no_warn_unused
static void
spawn_close_pid (int pid) noexcept
{
  g_spawn_close_pid (pid);
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
spawn_command_line_async (const char *command_line, peel::UniquePtr<GLib::Error> *error) noexcept
{
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_spawn_command_line_async (command_line, error ? &_peel_error : nullptr);
  if (error)
    *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_out (4) peel_nonnull_args (1)
static bool
spawn_command_line_sync (const char *command_line, peel::ZTUniquePtr<uint8_t[]> *standard_output, peel::ZTUniquePtr<uint8_t[]> *standard_error, int *wait_status, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gchar *_peel_standard_output;
  gchar *_peel_standard_error;
  gint *_peel_wait_status = reinterpret_cast<gint *> (wait_status);
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_spawn_command_line_sync (command_line, standard_output ? &_peel_standard_output : nullptr, standard_error ? &_peel_standard_error : nullptr, _peel_wait_status, &_peel_error);
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
      if (standard_output)
        *standard_output = peel::ZTUniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_standard_output));
      if (standard_error)
        *standard_error = peel::ZTUniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_standard_error));
    }
  return !!_peel_return;
}

peel_no_warn_unused
static Quark
spawn_error_quark () noexcept
{
  ::GQuark _peel_return = g_spawn_error_quark ();
  return static_cast<Quark> (_peel_return);
}

peel_no_warn_unused
static Quark
spawn_exit_error_quark () noexcept
{
  ::GQuark _peel_return = g_spawn_exit_error_quark ();
  return static_cast<Quark> (_peel_return);
}

template<typename SpawnChildSetupFunc>
peel_no_warn_unused peel_arg_out (8)
static bool
spawn_sync (const char *working_directory, peel::StrvRef argv, peel::StrvRef envp, SpawnFlags flags, SpawnChildSetupFunc &&child_setup, peel::ZTUniquePtr<uint8_t[]> *standard_output, peel::ZTUniquePtr<uint8_t[]> *standard_error, int *wait_status, peel::UniquePtr<GLib::Error> *error) noexcept
{
  gpointer _peel_user_data;
  gchar **_peel_argv = const_cast<gchar **> (argv.data ());
  gchar **_peel_envp = const_cast<gchar **> (envp.data ());
  ::GSpawnFlags _peel_flags = static_cast<::GSpawnFlags> (flags);
  ::GSpawnChildSetupFunc _peel_child_setup = peel::internals::CallbackHelper<void>::wrap_call_callback (
      static_cast<SpawnChildSetupFunc &&> (child_setup),
      [] (gpointer data) -> void
      {
        SpawnChildSetupFunc &_peel_captured_child_setup = *reinterpret_cast<typename std::remove_reference<SpawnChildSetupFunc>::type *> (data);
        peel::internals::invoke_if_nonnull<void> (_peel_captured_child_setup) ();
      },
      &_peel_user_data, peel::internals::is_const_invocable<SpawnChildSetupFunc, void>::value);
  gchar *_peel_standard_output;
  gchar *_peel_standard_error;
  gint *_peel_wait_status = reinterpret_cast<gint *> (wait_status);
  ::GError *_peel_error = nullptr;
  gboolean _peel_return = g_spawn_sync (working_directory, _peel_argv, _peel_envp, _peel_flags, _peel_child_setup, _peel_user_data, standard_output ? &_peel_standard_output : nullptr, standard_error ? &_peel_standard_error : nullptr, _peel_wait_status, &_peel_error);
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
      if (standard_output)
        *standard_output = peel::ZTUniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_standard_output));
      if (standard_error)
        *standard_error = peel::ZTUniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_standard_error));
    }
  return !!_peel_return;
}

/* Unsupported for now: sprintf: varargs */

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (1, 2)
static int
stat (const char *filename, StatBuf *buf) noexcept
{
  ::GStatBuf *_peel_buf = reinterpret_cast<::GStatBuf *> (buf);
  return g_stat (filename, _peel_buf);
}

/* Unsupported for now: stpcpy: explicitly skipped */

peel_no_warn_unused
static bool
str_equal (const void *v1, const void *v2) noexcept
{
  gboolean _peel_return = g_str_equal (v1, v2);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1, 2)
static bool
str_has_prefix (const char *str, const char *prefix) noexcept
{
  gboolean _peel_return = g_str_has_prefix (str, prefix);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1, 2)
static bool
str_has_suffix (const char *str, const char *suffix) noexcept
{
  gboolean _peel_return = g_str_has_suffix (str, suffix);
  return !!_peel_return;
}

peel_no_warn_unused
static unsigned
str_hash (const void *v) noexcept
{
  return g_str_hash (v);
}

peel_no_warn_unused peel_nonnull_args (1)
static bool
str_is_ascii (const char *str) noexcept
{
  gboolean _peel_return = g_str_is_ascii (str);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1, 2)
static bool
str_match_string (const char *search_term, const char *potential_hit, bool accept_alternates) noexcept
{
  gboolean _peel_accept_alternates = static_cast<gboolean> (accept_alternates);
  gboolean _peel_return = g_str_match_string (search_term, potential_hit, _peel_accept_alternates);
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
str_to_ascii (const char *str, const char *from_locale) noexcept
{
  gchar *_peel_return = g_str_to_ascii (str, from_locale);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::Strv
str_tokenize_and_fold (const char *string, const char *translit_locale, peel::Strv *ascii_alternates) noexcept
{
  gchar **_peel_ascii_alternates;
  gchar **_peel_return = g_str_tokenize_and_fold (string, translit_locale, ascii_alternates ? &_peel_ascii_alternates : nullptr);
  if (ascii_alternates)
    *ascii_alternates = peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_ascii_alternates));
  peel_assume (_peel_return);
  return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
}

/* Unsupported for now: strcanon: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1, 2)
static int
strcasecmp (const char *s1, const char *s2) noexcept
{
  return g_strcasecmp (s1, s2);
}

/* Unsupported for now: strchomp: explicitly skipped */

/* Unsupported for now: strchug: explicitly skipped */

peel_no_warn_unused
static int
strcmp0 (const char *str1, const char *str2) noexcept
{
  return g_strcmp0 (str1, str2);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
strcompress (const char *source) noexcept
{
  gchar *_peel_return = g_strcompress (source);
  return peel::String::adopt_string (_peel_return);
}

template<typename... Args>
peel_no_warn_unused peel_nonnull_args (1)
static peel::String
strconcat (const char *string1, Args &&...args) noexcept
{
  gchar *_peel_return = g_strconcat (string1, static_cast<const char *> (std::forward<Args> (args))..., nullptr);
  return peel::String::adopt_string (_peel_return);
}

/* Unsupported for now: strdelimit: explicitly skipped */

/* Unsupported for now: strdown: explicitly skipped */

peel_no_warn_unused
static peel::String
strdup (const char *str) noexcept
{
  gchar *_peel_return = g_strdup (str);
  return peel::String::adopt_string (_peel_return);
}

template<typename... Args>
peel_no_warn_unused peel_nonnull_args (1)
static peel::String
strdup_printf (const char *format, Args ...args) noexcept
{
  gchar *_peel_return = g_strdup_printf (format, args...);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
strdup_vprintf (const char *format, va_list args) noexcept
{
  gchar *_peel_return = g_strdup_vprintf (format, args);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static peel::Strv
strdupv (peel::StrvRef str_array) noexcept
{
  gchar **_peel_str_array = const_cast<gchar **> (str_array.data ());
  gchar **_peel_return = g_strdupv (_peel_str_array);
  return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
}

peel_no_warn_unused peel_returns_nonnull
static const char *
strerror (int errnum) noexcept
{
  return g_strerror (errnum);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
strescape (const char *source, const char *exceptions) noexcept
{
  gchar *_peel_return = g_strescape (source, exceptions);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static void
strfreev (peel::Strv str_array) noexcept
{
  gchar **_peel_str_array = reinterpret_cast<gchar **> (std::move (str_array).release_ref ());
  g_strfreev (_peel_str_array);
}

peel_no_warn_unused peel_nonnull_args (1, 2) peel_returns_nonnull
static const char *
strip_context (const char *msgid, const char *msgval) noexcept
{
  return g_strip_context (msgid, msgval);
}

template<typename... Args>
peel_no_warn_unused
static peel::String
strjoin (const char *separator, Args &&...args) noexcept
{
  gchar *_peel_return = g_strjoin (separator, static_cast<const char *> (std::forward<Args> (args))..., nullptr);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static peel::String
strjoinv (const char *separator, peel::StrvRef str_array) noexcept
{
  gchar **_peel_str_array = const_cast<gchar **> (str_array.data ());
  gchar *_peel_return = g_strjoinv (separator, _peel_str_array);
  return peel::String::adopt_string (_peel_return);
}

/* Unsupported for now: strlcat: explicitly skipped */

/* Unsupported for now: strlcpy: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1, 2)
static int
strncasecmp (const char *s1, const char *s2, unsigned n) noexcept
{
  return g_strncasecmp (s1, s2, n);
}

peel_no_warn_unused
static peel::String
strndup (const char *str, size_t n) noexcept
{
  gchar *_peel_return = g_strndup (str, n);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static peel::String
strnfill (size_t length, char fill_char) noexcept
{
  gchar *_peel_return = g_strnfill (length, fill_char);
  return peel::String::adopt_string (_peel_return);
}

/* Unsupported for now: strreverse: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1, 2)
static const char *
strrstr (const char *haystack, const char *needle) noexcept
{
  return g_strrstr (haystack, needle);
}

peel_no_warn_unused peel_nonnull_args (1, 3)
static const char *
strrstr_len (const char *haystack, gssize haystack_len, const char *needle) noexcept
{
  return g_strrstr_len (haystack, haystack_len, needle);
}

peel_no_warn_unused peel_returns_nonnull
static const char *
strsignal (int signum) noexcept
{
  return g_strsignal (signum);
}

peel_no_warn_unused peel_nonnull_args (1, 2)
static peel::Strv
strsplit (const char *string, const char *delimiter, int max_tokens) noexcept
{
  gchar **_peel_return = g_strsplit (string, delimiter, max_tokens);
  peel_assume (_peel_return);
  return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::Strv
strsplit_set (const char *string, peel::ZTArrayRef<const uint8_t> delimiters, int max_tokens) noexcept
{
  const gchar *_peel_delimiters = reinterpret_cast<const gchar *> (delimiters.data ());
  gchar **_peel_return = g_strsplit_set (string, _peel_delimiters, max_tokens);
  peel_assume (_peel_return);
  return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
}

peel_no_warn_unused peel_nonnull_args (1, 3)
static const char *
strstr_len (const char *haystack, gssize haystack_len, const char *needle) noexcept
{
  return g_strstr_len (haystack, haystack_len, needle);
}

/* Unsupported for now: strtod: explicitly skipped */

/* Unsupported for now: strup: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (2)
static bool
strv_contains (peel::StrvRef strv, const char *str) noexcept
{
  const gchar* const *_peel_strv = reinterpret_cast<const gchar* const *> (strv.data ());
  gboolean _peel_return = g_strv_contains (_peel_strv, str);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
strv_equal (peel::StrvRef strv1, peel::StrvRef strv2) noexcept
{
  const gchar* const *_peel_strv1 = reinterpret_cast<const gchar* const *> (strv1.data ());
  const gchar* const *_peel_strv2 = reinterpret_cast<const gchar* const *> (strv2.data ());
  gboolean _peel_return = g_strv_equal (_peel_strv1, _peel_strv2);
  return !!_peel_return;
}

peel_no_warn_unused
static GObject::Type
strv_get_type () noexcept
{
  return g_strv_get_type ();
}

peel_no_warn_unused
static unsigned
strv_length (peel::StrvRef str_array) noexcept
{
  gchar **_peel_str_array = const_cast<gchar **> (str_array.data ());
  return g_strv_length (_peel_str_array);
}

peel_no_warn_unused peel_nonnull_args (1)
static void
test_add_data_func (const char *testpath, const void *test_data, ::GTestDataFunc test_func) noexcept
{
  g_test_add_data_func (testpath, test_data, test_func);
}

peel_no_warn_unused peel_nonnull_args (1)
static void
test_add_data_func_full (const char *testpath, void *test_data, ::GTestDataFunc test_func, ::GDestroyNotify data_free_func) noexcept
{
  g_test_add_data_func_full (testpath, test_data, test_func, data_free_func);
}

peel_no_warn_unused peel_nonnull_args (1)
static void
test_add_func (const char *testpath, ::GTestFunc test_func) noexcept
{
  g_test_add_func (testpath, test_func);
}

peel_no_warn_unused peel_nonnull_args (1)
static void
test_add_vtable (const char *testpath, size_t data_size, const void *test_data, ::GTestFixtureFunc data_setup, ::GTestFixtureFunc data_test, ::GTestFixtureFunc data_teardown) noexcept
{
  g_test_add_vtable (testpath, data_size, test_data, data_setup, data_test, data_teardown);
}

peel_no_warn_unused peel_nonnull_args (1, 2, 4)
static void
test_assert_expected_messages_internal (const char *domain, const char *file, int line, const char *func) noexcept
{
  g_test_assert_expected_messages_internal (domain, file, line, func);
}

peel_no_warn_unused peel_nonnull_args (1)
static void
test_bug (const char *bug_uri_snippet) noexcept
{
  g_test_bug (bug_uri_snippet);
}

peel_no_warn_unused peel_nonnull_args (1)
static void
test_bug_base (const char *uri_pattern) noexcept
{
  g_test_bug_base (uri_pattern);
}

/* Unsupported for now: test_build_filename: varargs */

peel_no_warn_unused peel_nonnull_args (1) peel_returns_nonnull
static TestCase *
test_create_case (const char *test_name, size_t data_size, const void *test_data, ::GTestFixtureFunc data_setup, ::GTestFixtureFunc data_test, ::GTestFixtureFunc data_teardown) noexcept
{
  ::GTestCase *_peel_return = g_test_create_case (test_name, data_size, test_data, data_setup, data_test, data_teardown);
  peel_assume (_peel_return);
  return reinterpret_cast<TestCase *> (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1) peel_returns_nonnull
static TestSuite *
test_create_suite (const char *suite_name) noexcept
{
  ::GTestSuite *_peel_return = g_test_create_suite (suite_name);
  peel_assume (_peel_return);
  return reinterpret_cast<TestSuite *> (_peel_return);
}

peel_no_warn_unused
static void
test_disable_crash_reporting () noexcept
{
  g_test_disable_crash_reporting ();
}

peel_no_warn_unused peel_nonnull_args (3)
static void
test_expect_message (const char *log_domain, LogLevelFlags log_level, const char *pattern) noexcept
{
  ::GLogLevelFlags _peel_log_level = static_cast<::GLogLevelFlags> (log_level);
  g_test_expect_message (log_domain, _peel_log_level, pattern);
}

peel_no_warn_unused
static void
test_fail () noexcept
{
  g_test_fail ();
}

/* Unsupported for now: test_fail_printf: varargs */

peel_no_warn_unused
static bool
test_failed () noexcept
{
  gboolean _peel_return = g_test_failed ();
  return !!_peel_return;
}

peel_no_warn_unused peel_returns_nonnull
static const char *
test_get_dir (TestFileType file_type) noexcept
{
  ::GTestFileType _peel_file_type = static_cast<::GTestFileType> (file_type);
  return g_test_get_dir (_peel_file_type);
}

/* Unsupported for now: test_get_filename: varargs */

peel_no_warn_unused peel_returns_nonnull
static const char *
test_get_path () noexcept
{
  return g_test_get_path ();
}

peel_no_warn_unused peel_returns_nonnull
static TestSuite *
test_get_root () noexcept
{
  ::GTestSuite *_peel_return = g_test_get_root ();
  peel_assume (_peel_return);
  return reinterpret_cast<TestSuite *> (_peel_return);
}

peel_no_warn_unused
static void
test_incomplete (const char *msg) noexcept
{
  g_test_incomplete (msg);
}

/* Unsupported for now: test_incomplete_printf: varargs */

/* Unsupported for now: test_init: varargs */

template<typename TestLogFatalFunc>
peel_no_warn_unused
static void
test_log_set_fatal_handler (TestLogFatalFunc &&log_func) noexcept
{
  gpointer _peel_user_data;
  ::GTestLogFatalFunc _peel_log_func = peel::internals::CallbackHelper<gboolean, const gchar *, ::GLogLevelFlags, const gchar *>::wrap_call_callback (
      static_cast<TestLogFatalFunc &&> (log_func),
      [] (const gchar *log_domain, ::GLogLevelFlags log_level, const gchar *message, gpointer user_data) -> gboolean
      {
        TestLogFatalFunc &_peel_captured_log_func = *reinterpret_cast<typename std::remove_reference<TestLogFatalFunc>::type *> (user_data);
        LogLevelFlags _peel_log_level = static_cast<LogLevelFlags> (log_level);
        bool _peel_return = _peel_captured_log_func (log_domain, _peel_log_level, message);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<TestLogFatalFunc, void, const char *, LogLevelFlags, const char *>::value);
  g_test_log_set_fatal_handler (_peel_log_func, _peel_user_data);
}

peel_no_warn_unused peel_returns_nonnull
static const char *
test_log_type_name (TestLogType log_type) noexcept
{
  ::GTestLogType _peel_log_type = static_cast<::GTestLogType> (log_type);
  return g_test_log_type_name (_peel_log_type);
}

/* Unsupported for now: test_maximized_result: varargs */

/* Unsupported for now: test_message: varargs */

/* Unsupported for now: test_minimized_result: varargs */

peel_no_warn_unused
static void
test_queue_destroy (::GDestroyNotify destroy_func, void *destroy_data) noexcept
{
  g_test_queue_destroy (destroy_func, destroy_data);
}

peel_no_warn_unused
static void
test_queue_free (void *gfree_pointer) noexcept
{
  g_test_queue_free (gfree_pointer);
}

peel_no_warn_unused
static double
test_rand_double () noexcept
{
  return g_test_rand_double ();
}

peel_no_warn_unused
static double
test_rand_double_range (double range_start, double range_end) noexcept
{
  return g_test_rand_double_range (range_start, range_end);
}

peel_no_warn_unused
static int32_t
test_rand_int () noexcept
{
  return g_test_rand_int ();
}

peel_no_warn_unused
static int32_t
test_rand_int_range (int32_t begin, int32_t end) noexcept
{
  return g_test_rand_int_range (begin, end);
}

peel_no_warn_unused
static int
test_run () noexcept
{
  return g_test_run ();
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static int
test_run_suite (TestSuite *suite) noexcept
{
  ::GTestSuite *_peel_suite = reinterpret_cast<::GTestSuite *> (suite);
  return g_test_run_suite (_peel_suite);
}

peel_no_warn_unused
static void
test_set_nonfatal_assertions () noexcept
{
  g_test_set_nonfatal_assertions ();
}

peel_no_warn_unused
static void
test_skip (const char *msg) noexcept
{
  g_test_skip (msg);
}

/* Unsupported for now: test_skip_printf: varargs */

peel_no_warn_unused
static bool
test_subprocess () noexcept
{
  gboolean _peel_return = g_test_subprocess ();
  return !!_peel_return;
}

peel_no_warn_unused peel_nonnull_args (1)
static void
test_summary (const char *summary) noexcept
{
  g_test_summary (summary);
}

peel_no_warn_unused
static double
test_timer_elapsed () noexcept
{
  return g_test_timer_elapsed ();
}

peel_no_warn_unused
static double
test_timer_last () noexcept
{
  return g_test_timer_last ();
}

peel_no_warn_unused
static void
test_timer_start () noexcept
{
  g_test_timer_start ();
}

peel_no_warn_unused peel_nonnull_args (1, 2, 4, 6)
static void
test_trap_assertions (const char *domain, const char *file, int line, const char *func, uint64_t assertion_flags, const char *pattern) noexcept
{
  g_test_trap_assertions (domain, file, line, func, assertion_flags, pattern);
}

peel_no_warn_unused
static bool
test_trap_fork (uint64_t usec_timeout, TestTrapFlags test_trap_flags) noexcept
{
  ::GTestTrapFlags _peel_test_trap_flags = static_cast<::GTestTrapFlags> (test_trap_flags);
  gboolean _peel_return = g_test_trap_fork (usec_timeout, _peel_test_trap_flags);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
test_trap_has_passed () noexcept
{
  gboolean _peel_return = g_test_trap_has_passed ();
  return !!_peel_return;
}

peel_no_warn_unused
static bool
test_trap_has_skipped () noexcept
{
  gboolean _peel_return = g_test_trap_has_skipped ();
  return !!_peel_return;
}

peel_no_warn_unused
static bool
test_trap_reached_timeout () noexcept
{
  gboolean _peel_return = g_test_trap_reached_timeout ();
  return !!_peel_return;
}

peel_no_warn_unused
static void
test_trap_subprocess (const char *test_path, uint64_t usec_timeout, TestSubprocessFlags test_flags) noexcept
{
  ::GTestSubprocessFlags _peel_test_flags = static_cast<::GTestSubprocessFlags> (test_flags);
  g_test_trap_subprocess (test_path, usec_timeout, _peel_test_flags);
}

peel_no_warn_unused
static void
test_trap_subprocess_with_envp (const char *test_path, peel::StrvRef envp, uint64_t usec_timeout, TestSubprocessFlags test_flags) noexcept
{
  const char* const *_peel_envp = reinterpret_cast<const char* const *> (envp.data ());
  ::GTestSubprocessFlags _peel_test_flags = static_cast<::GTestSubprocessFlags> (test_flags);
  g_test_trap_subprocess_with_envp (test_path, _peel_envp, usec_timeout, _peel_test_flags);
}

/* thread_create moved to Thread.create */

/* thread_create_full moved to Thread.create_full */

/* thread_error_quark moved to Thread.error_quark */

/* thread_exit moved to Thread.exit */

/* thread_foreach moved to Thread.foreach */

/* thread_get_initialized moved to Thread.get_initialized */

/* thread_init moved to Thread.init */

/* thread_init_with_errorcheck_mutexes moved to Thread.init_with_errorcheck_mutexes */

/* thread_pool_get_max_idle_time moved to ThreadPool.get_max_idle_time */

/* thread_pool_get_max_unused_threads moved to ThreadPool.get_max_unused_threads */

/* thread_pool_get_num_unused_threads moved to ThreadPool.get_num_unused_threads */

/* thread_pool_set_max_idle_time moved to ThreadPool.set_max_idle_time */

/* thread_pool_set_max_unused_threads moved to ThreadPool.set_max_unused_threads */

/* thread_pool_stop_unused_threads moved to ThreadPool.stop_unused_threads */

/* thread_self moved to Thread.self */

/* thread_yield moved to Thread.yield */

/* time_val_from_iso8601 moved to TimeVal.from_iso8601 */

template<typename SourceFunc>
peel_no_warn_unused
static unsigned
timeout_add (unsigned interval, SourceFunc &&function) noexcept
{
  gpointer _peel_data;
  ::GSourceFunc _peel_function = peel::internals::CallbackHelper<gboolean>::wrap_gsourcefunc_callback (
      static_cast<SourceFunc &&> (function),
      [] (gpointer user_data) -> gboolean
      {
        SourceFunc &_peel_captured_function = *reinterpret_cast<typename std::remove_reference<SourceFunc>::type *> (user_data);
        bool _peel_return = _peel_captured_function ();
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, peel::internals::is_const_invocable<SourceFunc, void>::value);
  return g_timeout_add (interval, _peel_function, _peel_data);
}

template<typename SourceFunc>
peel_no_warn_unused
static unsigned
timeout_add_full (int priority, unsigned interval, SourceFunc &&function) noexcept
{
  gpointer _peel_data;
  ::GDestroyNotify _peel_notify;
  ::GSourceFunc _peel_function = peel::internals::CallbackHelper<gboolean>::wrap_notified_callback (
      static_cast<SourceFunc &&> (function),
      [] (gpointer user_data) -> gboolean
      {
        SourceFunc &_peel_captured_function = *reinterpret_cast<typename std::remove_reference<SourceFunc>::type *> (user_data);
        bool _peel_return = _peel_captured_function ();
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, &_peel_notify, peel::internals::is_const_invocable<SourceFunc, void>::value);
  return g_timeout_add_full (priority, interval, _peel_function, _peel_data, _peel_notify);
}

template<typename SourceOnceFunc>
peel_no_warn_unused
static unsigned
timeout_add_once (unsigned interval, SourceOnceFunc &&function) noexcept
{
  gpointer _peel_data;
  ::GSourceOnceFunc _peel_function = peel::internals::CallbackHelper<void>::wrap_async_callback (
      static_cast<SourceOnceFunc &&> (function),
      [] (gpointer user_data) -> void
      {
        SourceOnceFunc &_peel_captured_function = *reinterpret_cast<typename std::remove_reference<SourceOnceFunc>::type *> (user_data);
        static_cast<SourceOnceFunc &&> (_peel_captured_function) ();
      },
      &_peel_data);
  return g_timeout_add_once (interval, _peel_function, _peel_data);
}

template<typename SourceFunc>
peel_no_warn_unused
static unsigned
timeout_add_seconds (unsigned interval, SourceFunc &&function) noexcept
{
  gpointer _peel_data;
  ::GSourceFunc _peel_function = peel::internals::CallbackHelper<gboolean>::wrap_gsourcefunc_callback (
      static_cast<SourceFunc &&> (function),
      [] (gpointer user_data) -> gboolean
      {
        SourceFunc &_peel_captured_function = *reinterpret_cast<typename std::remove_reference<SourceFunc>::type *> (user_data);
        bool _peel_return = _peel_captured_function ();
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, peel::internals::is_const_invocable<SourceFunc, void>::value);
  return g_timeout_add_seconds (interval, _peel_function, _peel_data);
}

template<typename SourceFunc>
peel_no_warn_unused
static unsigned
timeout_add_seconds_full (int priority, unsigned interval, SourceFunc &&function) noexcept
{
  gpointer _peel_data;
  ::GDestroyNotify _peel_notify;
  ::GSourceFunc _peel_function = peel::internals::CallbackHelper<gboolean>::wrap_notified_callback (
      static_cast<SourceFunc &&> (function),
      [] (gpointer user_data) -> gboolean
      {
        SourceFunc &_peel_captured_function = *reinterpret_cast<typename std::remove_reference<SourceFunc>::type *> (user_data);
        bool _peel_return = _peel_captured_function ();
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, &_peel_notify, peel::internals::is_const_invocable<SourceFunc, void>::value);
  return g_timeout_add_seconds_full (priority, interval, _peel_function, _peel_data, _peel_notify);
}

template<typename SourceOnceFunc>
peel_no_warn_unused
static unsigned
timeout_add_seconds_once (unsigned interval, SourceOnceFunc &&function) noexcept
{
  gpointer _peel_data;
  ::GSourceOnceFunc _peel_function = peel::internals::CallbackHelper<void>::wrap_async_callback (
      static_cast<SourceOnceFunc &&> (function),
      [] (gpointer user_data) -> void
      {
        SourceOnceFunc &_peel_captured_function = *reinterpret_cast<typename std::remove_reference<SourceOnceFunc>::type *> (user_data);
        static_cast<SourceOnceFunc &&> (_peel_captured_function) ();
      },
      &_peel_data);
  return g_timeout_add_seconds_once (interval, _peel_function, _peel_data);
}

peel_no_warn_unused
static peel::RefPtr<Source>
timeout_source_new (unsigned interval) noexcept
{
  ::GSource *_peel_return = g_timeout_source_new (interval);
  peel_assume (_peel_return);
  return peel::RefPtr<Source>::adopt_ref (reinterpret_cast<Source *> (_peel_return));
}

peel_no_warn_unused
static peel::RefPtr<Source>
timeout_source_new_seconds (unsigned interval) noexcept
{
  ::GSource *_peel_return = g_timeout_source_new_seconds (interval);
  peel_assume (_peel_return);
  return peel::RefPtr<Source>::adopt_ref (reinterpret_cast<Source *> (_peel_return));
}

/* trash_stack_height moved to TrashStack.height */

/* trash_stack_peek moved to TrashStack.peek */

/* trash_stack_pop moved to TrashStack.pop */

/* trash_stack_push moved to TrashStack.push */

peel_no_warn_unused
static void *
try_malloc (size_t n_bytes) noexcept
{
  return g_try_malloc (n_bytes);
}

peel_no_warn_unused
static void *
try_malloc0 (size_t n_bytes) noexcept
{
  return g_try_malloc0 (n_bytes);
}

peel_no_warn_unused
static void *
try_malloc0_n (size_t n_blocks, size_t n_block_bytes) noexcept
{
  return g_try_malloc0_n (n_blocks, n_block_bytes);
}

peel_no_warn_unused
static void *
try_malloc_n (size_t n_blocks, size_t n_block_bytes) noexcept
{
  return g_try_malloc_n (n_blocks, n_block_bytes);
}

peel_no_warn_unused
static void *
try_realloc (void *mem, size_t n_bytes) noexcept
{
  return g_try_realloc (mem, n_bytes);
}

peel_no_warn_unused
static void *
try_realloc_n (void *mem, size_t n_blocks, size_t n_block_bytes) noexcept
{
  return g_try_realloc_n (mem, n_blocks, n_block_bytes);
}

/* Unsupported for now: ucs4_to_utf16: explicitly skipped */

/* Unsupported for now: ucs4_to_utf8: explicitly skipped */

peel_no_warn_unused
static UnicodeBreakType
unichar_break_type (gunichar c) noexcept
{
  ::GUnicodeBreakType _peel_return = g_unichar_break_type (c);
  return static_cast<UnicodeBreakType> (_peel_return);
}

peel_no_warn_unused
static int
unichar_combining_class (gunichar uc) noexcept
{
  return g_unichar_combining_class (uc);
}

peel_no_warn_unused peel_arg_out (3) peel_nonnull_args (3)
static bool
unichar_compose (gunichar a, gunichar b, gunichar *ch) noexcept
{
  gboolean _peel_return = g_unichar_compose (a, b, ch);
  return !!_peel_return;
}

peel_no_warn_unused peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
static bool
unichar_decompose (gunichar ch, gunichar *a, gunichar *b) noexcept
{
  gboolean _peel_return = g_unichar_decompose (ch, a, b);
  return !!_peel_return;
}

peel_no_warn_unused
static int
unichar_digit_value (gunichar c) noexcept
{
  return g_unichar_digit_value (c);
}

peel_no_warn_unused peel_arg_out (3)
static size_t
unichar_fully_decompose (gunichar ch, bool compat, gunichar *result, size_t result_len) noexcept
{
  gboolean _peel_compat = static_cast<gboolean> (compat);
  return g_unichar_fully_decompose (ch, _peel_compat, result, result_len);
}

peel_no_warn_unused peel_arg_out (2) peel_nonnull_args (2)
static bool
unichar_get_mirror_char (gunichar ch, gunichar *mirrored_ch) noexcept
{
  gboolean _peel_return = g_unichar_get_mirror_char (ch, mirrored_ch);
  return !!_peel_return;
}

peel_no_warn_unused
static UnicodeScript
unichar_get_script (gunichar ch) noexcept
{
  ::GUnicodeScript _peel_return = g_unichar_get_script (ch);
  return static_cast<UnicodeScript> (_peel_return);
}

peel_no_warn_unused
static bool
unichar_isalnum (gunichar c) noexcept
{
  gboolean _peel_return = g_unichar_isalnum (c);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
unichar_isalpha (gunichar c) noexcept
{
  gboolean _peel_return = g_unichar_isalpha (c);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
unichar_iscntrl (gunichar c) noexcept
{
  gboolean _peel_return = g_unichar_iscntrl (c);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
unichar_isdefined (gunichar c) noexcept
{
  gboolean _peel_return = g_unichar_isdefined (c);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
unichar_isdigit (gunichar c) noexcept
{
  gboolean _peel_return = g_unichar_isdigit (c);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
unichar_isgraph (gunichar c) noexcept
{
  gboolean _peel_return = g_unichar_isgraph (c);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
unichar_islower (gunichar c) noexcept
{
  gboolean _peel_return = g_unichar_islower (c);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
unichar_ismark (gunichar c) noexcept
{
  gboolean _peel_return = g_unichar_ismark (c);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
unichar_isprint (gunichar c) noexcept
{
  gboolean _peel_return = g_unichar_isprint (c);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
unichar_ispunct (gunichar c) noexcept
{
  gboolean _peel_return = g_unichar_ispunct (c);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
unichar_isspace (gunichar c) noexcept
{
  gboolean _peel_return = g_unichar_isspace (c);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
unichar_istitle (gunichar c) noexcept
{
  gboolean _peel_return = g_unichar_istitle (c);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
unichar_isupper (gunichar c) noexcept
{
  gboolean _peel_return = g_unichar_isupper (c);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
unichar_iswide (gunichar c) noexcept
{
  gboolean _peel_return = g_unichar_iswide (c);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
unichar_iswide_cjk (gunichar c) noexcept
{
  gboolean _peel_return = g_unichar_iswide_cjk (c);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
unichar_isxdigit (gunichar c) noexcept
{
  gboolean _peel_return = g_unichar_isxdigit (c);
  return !!_peel_return;
}

peel_no_warn_unused
static bool
unichar_iszerowidth (gunichar c) noexcept
{
  gboolean _peel_return = g_unichar_iszerowidth (c);
  return !!_peel_return;
}

/* Unsupported for now: unichar_to_utf8: explicitly skipped */

peel_no_warn_unused
static gunichar
unichar_tolower (gunichar c) noexcept
{
  return g_unichar_tolower (c);
}

peel_no_warn_unused
static gunichar
unichar_totitle (gunichar c) noexcept
{
  return g_unichar_totitle (c);
}

peel_no_warn_unused
static gunichar
unichar_toupper (gunichar c) noexcept
{
  return g_unichar_toupper (c);
}

peel_no_warn_unused
static UnicodeType
unichar_type (gunichar c) noexcept
{
  ::GUnicodeType _peel_return = g_unichar_type (c);
  return static_cast<UnicodeType> (_peel_return);
}

peel_no_warn_unused
static bool
unichar_validate (gunichar ch) noexcept
{
  gboolean _peel_return = g_unichar_validate (ch);
  return !!_peel_return;
}

peel_no_warn_unused
static int
unichar_xdigit_value (gunichar c) noexcept
{
  return g_unichar_xdigit_value (c);
}

/* Unsupported for now: unicode_canonical_decomposition: explicitly skipped */

/* Unsupported for now: unicode_canonical_ordering: explicitly skipped */

/* unicode_script_from_iso15924 moved to UnicodeScript.from_iso15924 */

/* unicode_script_to_iso15924 moved to UnicodeScript.to_iso15924 */

peel_no_warn_unused peel_nonnull_args (1)
static int
unlink (const char *filename) noexcept
{
  return g_unlink (filename);
}

peel_no_warn_unused peel_nonnull_args (1)
static void
unsetenv (const char *variable) noexcept
{
  g_unsetenv (variable);
}

/* uri_build moved to Uri.build */

/* uri_build_with_user moved to Uri.build_with_user */

/* uri_error_quark moved to Uri.error_quark */

/* uri_escape_bytes moved to Uri.escape_bytes */

/* uri_escape_string moved to Uri.escape_string */

/* uri_is_valid moved to Uri.is_valid */

/* uri_join moved to Uri.join */

/* uri_join_with_user moved to Uri.join_with_user */

/* uri_list_extract_uris moved to Uri.list_extract_uris */

/* uri_parse moved to Uri.parse */

/* uri_parse_params moved to Uri.parse_params */

/* uri_parse_scheme moved to Uri.parse_scheme */

/* uri_peek_scheme moved to Uri.peek_scheme */

/* uri_resolve_relative moved to Uri.resolve_relative */

/* uri_split moved to Uri.split */

/* uri_split_network moved to Uri.split_network */

/* uri_split_with_user moved to Uri.split_with_user */

/* uri_unescape_bytes moved to Uri.unescape_bytes */

/* uri_unescape_segment moved to Uri.unescape_segment */

/* uri_unescape_string moved to Uri.unescape_string */

peel_no_warn_unused
static void
usleep (unsigned long microseconds) noexcept
{
  g_usleep (microseconds);
}

/* Unsupported for now: utf16_to_ucs4: explicitly skipped */

/* Unsupported for now: utf16_to_utf8: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
utf8_casefold (const char *str, gssize len) noexcept
{
  gchar *_peel_return = g_utf8_casefold (str, len);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1, 2)
static int
utf8_collate (const char *str1, const char *str2) noexcept
{
  return g_utf8_collate (str1, str2);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
utf8_collate_key (const char *str, gssize len) noexcept
{
  gchar *_peel_return = g_utf8_collate_key (str, len);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
utf8_collate_key_for_filename (const char *str, gssize len) noexcept
{
  gchar *_peel_return = g_utf8_collate_key_for_filename (str, len);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static const char *
utf8_find_next_char (const char *p, const char *end) noexcept
{
  return g_utf8_find_next_char (p, end);
}

peel_no_warn_unused peel_nonnull_args (1, 2)
static const char *
utf8_find_prev_char (const char *str, const char *p) noexcept
{
  return g_utf8_find_prev_char (str, p);
}

peel_no_warn_unused peel_nonnull_args (1)
static gunichar
utf8_get_char (const char *p) noexcept
{
  return g_utf8_get_char (p);
}

peel_no_warn_unused peel_nonnull_args (1)
static gunichar
utf8_get_char_validated (const char *p, gssize max_len) noexcept
{
  return g_utf8_get_char_validated (p, max_len);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
utf8_make_valid (const char *str, gssize len) noexcept
{
  gchar *_peel_return = g_utf8_make_valid (str, len);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
utf8_normalize (const char *str, gssize len, NormalizeMode mode) noexcept
{
  ::GNormalizeMode _peel_mode = static_cast<::GNormalizeMode> (mode);
  gchar *_peel_return = g_utf8_normalize (str, len, _peel_mode);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1) peel_returns_nonnull
static const char *
utf8_offset_to_pointer (const char *str, long offset) noexcept
{
  return g_utf8_offset_to_pointer (str, offset);
}

peel_no_warn_unused peel_nonnull_args (1, 2)
static long
utf8_pointer_to_offset (const char *str, const char *pos) noexcept
{
  return g_utf8_pointer_to_offset (str, pos);
}

peel_no_warn_unused peel_nonnull_args (1) peel_returns_nonnull
static const char *
utf8_prev_char (const char *p) noexcept
{
  return g_utf8_prev_char (p);
}

peel_no_warn_unused peel_nonnull_args (1)
static const char *
utf8_strchr (const char *p, gssize len, gunichar c) noexcept
{
  return g_utf8_strchr (p, len, c);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
utf8_strdown (const char *str, gssize len) noexcept
{
  gchar *_peel_return = g_utf8_strdown (str, len);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static long
utf8_strlen (const char *p, gssize max) noexcept
{
  return g_utf8_strlen (p, max);
}

/* Unsupported for now: utf8_strncpy: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1)
static const char *
utf8_strrchr (const char *p, gssize len, gunichar c) noexcept
{
  return g_utf8_strrchr (p, len, c);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
utf8_strreverse (const char *str, gssize len) noexcept
{
  gchar *_peel_return = g_utf8_strreverse (str, len);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
utf8_strup (const char *str, gssize len) noexcept
{
  gchar *_peel_return = g_utf8_strup (str, len);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
utf8_substring (const char *str, long start_pos, long end_pos) noexcept
{
  gchar *_peel_return = g_utf8_substring (str, start_pos, end_pos);
  return peel::String::adopt_string (_peel_return);
}

/* Unsupported for now: utf8_to_ucs4: explicitly skipped */

/* Unsupported for now: utf8_to_ucs4_fast: explicitly skipped */

/* Unsupported for now: utf8_to_utf16: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1)
static peel::String
utf8_truncate_middle (const char *string, size_t truncate_length) noexcept
{
  gchar *_peel_return = g_utf8_truncate_middle (string, truncate_length);
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static bool
utf8_validate (peel::ArrayRef<const uint8_t> str, peel::ZTArrayRef<const uint8_t> *end) noexcept
{
  gssize _peel_max_len;
  const gchar *_peel_str = (_peel_max_len = str.size (), reinterpret_cast<const gchar *> (str.data ()));
  const gchar *_peel_end;
  gboolean _peel_return = g_utf8_validate (_peel_str, _peel_max_len, end ? &_peel_end : nullptr);
  if (end)
    *end = peel::ZTArrayRef<const uint8_t>::adopt (reinterpret_cast<const uint8_t *> (_peel_end));
  return !!_peel_return;
}

peel_no_warn_unused
static bool
utf8_validate_len (peel::ArrayRef<const uint8_t> str, peel::ZTArrayRef<const uint8_t> *end) noexcept
{
  gsize _peel_max_len;
  const gchar *_peel_str = (_peel_max_len = str.size (), reinterpret_cast<const gchar *> (str.data ()));
  const gchar *_peel_end;
  gboolean _peel_return = g_utf8_validate_len (_peel_str, _peel_max_len, end ? &_peel_end : nullptr);
  if (end)
    *end = peel::ZTArrayRef<const uint8_t>::adopt (reinterpret_cast<const uint8_t *> (_peel_end));
  return !!_peel_return;
}

/* Unsupported for now: utime: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (1)
static bool
uuid_string_is_valid (const char *str) noexcept
{
  gboolean _peel_return = g_uuid_string_is_valid (str);
  return !!_peel_return;
}

peel_no_warn_unused
static peel::String
uuid_string_random () noexcept
{
  gchar *_peel_return = g_uuid_string_random ();
  return peel::String::adopt_string (_peel_return);
}

peel_no_warn_unused
static GObject::Type
variant_get_gtype () noexcept
{
  return g_variant_get_gtype ();
}

/* variant_is_object_path moved to Variant.is_object_path */

/* variant_is_signature moved to Variant.is_signature */

/* variant_parse moved to Variant.parse */

/* variant_parse_error_print_context moved to Variant.parse_error_print_context */

/* variant_parse_error_quark moved to Variant.parse_error_quark */

/* variant_parser_get_error_quark moved to Variant.parser_get_error_quark */

/* variant_type_checked_ moved to VariantType.checked_ */

/* variant_type_string_get_depth_ moved to VariantType.string_get_depth_ */

/* variant_type_string_is_valid moved to VariantType.string_is_valid */

/* variant_type_string_scan moved to VariantType.string_scan */

/* Unsupported for now: vasprintf: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (2)
static int
vfprintf (FILE *file, const char *format, va_list args) noexcept
{
  return g_vfprintf (file, format, args);
}

peel_no_warn_unused peel_nonnull_args (1)
static int
vprintf (const char *format, va_list args) noexcept
{
  return g_vprintf (format, args);
}

/* Unsupported for now: vsnprintf: explicitly skipped */

/* Unsupported for now: vsprintf: explicitly skipped */

peel_no_warn_unused peel_nonnull_args (2, 4)
static void
warn_message (const char *domain, const char *file, int line, const char *func, const char *warnexpr) noexcept
{
  g_warn_message (domain, file, line, func, warnexpr);
}



} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/GLib/ChecksumType.h>
#include <peel/GLib/Data.h>
#include <peel/GLib/DebugKey.h>
#include <peel/GLib/Error.h>
#include <peel/GLib/FileError.h>
#include <peel/GLib/FileSetContentsFlags.h>
#include <peel/GLib/FileTest.h>
#include <peel/GLib/FormatSizeFlags.h>
#include <peel/GLib/IConv.h>
#include <peel/GLib/IOChannel.h>
#include <peel/GLib/IOCondition.h>
#include <peel/GLib/LogField.h>
#include <peel/GLib/LogLevelFlags.h>
#include <peel/GLib/LogWriterOutput.h>
#include <peel/GLib/MarkupCollectType.h>
#include <peel/GLib/MemVTable.h>
#include <peel/GLib/NormalizeMode.h>
#include <peel/GLib/PatternSpec.h>
#include <peel/GLib/PollFD.h>
#include <peel/GLib/SliceConfig.h>
#include <peel/GLib/Source.h>
#include <peel/GLib/SpawnFlags.h>
#include <peel/GLib/StatBuf.h>
#include <peel/GLib/TestCase.h>
#include <peel/GLib/TestFileType.h>
#include <peel/GLib/TestLogType.h>
#include <peel/GLib/TestSubprocessFlags.h>
#include <peel/GLib/TestSuite.h>
#include <peel/GLib/TestTrapFlags.h>
#include <peel/GLib/TimeVal.h>
#include <peel/GLib/UnicodeBreakType.h>
#include <peel/GLib/UnicodeScript.h>
#include <peel/GLib/UnicodeType.h>
#include <peel/GLib/UserDirectory.h>
#include <peel/GLib/Variant.h>
