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
namespace GLib
{
struct Error;
class /* record */ Variant;
} /* namespace GLib */

namespace Gio
{
enum class DBusCapabilityFlags : std::underlying_type<::GDBusCapabilityFlags>::type;
class DBusMessage;
class UnixFDList;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::DBusMessage> ()
{
  return g_dbus_message_get_type ();
}


namespace Gio
{
class DBusMessage : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DBusMessage () = delete;
  DBusMessage (const DBusMessage &) = delete;
  DBusMessage (DBusMessage &&) = delete;
  DBusMessage &
  operator = (const DBusMessage &) = delete;
  DBusMessage &
  operator = (DBusMessage &&) = delete;
  ~DBusMessage () = delete;
public:
  enum class ByteOrder : std::underlying_type<::GDBusMessageByteOrder>::type;
  enum class Flags : std::underlying_type<::GDBusMessageFlags>::type;
  enum class HeaderField : std::underlying_type<::GDBusMessageHeaderField>::type;
  enum class Type : std::underlying_type<::GDBusMessageType>::type;

  static peel::RefPtr<DBusMessage>
  create () noexcept
  {
    ::GDBusMessage *_peel_return = g_dbus_message_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<DBusMessage>::adopt_ref (reinterpret_cast<DBusMessage *> (_peel_return));
  }

  static peel::RefPtr<DBusMessage>
  create_from_blob (peel::ArrayRef<uint8_t> blob, DBusCapabilityFlags capabilities, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_blob_len;
    guchar *_peel_blob = (_peel_blob_len = blob.size (), reinterpret_cast<guchar *> (blob.data ()));
    ::GDBusCapabilityFlags _peel_capabilities = static_cast<::GDBusCapabilityFlags> (capabilities);
    ::GError *_peel_error = nullptr;
    ::GDBusMessage *_peel_return = g_dbus_message_new_from_blob (_peel_blob, _peel_blob_len, _peel_capabilities, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusMessage>::adopt_ref (reinterpret_cast<DBusMessage *> (_peel_return));
  }

  peel_nonnull_args (2, 4)
  static peel::RefPtr<DBusMessage>
  create_method_call (const char *name, const char *path, const char *interface_, const char *method) noexcept
  {
    ::GDBusMessage *_peel_return = g_dbus_message_new_method_call (name, path, interface_, method);
    peel_assume (_peel_return);
    return peel::RefPtr<DBusMessage>::adopt_ref (reinterpret_cast<DBusMessage *> (_peel_return));
  }

  peel_nonnull_args (1, 2, 3)
  static peel::RefPtr<DBusMessage>
  create_signal (const char *path, const char *interface_, const char *signal) noexcept
  {
    ::GDBusMessage *_peel_return = g_dbus_message_new_signal (path, interface_, signal);
    peel_assume (_peel_return);
    return peel::RefPtr<DBusMessage>::adopt_ref (reinterpret_cast<DBusMessage *> (_peel_return));
  }

  static gssize
  bytes_needed (peel::ArrayRef<uint8_t> blob, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_blob_len;
    guchar *_peel_blob = (_peel_blob_len = blob.size (), reinterpret_cast<guchar *> (blob.data ()));
    ::GError *_peel_error = nullptr;
    gssize _peel_return = g_dbus_message_bytes_needed (_peel_blob, _peel_blob_len, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel::RefPtr<DBusMessage>
  copy (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GError *_peel_error = nullptr;
    ::GDBusMessage *_peel_return = g_dbus_message_copy (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<DBusMessage>::adopt_ref (reinterpret_cast<DBusMessage *> (_peel_return));
  }

  const char *
  get_arg0 () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    return g_dbus_message_get_arg0 (_peel_this);
  }

  const char *
  get_arg0_path () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    return g_dbus_message_get_arg0_path (_peel_this);
  }

  GLib::Variant *
  get_body () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GVariant *_peel_return = g_dbus_message_get_body (_peel_this);
    return reinterpret_cast<GLib::Variant *> (_peel_return);
  }

  DBusMessage::ByteOrder
  get_byte_order () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GDBusMessageByteOrder _peel_return = g_dbus_message_get_byte_order (_peel_this);
    return static_cast<DBusMessage::ByteOrder> (_peel_return);
  }

  const char *
  get_destination () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    return g_dbus_message_get_destination (_peel_this);
  }

  const char *
  get_error_name () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    return g_dbus_message_get_error_name (_peel_this);
  }

  DBusMessage::Flags
  get_flags () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GDBusMessageFlags _peel_return = g_dbus_message_get_flags (_peel_this);
    return static_cast<DBusMessage::Flags> (_peel_return);
  }

  GLib::Variant *
  get_header (DBusMessage::HeaderField header_field) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GDBusMessageHeaderField _peel_header_field = static_cast<::GDBusMessageHeaderField> (header_field);
    ::GVariant *_peel_return = g_dbus_message_get_header (_peel_this, _peel_header_field);
    return reinterpret_cast<GLib::Variant *> (_peel_return);
  }

  peel::ZTArrayRef<uint8_t>
  get_header_fields () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    guchar *_peel_return = g_dbus_message_get_header_fields (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTArrayRef<uint8_t>::adopt (reinterpret_cast<uint8_t *> (_peel_return));
  }

  const char *
  get_interface () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    return g_dbus_message_get_interface (_peel_this);
  }

  bool
  get_locked () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    gboolean _peel_return = g_dbus_message_get_locked (_peel_this);
    return !!_peel_return;
  }

  const char *
  get_member () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    return g_dbus_message_get_member (_peel_this);
  }

  DBusMessage::Type
  get_message_type () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GDBusMessageType _peel_return = g_dbus_message_get_message_type (_peel_this);
    return static_cast<DBusMessage::Type> (_peel_return);
  }

  uint32_t
  get_num_unix_fds () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    return g_dbus_message_get_num_unix_fds (_peel_this);
  }

  const char *
  get_path () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    return g_dbus_message_get_path (_peel_this);
  }

  uint32_t
  get_reply_serial () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    return g_dbus_message_get_reply_serial (_peel_this);
  }

  const char *
  get_sender () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    return g_dbus_message_get_sender (_peel_this);
  }

  uint32_t
  get_serial () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    return g_dbus_message_get_serial (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_signature () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    return g_dbus_message_get_signature (_peel_this);
  }

#ifdef G_OS_UNIX
  UnixFDList *
  get_unix_fd_list () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GUnixFDList *_peel_return = g_dbus_message_get_unix_fd_list (_peel_this);
    return reinterpret_cast<UnixFDList *> (_peel_return);
  }
#endif /* G_OS_UNIX */

  void
  lock () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    g_dbus_message_lock (_peel_this);
  }

  template<typename... Args>
  peel_nonnull_args (2, 3)
  peel::RefPtr<DBusMessage>
  new_method_error (const char *error_name, const char *error_message_format, Args ...args) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GDBusMessage *_peel_return = g_dbus_message_new_method_error (_peel_this, error_name, error_message_format, args...);
    peel_assume (_peel_return);
    return peel::RefPtr<DBusMessage>::adopt_ref (reinterpret_cast<DBusMessage *> (_peel_return));
  }

  peel_nonnull_args (2, 3)
  peel::RefPtr<DBusMessage>
  new_method_error_literal (const char *error_name, const char *error_message) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GDBusMessage *_peel_return = g_dbus_message_new_method_error_literal (_peel_this, error_name, error_message);
    peel_assume (_peel_return);
    return peel::RefPtr<DBusMessage>::adopt_ref (reinterpret_cast<DBusMessage *> (_peel_return));
  }

  peel_nonnull_args (2, 3)
  peel::RefPtr<DBusMessage>
  new_method_error_valist (const char *error_name, const char *error_message_format, va_list var_args) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GDBusMessage *_peel_return = g_dbus_message_new_method_error_valist (_peel_this, error_name, error_message_format, var_args);
    peel_assume (_peel_return);
    return peel::RefPtr<DBusMessage>::adopt_ref (reinterpret_cast<DBusMessage *> (_peel_return));
  }

  peel::RefPtr<DBusMessage>
  new_method_reply () noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GDBusMessage *_peel_return = g_dbus_message_new_method_reply (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<DBusMessage>::adopt_ref (reinterpret_cast<DBusMessage *> (_peel_return));
  }

  peel::String
  print (unsigned indent) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    gchar *_peel_return = g_dbus_message_print (_peel_this, indent);
    return peel::String::adopt_string (_peel_return);
  }

  void
  set_body (peel::FloatPtr<GLib::Variant> body) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GVariant *_peel_body = reinterpret_cast<::GVariant *> (std::move (body).release_floating_ptr ());
    g_dbus_message_set_body (_peel_this, _peel_body);
  }

  void
  set_byte_order (DBusMessage::ByteOrder byte_order) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GDBusMessageByteOrder _peel_byte_order = static_cast<::GDBusMessageByteOrder> (byte_order);
    g_dbus_message_set_byte_order (_peel_this, _peel_byte_order);
  }

  void
  set_destination (const char *value) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    g_dbus_message_set_destination (_peel_this, value);
  }

  peel_nonnull_args (2)
  void
  set_error_name (const char *value) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    g_dbus_message_set_error_name (_peel_this, value);
  }

  void
  set_flags (DBusMessage::Flags flags) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GDBusMessageFlags _peel_flags = static_cast<::GDBusMessageFlags> (flags);
    g_dbus_message_set_flags (_peel_this, _peel_flags);
  }

  void
  set_header (DBusMessage::HeaderField header_field, peel::FloatPtr<GLib::Variant> value) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GDBusMessageHeaderField _peel_header_field = static_cast<::GDBusMessageHeaderField> (header_field);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (std::move (value).release_floating_ptr ());
    g_dbus_message_set_header (_peel_this, _peel_header_field, _peel_value);
  }

  void
  set_interface (const char *value) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    g_dbus_message_set_interface (_peel_this, value);
  }

  void
  set_member (const char *value) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    g_dbus_message_set_member (_peel_this, value);
  }

  void
  set_message_type (DBusMessage::Type type) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GDBusMessageType _peel_type = static_cast<::GDBusMessageType> (type);
    g_dbus_message_set_message_type (_peel_this, _peel_type);
  }

  void
  set_num_unix_fds (uint32_t value) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    g_dbus_message_set_num_unix_fds (_peel_this, value);
  }

  void
  set_path (const char *value) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    g_dbus_message_set_path (_peel_this, value);
  }

  void
  set_reply_serial (uint32_t value) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    g_dbus_message_set_reply_serial (_peel_this, value);
  }

  void
  set_sender (const char *value) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    g_dbus_message_set_sender (_peel_this, value);
  }

  void
  set_serial (uint32_t serial) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    g_dbus_message_set_serial (_peel_this, serial);
  }

  void
  set_signature (const char *value) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    g_dbus_message_set_signature (_peel_this, value);
  }

#ifdef G_OS_UNIX
  void
  set_unix_fd_list (UnixFDList *fd_list) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GUnixFDList *_peel_fd_list = reinterpret_cast<::GUnixFDList *> (fd_list);
    g_dbus_message_set_unix_fd_list (_peel_this, _peel_fd_list);
  }
#endif /* G_OS_UNIX */

  peel::UniquePtr<uint8_t[]>
  to_blob (DBusCapabilityFlags capabilities, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_out_size;
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GDBusCapabilityFlags _peel_capabilities = static_cast<::GDBusCapabilityFlags> (capabilities);
    ::GError *_peel_error = nullptr;
    guchar *_peel_return = g_dbus_message_to_blob (_peel_this, &_peel_out_size, _peel_capabilities, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::UniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_return), _peel_out_size);
  }

  bool
  to_gerror (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GDBusMessage *_peel_this = reinterpret_cast<::GDBusMessage *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_dbus_message_to_gerror (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  static peel::Property<bool>
  prop_locked ()
  {
    return peel::Property<bool> { "locked" };
  }
}; /* class DBusMessage */

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GLib/Variant.h>
