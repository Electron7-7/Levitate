#pragma once

/* Auto-generated, do not modify */
/* Package gmodule-2.0 */

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
#include <gmodule.h>
#include <peel/GLib/Quark.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
struct Quark;
} /* namespace GLib */

namespace GModule
{
class /* record */ Module;
enum class ModuleFlags : std::underlying_type<::GModuleFlags>::type;
} /* namespace GModule */


namespace GModule
{
class /* record */ Module
{
private:
  Module () = delete;
  Module (const Module &) = delete;
  Module (Module &&) = delete;
  ~Module ();

public:
  bool
  close () noexcept
  {
    ::GModule *_peel_this = reinterpret_cast<::GModule *> (this);
    gboolean _peel_return = g_module_close (_peel_this);
    return !!_peel_return;
  }

  void
  make_resident () noexcept
  {
    ::GModule *_peel_this = reinterpret_cast<::GModule *> (this);
    g_module_make_resident (_peel_this);
  }

  peel_returns_nonnull
  const char *
  name () noexcept
  {
    ::GModule *_peel_this = reinterpret_cast<::GModule *> (this);
    return g_module_name (_peel_this);
  }

  peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  symbol (const char *symbol_name, void **symbol) noexcept
  {
    ::GModule *_peel_this = reinterpret_cast<::GModule *> (this);
    gpointer *_peel_symbol = reinterpret_cast<gpointer *> (symbol);
    gboolean _peel_return = g_module_symbol (_peel_this, symbol_name, _peel_symbol);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  static peel::String
  build_path (const char *directory, const char *module_name) noexcept
  {
    gchar *_peel_return = g_module_build_path (directory, module_name);
    return peel::String::adopt_string (_peel_return);
  }

  peel_returns_nonnull
  static const char *
  error () noexcept
  {
    return g_module_error ();
  }

  static GLib::Quark
  error_quark () noexcept
  {
    ::GQuark _peel_return = g_module_error_quark ();
    return static_cast<GLib::Quark> (_peel_return);
  }

  peel_returns_nonnull
  static Module *
  open (const char *file_name, ModuleFlags flags) noexcept
  {
    ::GModuleFlags _peel_flags = static_cast<::GModuleFlags> (flags);
    ::GModule *_peel_return = g_module_open (file_name, _peel_flags);
    peel_assume (_peel_return);
    return reinterpret_cast<Module *> (_peel_return);
  }

  static Module *
  open_full (const char *file_name, ModuleFlags flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GModuleFlags _peel_flags = static_cast<::GModuleFlags> (flags);
    ::GError *_peel_error = nullptr;
    ::GModule *_peel_return = g_module_open_full (file_name, _peel_flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return reinterpret_cast<Module *> (_peel_return);
  }

  static bool
  supported () noexcept
  {
    gboolean _peel_return = g_module_supported ();
    return !!_peel_return;
  }
}; /* record Module */

} /* namespace GModule */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
