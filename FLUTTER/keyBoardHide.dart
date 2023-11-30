
/// wrap Scaffold with GestureDetector and in ontap function use FocusManager to unfocus textfield to hide KEYBOARD

GestureDetector(
        onTap: () {
          FocusManager.instance.primaryFocus?.unfocus();
        },
        child: Scaffold(), /// wrap Scaffold with GestureDetector and in ontap function use FocusManager to unfocus textfield to hide KEYBOARD
  )
