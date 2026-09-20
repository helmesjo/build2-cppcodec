# cppcodec - Header-only base64/base32/hex codec C++ library

This is a `build2` package repository for [`cppcodec`](https://github.com/tplgy/cppcodec),
a header-only C++ library for encoding and decoding base64, base64url,
base32, base32hex, and hex (base16).

This repository contains `libcppcodec` and the accompanying
`libcppcodec-tests` package (the upstream Catch2-based test suite). If you
want to use `cppcodec` in your `build2`-based project, then see
[`libcppcodec/PACKAGE-README.md`](libcppcodec/PACKAGE-README.md).

This file contains setup instructions and other details that are more
appropriate for development rather than consumption.

The development setup for `cppcodec` uses the standard `bdep`-based workflow.
For example:

```
git clone --recursive .../cppcodec.git
cd cppcodec

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
