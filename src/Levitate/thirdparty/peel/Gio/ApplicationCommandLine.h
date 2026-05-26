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
class /* record */ Variant;
struct VariantDict;
} /* namespace GLib */

namespace Gio
{
class ApplicationCommandLine;
class /* interface */ File;
class InputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::ApplicationCommandLine> ()
{
  return g_application_command_line_get_type ();
}


namespace Gio
{
class ApplicationCommandLine : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GApplicationCommandLine) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ApplicationCommandLine () = delete;
  ApplicationCommandLine (const ApplicationCommandLine &) = delete;
  ApplicationCommandLine (ApplicationCommandLine &&) = delete;
  ApplicationCommandLine &
  operator = (const ApplicationCommandLine &) = delete;
  ApplicationCommandLine &
  operator = (ApplicationCommandLine &&) = delete;
protected:
  ~ApplicationCommandLine () = default;
public:

  peel_nonnull_args (2)
  peel::RefPtr<File>
  create_file_for_arg (const char *arg) noexcept
  {
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    ::GFile *_peel_return = g_application_command_line_create_file_for_arg (_peel_this, arg);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  void
  done () noexcept
  {
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    g_application_command_line_done (_peel_this);
  }

  peel::UniquePtr<peel::String[]>
  get_arguments () noexcept
  {
    int _peel_argc;
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    gchar **_peel_return = g_application_command_line_get_arguments (_peel_this, &_peel_argc);
    peel_assume (_peel_return);
    return peel::UniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return), _peel_argc);
  }

  const char *
  get_cwd () noexcept
  {
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    return g_application_command_line_get_cwd (_peel_this);
  }

  peel::StrvRef
  get_environ () noexcept
  {
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    const gchar* const *_peel_return = g_application_command_line_get_environ (_peel_this);
    return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
  }

  int
  get_exit_status () noexcept
  {
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    return g_application_command_line_get_exit_status (_peel_this);
  }

  bool
  get_is_remote () noexcept
  {
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    gboolean _peel_return = g_application_command_line_get_is_remote (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  GLib::VariantDict *
  get_options_dict () noexcept
  {
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    ::GVariantDict *_peel_return = g_application_command_line_get_options_dict (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<GLib::VariantDict *> (_peel_return);
  }

  peel::RefPtr<GLib::Variant>
  get_platform_data () noexcept
  {
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    ::GVariant *_peel_return = g_application_command_line_get_platform_data (_peel_this);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  peel::RefPtr<InputStream>
  get_stdin () noexcept
  {
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    ::GInputStream *_peel_return = g_application_command_line_get_stdin (_peel_this);
    return peel::RefPtr<InputStream>::adopt_ref (reinterpret_cast<InputStream *> (_peel_return));
  }

  peel_nonnull_args (2)
  const char *
  getenv (const char *name) noexcept
  {
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    return g_application_command_line_getenv (_peel_this, name);
  }

  template<typename... Args>
  peel_nonnull_args (2)
  void
  print (const char *format, Args ...args) noexcept
  {
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    g_application_command_line_print (_peel_this, format, args...);
  }

  peel_nonnull_args (2)
  void
  print_literal (const char *message) noexcept
  {
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    g_application_command_line_print_literal (_peel_this, message);
  }

  template<typename... Args>
  peel_nonnull_args (2)
  void
  printerr (const char *format, Args ...args) noexcept
  {
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    g_application_command_line_printerr (_peel_this, format, args...);
  }

  peel_nonnull_args (2)
  void
  printerr_literal (const char *message) noexcept
  {
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    g_application_command_line_printerr_literal (_peel_this, message);
  }

  void
  set_exit_status (int exit_status) noexcept
  {
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    g_application_command_line_set_exit_status (_peel_this, exit_status);
  }

  static peel::Property<GLib::Variant>
  prop_arguments ()
  {
    return peel::Property<GLib::Variant> { "arguments" };
  }

  static peel::Property<bool>
  prop_is_remote ()
  {
    return peel::Property<bool> { "is-remote" };
  }

  static peel::Property<GLib::Variant>
  prop_options ()
  {
    return peel::Property<GLib::Variant> { "options" };
  }

  static peel::Property<GLib::Variant>
  prop_platform_data ()
  {
    return peel::Property<GLib::Variant> { "platform-data" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<ApplicationCommandLine> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_done () noexcept
  {
    ::GApplicationCommandLineClass *_peel_class = reinterpret_cast<::GApplicationCommandLineClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    _peel_class->done (_peel_this);
  }

  template<typename DerivedClass>
  peel::RefPtr<InputStream>
  parent_vfunc_get_stdin () noexcept
  {
    ::GApplicationCommandLineClass *_peel_class = reinterpret_cast<::GApplicationCommandLineClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    ::GInputStream *_peel_return = _peel_class->get_stdin (_peel_this);
    return peel::RefPtr<InputStream>::adopt_ref (reinterpret_cast<InputStream *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_print_literal (const char *message) noexcept
  {
    ::GApplicationCommandLineClass *_peel_class = reinterpret_cast<::GApplicationCommandLineClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    _peel_class->print_literal (_peel_this, message);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_printerr_literal (const char *message) noexcept
  {
    ::GApplicationCommandLineClass *_peel_class = reinterpret_cast<::GApplicationCommandLineClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GApplicationCommandLine *_peel_this = reinterpret_cast<::GApplicationCommandLine *> (this);
    _peel_class->printerr_literal (_peel_this, message);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GApplicationCommandLineClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_done ()
    {
      ::GApplicationCommandLineClass *klass = reinterpret_cast<::GApplicationCommandLineClass *> (this);
      klass->done = +[] (::GApplicationCommandLine *cmdline) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cmdline);
        _peel_this->DerivedClass::vfunc_done ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_stdin ()
    {
      ::GApplicationCommandLineClass *klass = reinterpret_cast<::GApplicationCommandLineClass *> (this);
      klass->get_stdin = +[] (::GApplicationCommandLine *cmdline) -> ::GInputStream *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cmdline);
        peel::RefPtr<InputStream> _peel_return = _peel_this->DerivedClass::vfunc_get_stdin ();
        return reinterpret_cast<::GInputStream *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_print_literal ()
    {
      ::GApplicationCommandLineClass *klass = reinterpret_cast<::GApplicationCommandLineClass *> (this);
      klass->print_literal = +[] (::GApplicationCommandLine *cmdline, const gchar *message) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cmdline);
        _peel_this->DerivedClass::vfunc_print_literal (message);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_printerr_literal ()
    {
      ::GApplicationCommandLineClass *klass = reinterpret_cast<::GApplicationCommandLineClass *> (this);
      klass->printerr_literal = +[] (::GApplicationCommandLine *cmdline, const gchar *message) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cmdline);
        _peel_this->DerivedClass::vfunc_printerr_literal (message);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GApplicationCommandLineClass),
                 "ApplicationCommandLine::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GApplicationCommandLineClass),
                 "ApplicationCommandLine::Class align mismatch");
}; /* class ApplicationCommandLine */

static_assert (sizeof (ApplicationCommandLine) == sizeof (::GApplicationCommandLine),
               "ApplicationCommandLine size mismatch");
static_assert (alignof (ApplicationCommandLine) == alignof (::GApplicationCommandLine),
               "ApplicationCommandLine align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Variant.h>
#include <peel/Gio/File.h>
#include <peel/Gio/InputStream.h>
