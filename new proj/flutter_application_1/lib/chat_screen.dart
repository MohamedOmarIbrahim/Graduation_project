import 'package:flutter/material.dart';
import 'global_members.dart';
import 'message_data_modal.dart';
import 'chat_list_view.dart';

void main() {
  runApp(const MaterialApp(
    debugShowCheckedModeBanner: false,
    title: 'E-BOT',
    home: MyChatApp(),
  ));
}

class MyChatApp extends StatefulWidget {
  const MyChatApp({Key? key}) : super(key: key);

  @override
  MyChatAppState createState() => MyChatAppState();
}

class MyChatAppState extends State<MyChatApp> {
  TextEditingController textEditingController = TextEditingController();
  late String senderMessage, receiverMessage;
  ScrollController scrollController = ScrollController();

  Future<void> scrollAnimation() async {
    return await Future.delayed(
        const Duration(milliseconds: 100),
        () => scrollController.animateTo(
              scrollController.position.maxScrollExtent,
              duration: const Duration(milliseconds: 300),
              curve: Curves.linear,
            ));
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Color(0xFF838AB4),
      appBar: AppBar(
        backgroundColor: Color.fromARGB(255, 117, 125, 171),
        leadingWidth: 50.0,
        titleSpacing: 8.0,
        leading: const Padding(
          padding: EdgeInsets.only(left: 8.0),
          child: CircleAvatar(
            backgroundImage: AssetImage('assets/logo.jpg'),
          ),
        ),
        title: const Text(
          'E-BOT',
          style: TextStyle(
            color: Colors.white,
          ),
        ),
        actions: const [
          Icon(Icons.phone),
          Padding(
            padding: EdgeInsets.only(right: 20.0, left: 20.0),
          ),
        ],
      ),
      body: Column(
        children: [
          Expanded(
            child: ChatListView(scrollController: scrollController),
          ),
          Container(
            margin: const EdgeInsets.all(8.0),
            decoration: const BoxDecoration(
              shape: BoxShape.rectangle,
              color: Color(0xFF333D56),
              borderRadius: BorderRadius.all(Radius.circular(15.0)),
            ),
            child: Row(
              crossAxisAlignment: CrossAxisAlignment.end,
              children: [
                Container(
                  margin: const EdgeInsets.only(
                    left: 8.0,
                    right: 8.0,
                    bottom: 12.0,
                  ),
                  child: Transform.rotate(
                    angle: 45,
                    child: const Icon(
                      Icons.translate,
                      color: Colors.white,
                    ),
                  ),
                ),
                Container(
                  margin: const EdgeInsets.only(
                    left: 8.0,
                    right: 8.0,
                    bottom: 12.0,
                  ),
                  child: Transform.rotate(
                    angle: 45,
                    child: const Icon(
                      Icons.map,
                      color: Colors.white,
                    ),
                  ),
                ),
                Expanded(
                  child: TextFormField(
                    controller: textEditingController,
                    cursorColor: Colors.white,
                    keyboardType: TextInputType.multiline,
                    minLines: 1,
                    maxLines: 6,
                    style: const TextStyle(color: Colors.white),
                    decoration: const InputDecoration(
                      hintText: 'Type your message...',
                      hintStyle: TextStyle(color: Colors.grey),
                      border: InputBorder.none,
                    ),
                  ),
                ),
                Container(
                  margin: const EdgeInsets.only(
                    left: 8.0,
                    right: 8.0,
                    bottom: 11.0,
                  ),
                  child: Transform.rotate(
                    angle: -3.14 / 5,
                    child: Padding(
                      padding: const EdgeInsets.only(bottom: 5.0),
                      child: GestureDetector(
                        onTap: () {
                          setState(() {
                            messageList.add(
                              MessageData(textEditingController.text, true),
                            );
                            textEditingController.clear();
                            scrollAnimation();
                          });
                        },
                        onLongPress: () {
                          setState(() {
                            messageList.add(
                              MessageData(textEditingController.text, false),
                            );
                            textEditingController.clear();
                            scrollAnimation();
                          });
                        },
                        child: const Icon(
                          Icons.send,
                          color: Colors.white,
                        ),
                      ),
                    ),
                  ),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }
}
