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
#include <peel/GLib/Quark.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
class /* record */ MatchInfo;
struct Quark;
class /* record */ Regex;
enum class RegexCompileFlags : std::underlying_type<::GRegexCompileFlags>::type;
enum class RegexMatchFlags : std::underlying_type<::GRegexMatchFlags>::type;
struct String;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::Regex> ()
{
  return g_regex_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::Regex>
{
  typedef RefPtr<GLib::Regex> OwnedType;
  typedef GLib::Regex * UnownedType;

  static GLib::Regex *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::Regex *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::Regex * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::Regex>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::Regex>::adopt_ref (reinterpret_cast<GLib::Regex *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::Regex> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::Regex *
  cast_for_create (GLib::Regex * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::Regex>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::Regex> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::Regex, void>
{
  static void
  ref (GLib::Regex *ptr)
  {
    g_regex_ref (reinterpret_cast<::GRegex *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::Regex *ptr)
  {
    g_regex_unref (reinterpret_cast<::GRegex *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
class /* record */ Regex
{
private:
  Regex () = delete;
  Regex (const Regex &) = delete;
  Regex (Regex &&) = delete;
  ~Regex ();

public:
  peel_nonnull_args (1)
  static peel::RefPtr<Regex>
  create (const char *pattern, RegexCompileFlags compile_options, RegexMatchFlags match_options, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GRegexCompileFlags _peel_compile_options = static_cast<::GRegexCompileFlags> (compile_options);
    ::GRegexMatchFlags _peel_match_options = static_cast<::GRegexMatchFlags> (match_options);
    ::GError *_peel_error = nullptr;
    ::GRegex *_peel_return = g_regex_new (pattern, _peel_compile_options, _peel_match_options, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Regex>::adopt_ref (reinterpret_cast<Regex *> (_peel_return));
  }

  int
  get_capture_count () const noexcept
  {
    const ::GRegex *_peel_this = reinterpret_cast<const ::GRegex *> (this);
    return g_regex_get_capture_count (_peel_this);
  }

  RegexCompileFlags
  get_compile_flags () const noexcept
  {
    const ::GRegex *_peel_this = reinterpret_cast<const ::GRegex *> (this);
    ::GRegexCompileFlags _peel_return = g_regex_get_compile_flags (_peel_this);
    return static_cast<RegexCompileFlags> (_peel_return);
  }

  bool
  get_has_cr_or_lf () const noexcept
  {
    const ::GRegex *_peel_this = reinterpret_cast<const ::GRegex *> (this);
    gboolean _peel_return = g_regex_get_has_cr_or_lf (_peel_this);
    return !!_peel_return;
  }

  RegexMatchFlags
  get_match_flags () const noexcept
  {
    const ::GRegex *_peel_this = reinterpret_cast<const ::GRegex *> (this);
    ::GRegexMatchFlags _peel_return = g_regex_get_match_flags (_peel_this);
    return static_cast<RegexMatchFlags> (_peel_return);
  }

  int
  get_max_backref () const noexcept
  {
    const ::GRegex *_peel_this = reinterpret_cast<const ::GRegex *> (this);
    return g_regex_get_max_backref (_peel_this);
  }

  int
  get_max_lookbehind () const noexcept
  {
    const ::GRegex *_peel_this = reinterpret_cast<const ::GRegex *> (this);
    return g_regex_get_max_lookbehind (_peel_this);
  }

  peel_returns_nonnull
  const char *
  get_pattern () const noexcept
  {
    const ::GRegex *_peel_this = reinterpret_cast<const ::GRegex *> (this);
    return g_regex_get_pattern (_peel_this);
  }

  peel_nonnull_args (2)
  int
  get_string_number (const char *name) const noexcept
  {
    const ::GRegex *_peel_this = reinterpret_cast<const ::GRegex *> (this);
    return g_regex_get_string_number (_peel_this, name);
  }

  peel_arg_out (4) peel_nonnull_args (2)
  bool
  match (const char *string, RegexMatchFlags match_options, peel::RefPtr<MatchInfo> *match_info) const noexcept
  {
    const ::GRegex *_peel_this = reinterpret_cast<const ::GRegex *> (this);
    ::GRegexMatchFlags _peel_match_options = static_cast<::GRegexMatchFlags> (match_options);
    ::GMatchInfo *_peel_match_info;
    gboolean _peel_return = g_regex_match (_peel_this, string, _peel_match_options, match_info ? &_peel_match_info : nullptr);
    if (match_info)
      *match_info = peel::RefPtr<MatchInfo>::adopt_ref (reinterpret_cast<MatchInfo *> (_peel_match_info));
    return !!_peel_return;
  }

  peel_arg_out (4) peel_nonnull_args (2)
  bool
  match_all (const char *string, RegexMatchFlags match_options, peel::RefPtr<MatchInfo> *match_info) const noexcept
  {
    const ::GRegex *_peel_this = reinterpret_cast<const ::GRegex *> (this);
    ::GRegexMatchFlags _peel_match_options = static_cast<::GRegexMatchFlags> (match_options);
    ::GMatchInfo *_peel_match_info;
    gboolean _peel_return = g_regex_match_all (_peel_this, string, _peel_match_options, match_info ? &_peel_match_info : nullptr);
    if (match_info)
      *match_info = peel::RefPtr<MatchInfo>::adopt_ref (reinterpret_cast<MatchInfo *> (_peel_match_info));
    return !!_peel_return;
  }

  peel_arg_out (5)
  bool
  match_all_full (peel::ArrayRef<const char *> string, int start_position, RegexMatchFlags match_options, peel::RefPtr<MatchInfo> *match_info, peel::UniquePtr<GLib::Error> *error) const noexcept
  {
    gssize _peel_string_len;
    const ::GRegex *_peel_this = reinterpret_cast<const ::GRegex *> (this);
    const gchar *_peel_string = (_peel_string_len = string.size (), reinterpret_cast<const gchar *> (string.data ()));
    ::GRegexMatchFlags _peel_match_options = static_cast<::GRegexMatchFlags> (match_options);
    ::GMatchInfo *_peel_match_info;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_regex_match_all_full (_peel_this, _peel_string, _peel_string_len, start_position, _peel_match_options, match_info ? &_peel_match_info : nullptr, &_peel_error);
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
        if (match_info)
          *match_info = peel::RefPtr<MatchInfo>::adopt_ref (reinterpret_cast<MatchInfo *> (_peel_match_info));
      }
    return !!_peel_return;
  }

  peel_arg_out (5)
  bool
  match_full (peel::ArrayRef<const char *> string, int start_position, RegexMatchFlags match_options, peel::RefPtr<MatchInfo> *match_info, peel::UniquePtr<GLib::Error> *error) const noexcept
  {
    gssize _peel_string_len;
    const ::GRegex *_peel_this = reinterpret_cast<const ::GRegex *> (this);
    const gchar *_peel_string = (_peel_string_len = string.size (), reinterpret_cast<const gchar *> (string.data ()));
    ::GRegexMatchFlags _peel_match_options = static_cast<::GRegexMatchFlags> (match_options);
    ::GMatchInfo *_peel_match_info;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_regex_match_full (_peel_this, _peel_string, _peel_string_len, start_position, _peel_match_options, match_info ? &_peel_match_info : nullptr, &_peel_error);
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
        if (match_info)
          *match_info = peel::RefPtr<MatchInfo>::adopt_ref (reinterpret_cast<MatchInfo *> (_peel_match_info));
      }
    return !!_peel_return;
  }

  /* ref bound as RefTraits */

  peel_nonnull_args (4)
  peel::String
  replace (peel::ArrayRef<const char *> string, int start_position, const char *replacement, RegexMatchFlags match_options, peel::UniquePtr<GLib::Error> *error) const noexcept
  {
    gssize _peel_string_len;
    const ::GRegex *_peel_this = reinterpret_cast<const ::GRegex *> (this);
    const gchar *_peel_string = (_peel_string_len = string.size (), reinterpret_cast<const gchar *> (string.data ()));
    ::GRegexMatchFlags _peel_match_options = static_cast<::GRegexMatchFlags> (match_options);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = g_regex_replace (_peel_this, _peel_string, _peel_string_len, start_position, replacement, _peel_match_options, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  template<typename RegexEvalCallback>
  peel::String
  replace_eval (peel::ArrayRef<const char *> string, int start_position, RegexMatchFlags match_options, RegexEvalCallback &&eval, peel::UniquePtr<GLib::Error> *error) const noexcept
  {
    gssize _peel_string_len;
    gpointer _peel_user_data;
    const ::GRegex *_peel_this = reinterpret_cast<const ::GRegex *> (this);
    const gchar *_peel_string = (_peel_string_len = string.size (), reinterpret_cast<const gchar *> (string.data ()));
    ::GRegexMatchFlags _peel_match_options = static_cast<::GRegexMatchFlags> (match_options);
    ::GRegexEvalCallback _peel_eval = peel::internals::CallbackHelper<gboolean, const ::GMatchInfo *, ::GString *>::wrap_call_callback (
      static_cast<RegexEvalCallback &&> (eval),
      [] (const ::GMatchInfo *match_info, ::GString *result, gpointer user_data) -> gboolean
      {
        RegexEvalCallback &_peel_captured_eval = *reinterpret_cast<typename std::remove_reference<RegexEvalCallback>::type *> (user_data);
        const MatchInfo *_peel_match_info = reinterpret_cast<const MatchInfo *> (match_info);
        String *_peel_result = reinterpret_cast<String *> (result);
        bool _peel_return = _peel_captured_eval (_peel_match_info, _peel_result);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, peel::internals::is_const_invocable<RegexEvalCallback, void, const MatchInfo *, String *>::value);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = g_regex_replace_eval (_peel_this, _peel_string, _peel_string_len, start_position, _peel_match_options, _peel_eval, _peel_user_data, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (4)
  peel::String
  replace_literal (peel::ArrayRef<const char *> string, int start_position, const char *replacement, RegexMatchFlags match_options, peel::UniquePtr<GLib::Error> *error) const noexcept
  {
    gssize _peel_string_len;
    const ::GRegex *_peel_this = reinterpret_cast<const ::GRegex *> (this);
    const gchar *_peel_string = (_peel_string_len = string.size (), reinterpret_cast<const gchar *> (string.data ()));
    ::GRegexMatchFlags _peel_match_options = static_cast<::GRegexMatchFlags> (match_options);
    ::GError *_peel_error = nullptr;
    gchar *_peel_return = g_regex_replace_literal (_peel_this, _peel_string, _peel_string_len, start_position, replacement, _peel_match_options, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  peel::Strv
  split (const char *string, RegexMatchFlags match_options) const noexcept
  {
    const ::GRegex *_peel_this = reinterpret_cast<const ::GRegex *> (this);
    ::GRegexMatchFlags _peel_match_options = static_cast<::GRegexMatchFlags> (match_options);
    gchar **_peel_return = g_regex_split (_peel_this, string, _peel_match_options);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel::Strv
  split_full (peel::ArrayRef<const char *> string, int start_position, RegexMatchFlags match_options, int max_tokens, peel::UniquePtr<GLib::Error> *error) const noexcept
  {
    gssize _peel_string_len;
    const ::GRegex *_peel_this = reinterpret_cast<const ::GRegex *> (this);
    const gchar *_peel_string = (_peel_string_len = string.size (), reinterpret_cast<const gchar *> (string.data ()));
    ::GRegexMatchFlags _peel_match_options = static_cast<::GRegexMatchFlags> (match_options);
    ::GError *_peel_error = nullptr;
    gchar **_peel_return = g_regex_split_full (_peel_this, _peel_string, _peel_string_len, start_position, _peel_match_options, max_tokens, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  /* unref bound as RefTraits */

  peel_arg_out (2) peel_nonnull_args (1)
  static bool
  check_replacement (const char *replacement, bool *has_references, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gboolean _peel_has_references;
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_regex_check_replacement (replacement, has_references ? &_peel_has_references : nullptr, &_peel_error);
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
        if (has_references)
          *has_references = !!_peel_has_references;
      }
    return !!_peel_return;
  }

  static Quark
  error_quark () noexcept
  {
    ::GQuark _peel_return = g_regex_error_quark ();
    return static_cast<Quark> (_peel_return);
  }

  peel_nonnull_args (1)
  static peel::String
  escape_nul (const char *string, int length) noexcept
  {
    gchar *_peel_return = g_regex_escape_nul (string, length);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (1)
  static peel::String
  escape_string (const char *string, int length) noexcept
  {
    gchar *_peel_return = g_regex_escape_string (string, length);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (1, 2)
  static bool
  match_simple (const char *pattern, const char *string, RegexCompileFlags compile_options, RegexMatchFlags match_options) noexcept
  {
    ::GRegexCompileFlags _peel_compile_options = static_cast<::GRegexCompileFlags> (compile_options);
    ::GRegexMatchFlags _peel_match_options = static_cast<::GRegexMatchFlags> (match_options);
    gboolean _peel_return = g_regex_match_simple (pattern, string, _peel_compile_options, _peel_match_options);
    return !!_peel_return;
  }

  peel_nonnull_args (1, 2)
  static peel::Strv
  split_simple (const char *pattern, const char *string, RegexCompileFlags compile_options, RegexMatchFlags match_options) noexcept
  {
    ::GRegexCompileFlags _peel_compile_options = static_cast<::GRegexCompileFlags> (compile_options);
    ::GRegexMatchFlags _peel_match_options = static_cast<::GRegexMatchFlags> (match_options);
    gchar **_peel_return = g_regex_split_simple (pattern, string, _peel_compile_options, _peel_match_options);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }
}; /* record Regex */

} /* namespace GLib */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/GLib/MatchInfo.h>
