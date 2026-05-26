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
} /* namespace Gio */


namespace Gio
{
struct FileAttributeInfo
{
private:
  FileAttributeInfo () = delete;
  FileAttributeInfo (const FileAttributeInfo &) = delete;
  FileAttributeInfo (FileAttributeInfo &&) = delete;
  ~FileAttributeInfo ();

public:
  const char *name;
  File::AttributeType type;
  File::AttributeInfoFlags flags;
}; /* record FileAttributeInfo */

static_assert (sizeof (FileAttributeInfo) == sizeof (::GFileAttributeInfo),
               "FileAttributeInfo size mismatch");
static_assert (alignof (FileAttributeInfo) == alignof (::GFileAttributeInfo),
               "FileAttributeInfo align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
