# cppcodec - Header-only base64/base32/hex codec C++ library

This is a `build2` package repository for [`cppcodec`](https://github.com/tplgy/cppcodec),
a header-only C++ library for encoding and decoding base64, base64url,
base32, base32hex, and hex (base16).

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`cppcodec` in your `build2`-based project, then instead see the accompanying
[`libcppcodec/PACKAGE-README.md`](libcppcodec/PACKAGE-README.md) file.

The development setup for `cppcodec` uses the standard `bdep`-based workflow.
For example:

```
git clone .../cppcodec.git
cd cppcodec

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
