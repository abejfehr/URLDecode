URLDecode
=========
A function for decoding URLs, originally written with intent to be used in a CGI application. It takes strings like `https%3A%2F%2Fwww.google.ca%2F%3Fgws_rd%3Dssl%23q%3Durl%2Bdecoding` and turns it into strings like `https://www.google.ca/?gws_rd=ssl#q=url+decoding` for query string processing.

This function may be used in any scenario where an encoded URL is needed to be decoded. As far as I know, it's compliant with [RFC3986](https://tools.ietf.org/html/rfc3986).
