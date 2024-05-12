import 'package:flutter/material.dart';
import 'package:flutter_application_1/chat_screen.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: HomeScreen(),
    );
  }
}

class HomeScreen extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center, // Center the column vertically
          children: [
            // Logo image
            Image.asset(
              'assets/logo.jpg', // Replace with your logo image path
              width: 100.0,
              height: 100.0,
            ),
            SizedBox(height: 20.0), // Add spacing between logo and text
            // App name text
            Text(
              'E-BOT',
              style: TextStyle(fontSize: 24.0),
            ),
            SizedBox(height: 20.0), // Add spacing between text and button
            // Button
            ElevatedButton(
              onPressed: () {
                // Navigate to ChatScreen when button pressed
                Navigator.push(
                  context,
                  MaterialPageRoute(builder: (context) => MyChatApp()),
                );
              },
              child: Text('Start chat'),
              style: ElevatedButton.styleFrom(
                backgroundColor: Colors.blue, // Set button color
                shape: RoundedRectangleBorder(
                  borderRadius: BorderRadius.circular(10.0), // Set button corner radius
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }
}


