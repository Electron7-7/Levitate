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
enum class TokenType : std::underlying_type<::GTokenType>::type;
} /* namespace GLib */

template<>
struct GObject::Value::Traits<GLib::TokenType>
{
  typedef GLib::TokenType UnownedType;

  static GLib::TokenType
  get (const ::GValue *value)
  {
    return static_cast<GLib::TokenType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GLib::TokenType m)
  {
    g_value_set_enum (value, static_cast<::GTokenType> (m));
  }

  static void
  set_marshal_return (::GValue *value, GLib::TokenType m)
  {
    set (value, m);
  }

  static GLib::TokenType
  cast_for_create (GLib::TokenType m) noexcept
  {
    return m;
  }
};


namespace GLib
{
enum class TokenType : std::underlying_type<::GTokenType>::type
{
  EOF_ = G_TOKEN_EOF,
  LEFT_PAREN = G_TOKEN_LEFT_PAREN,
  RIGHT_PAREN = G_TOKEN_RIGHT_PAREN,
  LEFT_CURLY = G_TOKEN_LEFT_CURLY,
  RIGHT_CURLY = G_TOKEN_RIGHT_CURLY,
  LEFT_BRACE = G_TOKEN_LEFT_BRACE,
  RIGHT_BRACE = G_TOKEN_RIGHT_BRACE,
  EQUAL_SIGN = G_TOKEN_EQUAL_SIGN,
  COMMA = G_TOKEN_COMMA,
  NONE = G_TOKEN_NONE,
  ERROR_ = G_TOKEN_ERROR,
  CHAR = G_TOKEN_CHAR,
  BINARY = G_TOKEN_BINARY,
  OCTAL = G_TOKEN_OCTAL,
  INT = G_TOKEN_INT,
  HEX = G_TOKEN_HEX,
  FLOAT = G_TOKEN_FLOAT,
  STRING = G_TOKEN_STRING,
  SYMBOL = G_TOKEN_SYMBOL,
  IDENTIFIER = G_TOKEN_IDENTIFIER,
  IDENTIFIER_NULL = G_TOKEN_IDENTIFIER_NULL,
  COMMENT_SINGLE = G_TOKEN_COMMENT_SINGLE,
  COMMENT_MULTI = G_TOKEN_COMMENT_MULTI,
}; /* enum TokenType */


} /* namespace GLib */
} /* namespace peel */

peel_end_header
