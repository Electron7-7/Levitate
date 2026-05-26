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
#include <peel/Gio/LoadableIcon.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* interface */ File;
class FileIcon;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::FileIcon> ()
{
  return g_file_icon_get_type ();
}


namespace Gio
{
class FileIcon : public LoadableIcon
/* non-derivable */
/* extends GObject::Object */
/* implements Icon, LoadableIcon */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FileIcon () = delete;
  FileIcon (const FileIcon &) = delete;
  FileIcon (FileIcon &&) = delete;
  FileIcon &
  operator = (const FileIcon &) = delete;
  FileIcon &
  operator = (FileIcon &&) = delete;
  ~FileIcon () = delete;
public:

  peel_nonnull_args (1)
  static peel::RefPtr<FileIcon>
  create (File *file) noexcept
  {
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    ::GIcon *_peel_return = g_file_icon_new (_peel_file);
    peel_assume (_peel_return);
    return peel::RefPtr<FileIcon>::adopt_ref (reinterpret_cast<FileIcon *> (_peel_return));
  }

  peel_returns_nonnull
  File *
  get_file () noexcept
  {
    ::GFileIcon *_peel_this = reinterpret_cast<::GFileIcon *> (this);
    ::GFile *_peel_return = g_file_icon_get_file (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<File *> (_peel_return);
  }

  static peel::Property<File>
  prop_file ()
  {
    return peel::Property<File> { "file" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class FileIcon */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
