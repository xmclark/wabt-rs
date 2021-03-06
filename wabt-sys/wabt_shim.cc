#include "src/wast-lexer.h"
#include "src/wast-parser.h"
#include "src/resolve-names.h"

extern "C" {

wabt::Result::Enum wabt_resolve_names_script(
    wabt::Script* script,
    wabt::Errors* errors) {
  return ResolveNamesScript(script, errors);
}

}
