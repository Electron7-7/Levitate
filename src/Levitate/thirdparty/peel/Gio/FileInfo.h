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
#include <peel/Gio/File.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ DateTime;
struct TimeVal;
} /* namespace GLib */

namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class /* record */ FileAttributeMatcher;
enum class FileAttributeStatus : std::underlying_type<::GFileAttributeStatus>::type;
class FileInfo;
enum class FileType : std::underlying_type<::GFileType>::type;
class /* interface */ Icon;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::FileInfo> ()
{
  return g_file_info_get_type ();
}


namespace Gio
{
class FileInfo : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FileInfo () = delete;
  FileInfo (const FileInfo &) = delete;
  FileInfo (FileInfo &&) = delete;
  FileInfo &
  operator = (const FileInfo &) = delete;
  FileInfo &
  operator = (FileInfo &&) = delete;
  ~FileInfo () = delete;
public:

  static peel::RefPtr<FileInfo>
  create () noexcept
  {
    ::GFileInfo *_peel_return = g_file_info_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  void
  clear_status () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    g_file_info_clear_status (_peel_this);
  }

  peel_nonnull_args (2)
  void
  copy_into (FileInfo *dest_info) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GFileInfo *_peel_dest_info = reinterpret_cast<::GFileInfo *> (dest_info);
    g_file_info_copy_into (_peel_this, _peel_dest_info);
  }

  peel::RefPtr<FileInfo>
  dup () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GFileInfo *_peel_return = g_file_info_dup (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  peel::RefPtr<GLib::DateTime>
  get_access_date_time () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GDateTime *_peel_return = g_file_info_get_access_date_time (_peel_this);
    return peel::RefPtr<GLib::DateTime>::adopt_ref (reinterpret_cast<GLib::DateTime *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::String
  get_attribute_as_string (const char *attribute) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    char *_peel_return = g_file_info_get_attribute_as_string (_peel_this, attribute);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  get_attribute_boolean (const char *attribute) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    gboolean _peel_return = g_file_info_get_attribute_boolean (_peel_this, attribute);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  const char *
  get_attribute_byte_string (const char *attribute) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    return g_file_info_get_attribute_byte_string (_peel_this, attribute);
  }

  peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2)
  bool
  get_attribute_data (const char *attribute, File::AttributeType *type, void **value_pp, FileAttributeStatus *status) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GFileAttributeType *_peel_type = reinterpret_cast<::GFileAttributeType *> (type);
    gpointer *_peel_value_pp = reinterpret_cast<gpointer *> (value_pp);
    ::GFileAttributeStatus *_peel_status = reinterpret_cast<::GFileAttributeStatus *> (status);
    gboolean _peel_return = g_file_info_get_attribute_data (_peel_this, attribute, _peel_type, _peel_value_pp, _peel_status);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  const char *
  get_attribute_file_path (const char *attribute) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    return g_file_info_get_attribute_file_path (_peel_this, attribute);
  }

  peel_nonnull_args (2)
  int32_t
  get_attribute_int32 (const char *attribute) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    return g_file_info_get_attribute_int32 (_peel_this, attribute);
  }

  peel_nonnull_args (2)
  int64_t
  get_attribute_int64 (const char *attribute) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    return g_file_info_get_attribute_int64 (_peel_this, attribute);
  }

  peel_nonnull_args (2)
  GObject::Object *
  get_attribute_object (const char *attribute) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GObject *_peel_return = g_file_info_get_attribute_object (_peel_this, attribute);
    return reinterpret_cast<GObject::Object *> (_peel_return);
  }

  peel_nonnull_args (2)
  FileAttributeStatus
  get_attribute_status (const char *attribute) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GFileAttributeStatus _peel_return = g_file_info_get_attribute_status (_peel_this, attribute);
    return static_cast<FileAttributeStatus> (_peel_return);
  }

  peel_nonnull_args (2)
  const char *
  get_attribute_string (const char *attribute) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    return g_file_info_get_attribute_string (_peel_this, attribute);
  }

  peel_nonnull_args (2)
  peel::StrvRef
  get_attribute_stringv (const char *attribute) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    char **_peel_return = g_file_info_get_attribute_stringv (_peel_this, attribute);
    return peel::ZTArrayRef<const char * const>::adopt (const_cast<const char * const*> (_peel_return));
  }

  peel_nonnull_args (2)
  File::AttributeType
  get_attribute_type (const char *attribute) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GFileAttributeType _peel_return = g_file_info_get_attribute_type (_peel_this, attribute);
    return static_cast<File::AttributeType> (_peel_return);
  }

  peel_nonnull_args (2)
  uint32_t
  get_attribute_uint32 (const char *attribute) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    return g_file_info_get_attribute_uint32 (_peel_this, attribute);
  }

  peel_nonnull_args (2)
  uint64_t
  get_attribute_uint64 (const char *attribute) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    return g_file_info_get_attribute_uint64 (_peel_this, attribute);
  }

  const char *
  get_content_type () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    return g_file_info_get_content_type (_peel_this);
  }

  peel::RefPtr<GLib::DateTime>
  get_creation_date_time () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GDateTime *_peel_return = g_file_info_get_creation_date_time (_peel_this);
    return peel::RefPtr<GLib::DateTime>::adopt_ref (reinterpret_cast<GLib::DateTime *> (_peel_return));
  }

  peel::RefPtr<GLib::DateTime>
  get_deletion_date () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GDateTime *_peel_return = g_file_info_get_deletion_date (_peel_this);
    return peel::RefPtr<GLib::DateTime>::adopt_ref (reinterpret_cast<GLib::DateTime *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_display_name () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    return g_file_info_get_display_name (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_edit_name () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    return g_file_info_get_edit_name (_peel_this);
  }

  const char *
  get_etag () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    return g_file_info_get_etag (_peel_this);
  }

  FileType
  get_file_type () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GFileType _peel_return = g_file_info_get_file_type (_peel_this);
    return static_cast<FileType> (_peel_return);
  }

  Icon *
  get_icon () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GIcon *_peel_return = g_file_info_get_icon (_peel_this);
    return reinterpret_cast<Icon *> (_peel_return);
  }

  bool
  get_is_backup () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    gboolean _peel_return = g_file_info_get_is_backup (_peel_this);
    return !!_peel_return;
  }

  bool
  get_is_hidden () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    gboolean _peel_return = g_file_info_get_is_hidden (_peel_this);
    return !!_peel_return;
  }

  bool
  get_is_symlink () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    gboolean _peel_return = g_file_info_get_is_symlink (_peel_this);
    return !!_peel_return;
  }

  peel::RefPtr<GLib::DateTime>
  get_modification_date_time () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GDateTime *_peel_return = g_file_info_get_modification_date_time (_peel_this);
    return peel::RefPtr<GLib::DateTime>::adopt_ref (reinterpret_cast<GLib::DateTime *> (_peel_return));
  }

  peel_arg_out (2) peel_nonnull_args (2)
  void
  get_modification_time (GLib::TimeVal *result) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GTimeVal *_peel_result = reinterpret_cast<::GTimeVal *> (result);
    g_file_info_get_modification_time (_peel_this, _peel_result);
  }

  peel_returns_nonnull
  const char *
  get_name () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    return g_file_info_get_name (_peel_this);
  }

  int64_t
  get_size () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    return g_file_info_get_size (_peel_this);
  }

  int32_t
  get_sort_order () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    return g_file_info_get_sort_order (_peel_this);
  }

  Icon *
  get_symbolic_icon () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GIcon *_peel_return = g_file_info_get_symbolic_icon (_peel_this);
    return reinterpret_cast<Icon *> (_peel_return);
  }

  const char *
  get_symlink_target () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    return g_file_info_get_symlink_target (_peel_this);
  }

  peel_nonnull_args (2)
  bool
  has_attribute (const char *attribute) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    gboolean _peel_return = g_file_info_has_attribute (_peel_this, attribute);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  has_namespace (const char *name_space) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    gboolean _peel_return = g_file_info_has_namespace (_peel_this, name_space);
    return !!_peel_return;
  }

  peel::Strv
  list_attributes (const char *name_space) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    char **_peel_return = g_file_info_list_attributes (_peel_this, name_space);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  remove_attribute (const char *attribute) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    g_file_info_remove_attribute (_peel_this, attribute);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_access_date_time (GLib::DateTime *atime) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GDateTime *_peel_atime = reinterpret_cast<::GDateTime *> (atime);
    g_file_info_set_access_date_time (_peel_this, _peel_atime);
  }

  peel_nonnull_args (2)
  void
  set_attribute (const char *attribute, File::AttributeType type, void *value_p) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GFileAttributeType _peel_type = static_cast<::GFileAttributeType> (type);
    g_file_info_set_attribute (_peel_this, attribute, _peel_type, value_p);
  }

  peel_nonnull_args (2)
  void
  set_attribute_boolean (const char *attribute, bool attr_value) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    gboolean _peel_attr_value = static_cast<gboolean> (attr_value);
    g_file_info_set_attribute_boolean (_peel_this, attribute, _peel_attr_value);
  }

  peel_nonnull_args (2, 3)
  void
  set_attribute_byte_string (const char *attribute, const char *attr_value) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    g_file_info_set_attribute_byte_string (_peel_this, attribute, attr_value);
  }

  peel_nonnull_args (2, 3)
  void
  set_attribute_file_path (const char *attribute, const char *attr_value) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    g_file_info_set_attribute_file_path (_peel_this, attribute, attr_value);
  }

  peel_nonnull_args (2)
  void
  set_attribute_int32 (const char *attribute, int32_t attr_value) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    g_file_info_set_attribute_int32 (_peel_this, attribute, attr_value);
  }

  peel_nonnull_args (2)
  void
  set_attribute_int64 (const char *attribute, int64_t attr_value) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    g_file_info_set_attribute_int64 (_peel_this, attribute, attr_value);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_attribute_mask (FileAttributeMatcher *mask) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GFileAttributeMatcher *_peel_mask = reinterpret_cast<::GFileAttributeMatcher *> (mask);
    g_file_info_set_attribute_mask (_peel_this, _peel_mask);
  }

  peel_nonnull_args (2, 3)
  void
  set_attribute_object (const char *attribute, GObject::Object *attr_value) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GObject *_peel_attr_value = reinterpret_cast<::GObject *> (attr_value);
    g_file_info_set_attribute_object (_peel_this, attribute, _peel_attr_value);
  }

  peel_nonnull_args (2)
  bool
  set_attribute_status (const char *attribute, FileAttributeStatus status) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GFileAttributeStatus _peel_status = static_cast<::GFileAttributeStatus> (status);
    gboolean _peel_return = g_file_info_set_attribute_status (_peel_this, attribute, _peel_status);
    return !!_peel_return;
  }

  peel_nonnull_args (2, 3)
  void
  set_attribute_string (const char *attribute, const char *attr_value) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    g_file_info_set_attribute_string (_peel_this, attribute, attr_value);
  }

  peel_nonnull_args (2)
  void
  set_attribute_stringv (const char *attribute, peel::StrvRef attr_value) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    char **_peel_attr_value = const_cast<char **> (attr_value.data ());
    g_file_info_set_attribute_stringv (_peel_this, attribute, _peel_attr_value);
  }

  peel_nonnull_args (2)
  void
  set_attribute_uint32 (const char *attribute, uint32_t attr_value) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    g_file_info_set_attribute_uint32 (_peel_this, attribute, attr_value);
  }

  peel_nonnull_args (2)
  void
  set_attribute_uint64 (const char *attribute, uint64_t attr_value) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    g_file_info_set_attribute_uint64 (_peel_this, attribute, attr_value);
  }

  peel_nonnull_args (2)
  void
  set_content_type (const char *content_type) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    g_file_info_set_content_type (_peel_this, content_type);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_creation_date_time (GLib::DateTime *creation_time) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GDateTime *_peel_creation_time = reinterpret_cast<::GDateTime *> (creation_time);
    g_file_info_set_creation_date_time (_peel_this, _peel_creation_time);
  }

  peel_nonnull_args (2)
  void
  set_display_name (const char *display_name) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    g_file_info_set_display_name (_peel_this, display_name);
  }

  peel_nonnull_args (2)
  void
  set_edit_name (const char *edit_name) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    g_file_info_set_edit_name (_peel_this, edit_name);
  }

  void
  set_file_type (FileType type) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GFileType _peel_type = static_cast<::GFileType> (type);
    g_file_info_set_file_type (_peel_this, _peel_type);
  }

  peel_nonnull_args (2)
  void
  set_icon (Icon *icon) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GIcon *_peel_icon = reinterpret_cast<::GIcon *> (icon);
    g_file_info_set_icon (_peel_this, _peel_icon);
  }

  void
  set_is_hidden (bool is_hidden) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    gboolean _peel_is_hidden = static_cast<gboolean> (is_hidden);
    g_file_info_set_is_hidden (_peel_this, _peel_is_hidden);
  }

  void
  set_is_symlink (bool is_symlink) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    gboolean _peel_is_symlink = static_cast<gboolean> (is_symlink);
    g_file_info_set_is_symlink (_peel_this, _peel_is_symlink);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_modification_date_time (GLib::DateTime *mtime) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GDateTime *_peel_mtime = reinterpret_cast<::GDateTime *> (mtime);
    g_file_info_set_modification_date_time (_peel_this, _peel_mtime);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_modification_time (GLib::TimeVal *mtime) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GTimeVal *_peel_mtime = reinterpret_cast<::GTimeVal *> (mtime);
    g_file_info_set_modification_time (_peel_this, _peel_mtime);
  }

  peel_nonnull_args (2)
  void
  set_name (const char *name) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    g_file_info_set_name (_peel_this, name);
  }

  void
  set_size (int64_t size) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    g_file_info_set_size (_peel_this, size);
  }

  void
  set_sort_order (int32_t sort_order) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    g_file_info_set_sort_order (_peel_this, sort_order);
  }

  peel_nonnull_args (2)
  void
  set_symbolic_icon (Icon *icon) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    ::GIcon *_peel_icon = reinterpret_cast<::GIcon *> (icon);
    g_file_info_set_symbolic_icon (_peel_this, _peel_icon);
  }

  peel_nonnull_args (2)
  void
  set_symlink_target (const char *symlink_target) noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    g_file_info_set_symlink_target (_peel_this, symlink_target);
  }

  void
  unset_attribute_mask () noexcept
  {
    ::GFileInfo *_peel_this = reinterpret_cast<::GFileInfo *> (this);
    g_file_info_unset_attribute_mask (_peel_this);
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class FileInfo */

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/DateTime.h>
