#include <cppcodec/base64_rfc4648.hpp>
#include <cppcodec/hex_lower.hpp>

#undef NDEBUG
#include <cassert>
#include <cstdint>
#include <string>
#include <vector>

int main ()
{
  using namespace std;

  // base64 round-trip.
  //
  {
    const string input ("Hello, World!");
    const string encoded (cppcodec::base64_rfc4648::encode (input));
    assert (encoded == "SGVsbG8sIFdvcmxkIQ==");

    const vector<uint8_t> decoded (cppcodec::base64_rfc4648::decode (encoded));
    assert (string (decoded.begin (), decoded.end ()) == input);
  }

  // hex round-trip.
  //
  {
    const string input ("cppcodec");
    const string encoded (cppcodec::hex_lower::encode (input));

    const vector<uint8_t> decoded (cppcodec::hex_lower::decode (encoded));
    assert (string (decoded.begin (), decoded.end ()) == input);
  }
}
