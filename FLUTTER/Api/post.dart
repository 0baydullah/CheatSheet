///--------------Controller Class--------------------------------------------


  final loginmodel = LogInModel().obs;
  final isLoading = false.obs;

  loginWithEmail() async {
    print("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
    isLoading(true);
    final response = await LogInRepository().loginWithEmail(
      username: emailController.value.text.toString(),
      password: passwordController.value.text.toString(),
    );

    isLoading(false);
    if (response.statusCode == 200) {
      loginmodel.value = response;
      Get.toNamed(Routes.HOME);

      print(loginmodel.value.statusCode);
      print("******************************************************************");
    } else {

      Get.snackbar("oops", "shomossha vai shommsassaha");
    }
  }




///--------------Repository Class---------------------------------------


import 'dart:convert';
import 'package:business_card/app/core/widget/app_helper.dart';
import 'package:business_card/app/data/remote/base.dart';
import 'package:http/http.dart' as http;
import '../model/logInModel.dart';

class LogInRepository {
  Future<LogInModel> loginWithEmail(
      {String? username, String? password}) async {
    var body = jsonEncode({"username": username, "password": password});
    var url = "/api/auth/login_with_email";
    var URI = Uri.parse(baseUrl + url);

    AppHelper().showLoader();

    final response = await http.post(
      URI,
      body: body,
      headers: {
        "Content-Type": "application/json",
        "Authorization": bToken.$,
      },
    );
    AppHelper().hideLoader();
    print(
        "#################################${response.statusCode}#######################################");
    print(
        "#################################${response.body}#######################################");
    return logInModelFromJson(response.body);
  }
}




///--------------Model Class---------------------------------------


import 'dart:convert';

LogInModel logInModelFromJson(String str) => LogInModel.fromJson(json.decode(str));

String logInModelToJson(LogInModel data) => json.encode(data.toJson());

class LogInModel {
  int? statusCode;
  String? status;
  String? message;
  Data? data;

  LogInModel({
    this.statusCode,
    this.status,
    this.message,
    this.data,
  });

  factory LogInModel.fromJson(Map<String, dynamic> json) => LogInModel(
    statusCode: json["statusCode"],
    status: json["status"],
    message: json["message"],
    data: json["data"] == null ? null : Data.fromJson(json["data"]),
  );

  Map<String, dynamic> toJson() => {
    "statusCode": statusCode,
    "status": status,
    "message": message,
    "data": data?.toJson(),
  };
}

class Data {
  String? apiToken;
  User? user;

  Data({
    this.apiToken,
    this.user,
  });

  factory Data.fromJson(Map<String, dynamic> json) => Data(
    apiToken: json["apiToken"],
    user: json["user"] == null ? null : User.fromJson(json["user"]),
  );

  Map<String, dynamic> toJson() => {
    "apiToken": apiToken,
    "user": user?.toJson(),
  };
}

class User {
  String? name;
  String? userName;
  dynamic imageUrl;

  User({
    this.name,
    this.userName,
    this.imageUrl,
  });

  factory User.fromJson(Map<String, dynamic> json) => User(
    name: json["name"],
    userName: json["userName"],
    imageUrl: json["imageUrl"],
  );

  Map<String, dynamic> toJson() => {
    "name": name,
    "userName": userName,
    "imageUrl": imageUrl,
  };
}
