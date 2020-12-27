# Tiến hành giải bài và tìm flag.

 Vì là file pe nên sẽ sử dụng IDA 7.5 để đọc file và debug. Đây là hình ảnh khi mở lên.
 ![2020-12-27-15-54-22-image](https://user-images.githubusercontent.com/51186443/103168238-0e5f7b00-4864-11eb-8797-51fecada5c3a.png)

 Chuyển sang mã giả để có cái nhìn tổng quát hơn (phím F5).
 ![2020-12-27-15-58-42-image](https://user-images.githubusercontent.com/51186443/103168240-0f90a800-4864-11eb-823b-7ef466a2ff2e.png)

 Tại đây, tôi phân tích rằng, chương trình sẽ hiển thị tin nhắn lên và cho chúng ta nhập password, password sẽ kiểm tra bằng hàm **checkPass** để xem có đúng không. Vì thế tôi sẽ hân tích hàm **checkPass**

 **checkPass** :
 ![2020-12-27-16-07-10-image](https://user-images.githubusercontent.com/51186443/103168241-10293e80-4864-11eb-8879-a28377e36a47.png)

 Tại đây, tôi hiểu rằng hàm này sẽ thay đổi các kiểu làm và sau đó sẽ kiểm tra **temp** và chuỗi vừa nhập có giống nhau không. Vì vậy, tôi sẽ đặt breakpoint tại dòng 25 và tiến hành debug.

# Debug:

 ![2020-12-27-16-14-56-image](https://user-images.githubusercontent.com/51186443/103168242-10c1d500-4864-11eb-8633-0c02c4d0c1c2.png)
 
 Nhập một chuỗi bất kì, và enter.
 Chương trình sẽ dừng lại tại nơi mà tôi đã đặt breakpoint trước. Và tôi có thể thấy được biến **Temp** đã có giá trị : "Y0u_F0und_Fl4G_!_0xda6vr81o9"
 ![2020-12-27-16-16-36-image](https://user-images.githubusercontent.com/51186443/103168244-115a6b80-4864-11eb-945b-5f61f0e10b34.png)
 ![2020-12-27-16-19-38-image](https://user-images.githubusercontent.com/51186443/103168246-11f30200-4864-11eb-9fe8-1d84d244bdb0.png)

 Vậy ta đã có được mật khẩu để vào được căn phòng. Nhưng như ta phân tích được từ đầu thì flag chính là:

 => **ChristCTF{Y0u_F0und_Fl4G_!_0xda6vr81o9}**
