// ignore_for_file: prefer_const_constructors

import 'package:curved_navigation_bar/curved_navigation_bar.dart';
import 'package:flutter/material.dart';
import 'package:qrscanner/screens/ScanScreem.dart';
import 'package:qrscanner/screens/homescreen.dart';
import 'package:qrscanner/screens/mapscreen.dart';
import 'package:qrscanner/screens/settingsScreen.dart';

class HomePage extends StatefulWidget {
  const HomePage({Key? key}) : super(key: key);

  @override
  State<HomePage> createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  int index = 0;
  final screen = [
    HomeScreen(),
    MapScreen(),
    SettingScreen(),
  ];
  @override
  Widget build(BuildContext context) {
    final items = <Widget>[
      Icon(Icons.home),
      Icon(Icons.maps_ugc_sharp),
      Icon(Icons.settings),
    ];
    return Scaffold(
      body: screen[index],
      bottomNavigationBar: CurvedNavigationBar(
        backgroundColor: Colors.transparent,
        color: Colors.deepPurple.shade200,
        items: items,
        index: index,
        onTap: (index) {
          setState(() {
            this.index = index;
          });
        },
        animationDuration: Duration(milliseconds: 700),
      ),
    );
  }
}
