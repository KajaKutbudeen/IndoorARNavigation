// ignore_for_file: prefer_const_constructors

import 'package:flutter/material.dart';
import 'package:google_fonts/google_fonts.dart';

class ThemeProvider extends ChangeNotifier {
  ThemeMode themeMode = ThemeMode.dark;
  bool get isDarkMode => themeMode == ThemeMode.dark;

  void toggleTheme(bool isOn) {
    themeMode = isOn ? ThemeMode.dark : ThemeMode.light;
    notifyListeners();
  }
}

class MyThemes {
  static final darkTheme = ThemeData(
    textTheme: GoogleFonts.montserratAlternatesTextTheme()
        .apply(bodyColor: Colors.amber),
    scaffoldBackgroundColor: Colors.black,
    primaryColor: Colors.white,
    colorScheme: const ColorScheme.dark(), //text color
    iconTheme: IconThemeData(color: Colors.black87, opacity: 1),
  );

  static final lightTheme = ThemeData(
    textTheme: GoogleFonts.montserratAlternatesTextTheme()
        .apply(bodyColor: Colors.black),
    primaryColor: Colors.white,
    colorScheme: const ColorScheme.light(),
    iconTheme: IconThemeData(color: Colors.black87, opacity: 1.0),
  );
}
