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
#include <peel/Gio/File.h>

peel_begin_header

namespace peel
{
namespace Gio
{
struct FileAttributeInfo;
struct FileAttributeInfoList;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::FileAttributeInfoList> ()
{
  return g_file_attribute_info_list_get_type ();
}
template<>
struct GObject::Value::Traits<Gio::FileAttributeInfoList>
{
  typedef RefPtr<Gio::FileAttributeInfoList> OwnedType;
  typedef Gio::FileAttributeInfoList * UnownedType;

  static Gio::FileAttributeInfoList *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gio::FileAttributeInfoList *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gio::FileAttributeInfoList * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gio::FileAttributeInfoList>
  dup (const ::GValue *value)
  {
    return RefPtr<Gio::FileAttributeInfoList>::adopt_ref (reinterpret_cast<Gio::FileAttributeInfoList *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gio::FileAttributeInfoList> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gio::FileAttributeInfoList *
  cast_for_create (Gio::FileAttributeInfoList * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gio::FileAttributeInfoList>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gio::FileAttributeInfoList> (), basics.flags);
  }
};

template<>
struct RefTraits<Gio::FileAttributeInfoList, void>
{
  static void
  ref (Gio::FileAttributeInfoList *ptr)
  {
    g_file_attribute_info_list_ref (reinterpret_cast<::GFileAttributeInfoList *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gio::FileAttributeInfoList *ptr)
  {
    g_file_attribute_info_list_unref (reinterpret_cast<::GFileAttributeInfoList *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gio
{
struct FileAttributeInfoList
{
private:
  FileAttributeInfoList () = delete;
  FileAttributeInfoList (const FileAttributeInfoList &) = delete;
  FileAttributeInfoList (FileAttributeInfoList &&) = delete;
  ~FileAttributeInfoList ();

public:
  FileAttributeInfo *infos;
  int n_infos;

  static peel::RefPtr<FileAttributeInfoList>
  create () noexcept
  {
    ::GFileAttributeInfoList *_peel_return = g_file_attribute_info_list_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<FileAttributeInfoList>::adopt_ref (reinterpret_cast<FileAttributeInfoList *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  add (const char *name, File::AttributeType type, File::AttributeInfoFlags flags) noexcept
  {
    ::GFileAttributeInfoList *_peel_this = reinterpret_cast<::GFileAttributeInfoList *> (this);
    ::GFileAttributeType _peel_type = static_cast<::GFileAttributeType> (type);
    ::GFileAttributeInfoFlags _peel_flags = static_cast<::GFileAttributeInfoFlags> (flags);
    g_file_attribute_info_list_add (_peel_this, name, _peel_type, _peel_flags);
  }

  peel::RefPtr<FileAttributeInfoList>
  dup () noexcept
  {
    ::GFileAttributeInfoList *_peel_this = reinterpret_cast<::GFileAttributeInfoList *> (this);
    ::GFileAttributeInfoList *_peel_return = g_file_attribute_info_list_dup (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<FileAttributeInfoList>::adopt_ref (reinterpret_cast<FileAttributeInfoList *> (_peel_return));
  }

  peel_nonnull_args (2) peel_returns_nonnull
  const FileAttributeInfo *
  lookup (const char *name) noexcept
  {
    ::GFileAttributeInfoList *_peel_this = reinterpret_cast<::GFileAttributeInfoList *> (this);
    const ::GFileAttributeInfo *_peel_return = g_file_attribute_info_list_lookup (_peel_this, name);
    peel_assume (_peel_return);
    return reinterpret_cast<const FileAttributeInfo *> (_peel_return);
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record FileAttributeInfoList */

static_assert (sizeof (FileAttributeInfoList) == sizeof (::GFileAttributeInfoList),
               "FileAttributeInfoList size mismatch");
static_assert (alignof (FileAttributeInfoList) == alignof (::GFileAttributeInfoList),
               "FileAttributeInfoList align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
