# The Room



# Có đính kèm source code và file thực thi.

# Tiến hành giải bài và tìm flag.

Vì là file pe nên sẽ sử dụng IDA 7.5 để đọc file và debug. Đây là hình ảnh khi mở lên.

<img src="C:\Users\ASUS\AppData\Roaming\marktext\images\2020-12-27-15-56-21-image.png" title="" alt="" data-align="center">

Chuyển sang mã giả để có cái nhìn tổng quát hơn (phím F5).

<img src="C:\Users\ASUS\AppData\Roaming\marktext\images\2020-12-27-15-58-42-image.png" title="" alt="" data-align="center">

Tại đây, tôi phân tích rằng, chương trình sẽ hiển thị tin nhắn lên và cho chúng ta nhập password, password sẽ kiểm tra bằng hàm **checkPass** để xem có đúng không. Vì thế tôi sẽ phân tích hàm **checkPass**

**checkPass** :

<img src="C:\Users\ASUS\AppData\Roaming\marktext\images\2020-12-27-16-07-10-image.png" title="" alt="" data-align="center">

Tại đây, tôi hiểu rằng hàm này sẽ thay đổi các kiểu làm và sau đó sẽ kiểm tra **temp** và chuỗi vừa nhập có giống nhau không. Vì vậy, tôi sẽ đặt breakpoint tại dòng 25 và tiến hành debug.

# Debug:

Nhập một chuỗi bất kì, và enter.

![](C:\Users\ASUS\AppData\Roaming\marktext\images\2020-12-27-16-16-36-image.png)

Chương trình sẽ dừng lại tại nơi mà tôi đã đặt breakpoint trước. Và tôi có thể thấy được biến **Temp** đã có giá trị : "Y0u_F0und_Fl4G_!_0xda6vr81o9"

![](C:\Users\ASUS\AppData\Roaming\marktext\images\2020-12-27-16-19-38-image.png)

Vậy ta đã có được mật khẩu để vào được căn phòng. Nhưng như ta phân tích được từ đầu thì flag chính là: 

=> **ChristCTF{Y0u_F0und_Fl4G_!_0xda6vr81o9}** 
