///------------1. Encode Image to Base64
import 'dart:io' as Io;
import 'dart:convert';

main() {
  final bytes = Io.File('bezkoder.png').readAsBytesSync();

  String img64 = base64Encode(bytes);
  print(img64.substring(0, 100));  
}
// Output:
// iVBORw0KGgoAAAANSUhEUgAABAAAAAQACAMAAABIw9uxAAADAFBMVEX///8PDxEHBwkODhAQEBIFBQcTExUGBggRERMSEhQICAoa



///--------------------2. Decode Base64 String to Image
import 'dart:io' as Io;
import 'dart:convert';

main() {
  // img64 = iVBORw0KGgoAAAANSUhEUgAAB...
  final decodedBytes = base64Decode(img64);

  var file = Io.File("decodedBezkoder.png");
  file.writeAsBytesSync(decodedBytes);
}
