# libcppcodec - Header-only base64/base32/hex codec C++ library

This is a `build2` package for the [`cppcodec`](https://github.com/tplgy/cppcodec)
C++ library. It provides header-only encoding and decoding for base64, base64url,
base32, base32hex, and hex (base16), including RFC 4648 variants and
Crockford's base32.

Note: upstream has not tagged a release since `v0.2` (2018-08-20). This
package is built from a later upstream commit and versioned `0.2.1` to
reflect that, even though upstream itself has not published a `0.2.1`
release.


## Usage

To start using `libcppcodec` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libcppcodec ^0.2.1
```

Then import the library in your `buildfile`:

```
import libs = libcppcodec%lib{cppcodec}
```

Include the header for the specific codec variant you need, for example:

```
#include <cppcodec/base64_rfc4648.hpp>
#include <cppcodec/hex_lower.hpp>
```


## Importable targets

This package provides the following importable targets:

```
lib{cppcodec}
```

The header-only library. All codec variants are available once this target
is imported; no separate configuration is needed to enable individual
variants.


## Configuration variables

This package provides no configuration variables.
