#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

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
#include <gdk/gdk.h>
#include <peel/GLib/SList.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class /* record */ FileList;
} /* namespace Gdk */

namespace Gio
{
class /* interface */ File;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gdk::FileList> ()
{
  return gdk_file_list_get_type ();
}
template<>
struct GObject::Value::Traits<Gdk::FileList>
{
  typedef const Gdk::FileList * UnownedType;

  static const Gdk::FileList *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gdk::FileList *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gdk::FileList * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static const Gdk::FileList *
  cast_for_create (const Gdk::FileList * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gdk::FileList>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gdk::FileList> (), basics.flags);
  }
};


namespace Gdk
{
class /* record */ FileList
{
private:
  FileList () = delete;
  FileList (const FileList &) = delete;
  FileList (FileList &&) = delete;
  ~FileList ();

public:
  /* Unsupported for now: new_from_array: no idea about ownership semantics */

  /* Unsupported for now: new_from_list: no idea about ownership semantics */

  GLib::SList<Gio::File *>
  get_files () noexcept
  {
    ::GdkFileList *_peel_this = reinterpret_cast<::GdkFileList *> (this);
    GSList *_peel_return = gdk_file_list_get_files (_peel_this);
    return GLib::SList<Gio::File *>::adopt_list (_peel_return);
  }
}; /* record FileList */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/Gio/File.h>
