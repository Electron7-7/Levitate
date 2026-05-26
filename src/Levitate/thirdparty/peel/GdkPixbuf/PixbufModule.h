#pragma once

/* Auto-generated, do not modify */
/* Package gdk-pixbuf-2.0 */

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
#include <gdk-pixbuf/gdk-pixbuf.h>

peel_begin_header

namespace peel
{
namespace GModule
{
class /* record */ Module;
} /* namespace GModule */

namespace GdkPixbuf
{
struct PixbufFormat;
struct PixbufModule;
} /* namespace GdkPixbuf */


namespace GdkPixbuf
{
struct PixbufModule
{
private:
#ifdef GDK_PIXBUF_ENABLE_BACKEND
#endif /* GDK_PIXBUF_ENABLE_BACKEND */
  PixbufModule () = delete;
  PixbufModule (const PixbufModule &) = delete;
  PixbufModule (PixbufModule &&) = delete;
  ~PixbufModule ();

public:
  const char *module_name;
  const char *module_path;
  GModule::Module *module;
  PixbufFormat *info;
private:
  ::GdkPixbufModuleLoadFunc load;
  ::GdkPixbufModuleLoadXpmDataFunc load_xpm_data;
  ::GdkPixbufModuleBeginLoadFunc begin_load;
  ::GdkPixbufModuleStopLoadFunc stop_load;
  ::GdkPixbufModuleIncrementLoadFunc load_increment;
  ::GdkPixbufModuleLoadAnimationFunc load_animation;
  ::GdkPixbufModuleSaveFunc save;
  ::GdkPixbufModuleSaveCallbackFunc save_to_callback;
  ::GdkPixbufModuleSaveOptionSupportedFunc is_save_option_supported;
  decltype (::GdkPixbufModule::_reserved1) _reserved1;
  decltype (::GdkPixbufModule::_reserved2) _reserved2;
  decltype (::GdkPixbufModule::_reserved3) _reserved3;
  decltype (::GdkPixbufModule::_reserved4) _reserved4;

public:
}; /* record PixbufModule */

#ifdef GDK_PIXBUF_ENABLE_BACKEND
static_assert (sizeof (PixbufModule) == sizeof (::GdkPixbufModule),
               "PixbufModule size mismatch");
static_assert (alignof (PixbufModule) == alignof (::GdkPixbufModule),
               "PixbufModule align mismatch");
#endif /* GDK_PIXBUF_ENABLE_BACKEND */

} /* namespace GdkPixbuf */
} /* namespace peel */

peel_end_header
