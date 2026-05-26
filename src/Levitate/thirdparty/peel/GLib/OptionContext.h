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

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
class /* record */ OptionContext;
struct OptionEntry;
class /* record */ OptionGroup;
} /* namespace GLib */



template<>
struct UniqueTraits<GLib::OptionContext>
{
  static void
  free (GLib::OptionContext *ptr)
  {
    g_option_context_free (reinterpret_cast<::GOptionContext *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
class /* record */ OptionContext
{
private:
  OptionContext () = delete;
  OptionContext (const OptionContext &) = delete;
  OptionContext (OptionContext &&) = delete;
  ~OptionContext ();

public:
  void
  add_group (peel::RefPtr<OptionGroup> group) noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    ::GOptionGroup *_peel_group = reinterpret_cast<::GOptionGroup *> (std::move (group).release_ref ());
    g_option_context_add_group (_peel_this, _peel_group);
  }

  void
  add_main_entries (peel::ZTArrayRef<const OptionEntry> entries, const char *translation_domain) noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    const ::GOptionEntry *_peel_entries = reinterpret_cast<const ::GOptionEntry *> (entries.data ());
    g_option_context_add_main_entries (_peel_this, _peel_entries, translation_domain);
  }

  /* free bound as UniqueTraits */

  peel_returns_nonnull
  const char *
  get_description () noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    return g_option_context_get_description (_peel_this);
  }

  peel_arg_in (3)
  peel::String
  get_help (bool main_help, OptionGroup *group) noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    gboolean _peel_main_help = static_cast<gboolean> (main_help);
    ::GOptionGroup *_peel_group = reinterpret_cast<::GOptionGroup *> (group);
    gchar *_peel_return = g_option_context_get_help (_peel_this, _peel_main_help, _peel_group);
    return peel::String::adopt_string (_peel_return);
  }

  bool
  get_help_enabled () noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    gboolean _peel_return = g_option_context_get_help_enabled (_peel_this);
    return !!_peel_return;
  }

  bool
  get_ignore_unknown_options () noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    gboolean _peel_return = g_option_context_get_ignore_unknown_options (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  OptionGroup *
  get_main_group () noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    ::GOptionGroup *_peel_return = g_option_context_get_main_group (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<OptionGroup *> (_peel_return);
  }

  bool
  get_strict_posix () noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    gboolean _peel_return = g_option_context_get_strict_posix (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  const char *
  get_summary () noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    return g_option_context_get_summary (_peel_this);
  }

  bool
  parse (peel::UniquePtr<peel::String[]> *argv, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gint _peel_argc;
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    gchar **_peel_argv;
    if (argv)
      _peel_argv = (_peel_argc = argv->size (), reinterpret_cast<gchar **> (std::move (*argv).release_ref ()));
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_option_context_parse (_peel_this, &_peel_argc, argv ? &_peel_argv : nullptr, &_peel_error);
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
        if (argv)
          *argv = peel::UniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_argv), _peel_argc);
      }
    return !!_peel_return;
  }

  bool
  parse (gint *argc, gchar ***argv, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_option_context_parse (_peel_this, argc, argv, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  bool
  parse_strv (peel::Strv *arguments, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    gchar **_peel_arguments;
    if (arguments)
      _peel_arguments = reinterpret_cast<gchar **> (std::move (*arguments).release_ref ());
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_option_context_parse_strv (_peel_this, arguments ? &_peel_arguments : nullptr, &_peel_error);
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
        if (arguments)
          *arguments = peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_arguments));
      }
    return !!_peel_return;
  }

  void
  set_description (const char *description) noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    g_option_context_set_description (_peel_this, description);
  }

  void
  set_help_enabled (bool help_enabled) noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    gboolean _peel_help_enabled = static_cast<gboolean> (help_enabled);
    g_option_context_set_help_enabled (_peel_this, _peel_help_enabled);
  }

  void
  set_ignore_unknown_options (bool ignore_unknown) noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    gboolean _peel_ignore_unknown = static_cast<gboolean> (ignore_unknown);
    g_option_context_set_ignore_unknown_options (_peel_this, _peel_ignore_unknown);
  }

  void
  set_main_group (peel::RefPtr<OptionGroup> group) noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    ::GOptionGroup *_peel_group = reinterpret_cast<::GOptionGroup *> (std::move (group).release_ref ());
    g_option_context_set_main_group (_peel_this, _peel_group);
  }

  void
  set_strict_posix (bool strict_posix) noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    gboolean _peel_strict_posix = static_cast<gboolean> (strict_posix);
    g_option_context_set_strict_posix (_peel_this, _peel_strict_posix);
  }

  void
  set_summary (const char *summary) noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    g_option_context_set_summary (_peel_this, summary);
  }

  template<typename TranslateFunc>
  void
  set_translate_func (TranslateFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::GDestroyNotify _peel_destroy_notify;
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    ::GTranslateFunc _peel_func = peel::internals::CallbackHelper<const gchar *, const gchar *>::wrap_notified_callback (
      static_cast<TranslateFunc &&> (func),
      [] (const gchar *str, gpointer data) -> const gchar *
      {
        TranslateFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<TranslateFunc>::type *> (data);
        return peel::internals::invoke_if_nonnull<const char *> (_peel_captured_func) (str);
      },
      &_peel_data, &_peel_destroy_notify, peel::internals::is_const_invocable<TranslateFunc, void, const char *>::value);
    g_option_context_set_translate_func (_peel_this, _peel_func, _peel_data, _peel_destroy_notify);
  }

  peel_nonnull_args (2)
  void
  set_translation_domain (const char *domain) noexcept
  {
    ::GOptionContext *_peel_this = reinterpret_cast<::GOptionContext *> (this);
    g_option_context_set_translation_domain (_peel_this, domain);
  }

  static peel::UniquePtr<OptionContext>
  new_ (const char *parameter_string) noexcept
  {
    ::GOptionContext *_peel_return = g_option_context_new (parameter_string);
    peel_assume (_peel_return);
    return peel::UniquePtr<OptionContext>::adopt_ref (reinterpret_cast<OptionContext *> (_peel_return));
  }
}; /* record OptionContext */

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GLib/OptionGroup.h>
