# NHÓM-4- Lớp D24TXCN08K: Nguyễn Minh Ngọc (K24DTCN378) - Đào Quang Anh (K24DTCN358) -  Hoàng Thị Như Quỳnh (K24DTCN383)
BAI TAP GIUA KY MON C++
Cài Đặt chương trình:

- 1.Tải Visual Studio Code
  - 1.1 Truy cập Visual Studio Code.
  - 1.2 Tải xuống và cài đặt phiên bản phù hợp với hệ điều hành của bạn.

- 2.Cài đặt Compiler C++(làm theo link sau) Windows:https://code.visualstudio.com/docs/cpp/config-mingw

- 3.Cài đặt git.
  - 3.1. Truy cập vào https://git-scm.com/downloads/win, và tải 1 trong 2 bản "Standalone Installer" tương thích với máy.
  - 3.2. Tạo tài khoản trên https://github.com, nếu chưa có.

- 4.Thiết lập hệ thống trên github.
  - 4.1. Tạo 1 Repositories trên github(https://github.com)
  - 4.2. Truy cập đường link https://github.com/BOBANGA1/BAI-TAP-LON-C-NHOM-4-D24TXCN08K, chọn mục "code" và chọn "download zip".
  - 4.3. Truy vẫn vào Repositories vừa tạo ở bước 4.1 chọn "uploading an existing file" và chọn những file và folder ở trong folder(compressed zip) vừa tải xuống ở bước 4.2 kéo vào ô trước màn hình và chọn "commit changes".

- 5.Thiết lập chương trình kết nối với hệ thống.
  - 5.1. Tạo 1 folder lưu trữ Repositories vừa tạo ở bước 4.
  - 5.2. Cấu hình Git trên máy tính:
    - Gõ:
      - git config --global user.name "Tên của bạn"
      - git config --global user.email "email@gmail.com"
    - Thay "Tên của bạn" và "email@gmail.com" bằng tên và email của bạn đã dùng trên GitHub.
  - 5.3. Thiết lập Bash làm terminal mặc định trong Visual Studio Code
      - 5.3.1.Mở VS Code.
      - 5.3.2.Truy cập File > Preferences > Settings (hoặc nhấn Ctrl + ,).  
      - 5.3.3.Tìm "Terminal Integrated Default Profile".
      - 5.3.4.Chọn Git Bash (hoặc Bash) làm terminal mặc định.
   - 5.4. Truy vậy vào folder vừa tạo ở bước 5.1, click chuột phải > Git Bash
      - Gõ:
       - git init
       - git branch -M main
       - git remote add origin "URL của remote repository vừa tạo ở bước 4.1"
       - git pull origin main

- 6.Để chạy chương trình vào folder vừa tạo ở bước 5.1 và double click vào run.bat để sử dụng.

-----------------------------------------------------------------------------------------------------------------------------------------------------------
Phân công thực hiện:
Nguyễn Minh Ngọc (K24DTCN378) - Nhóm trưởng: gọi otp (gotp), main, đồng bộ git (cloud), tài khoản admin và tài khoản người dùng (account), xuất file run (run.bat), phân công công việc, viết readme.

Đào Quang Anh (K24DTCN358): xây dựng Menu, User (người dùng)

Hoàng Thị Như Quỳnh (K24DTCN383): Information (trường thông tin), mã hóa mật khẩu (Bcrypt), mã hóa chuỗi khối (blowfish), console,
-----------------------------------------------------------------------------------------------------------------------------------------------------------
Sơ lược về hệ thống:
- tài khoản của manager năm trong class Console của file header phần private dạng nhưu sau:
	- const std::un_manager = "minhngoc", (tài khoản)
	- const std::pw_manager = "minhngoc1234@" (mật khẩu)
- có thể thay đổi bằng cách thay thế "minhngoc" và "minhngoc1234@" bằng tài khoản hoặc mật khẩu khác mong muốn.

- class User kế thừa public class Information và "has-a" class Account
- class Console "has-a" class User, chứa tài khoản của manager và dùng để thực hiện các năng hệ thống.
- namespace Cloud dùng để sử dụng để sao lưu và phục hồi dữ liệu hệ thống trên GitHub
- namespace gotp dùng để tạo, hiện thị và xác thực OTP.
- namespace Menu dùng để hiện thị các chức năng hệ thống.
- một file main.cpp dùng để chạy chương trình khi double click vào run.bat
- các file còn lại trừ folder thư viện băm kiểu brcypt cho mật khẩu (thư viện này tải bên ngoài về).
- 1 folder data:
	- folder: store_information: lưu trữ đối tượng class Information(với tên file là "user_name" của class Account)
	- folder: store_password: lưu trữ mật khẩu(với tên file là "user_name" của class Account)
	- folder: store_walet: lưu trữ tiền(với tên file là "ID" của class Information) và trong này lưu trữ ví tổng (tên là "total_wallet.txt") sẽ trích ra radom từ 0 - > giá trị lớn nhất 	của kiểu dữ liệu unsigned short.
	- folder: user_transaction_history: lưu trữ lịch sử giao dịch của từng người dùng (với tên file là "ID" của class Information)
	- file: transaction_log : lưu trữ lịch sử giao dịch của hệ thống.
- mọi thay đổi điều được sao lưu và khi gặp lỗi thì lỗi hệ thống sẽ tự restore.
- hệ thống này chưa được tối ưu về mặt thuật toán và bộ nhớ nên sẽ có đôi lúc khá chậm.

Logic hệ thống: 
![Drawing1](https://github.com/user-attachments/assets/7b1797b9-9872-4b74-958a-8d1229292b39)

Mô tả chương trình:
Các chức năng chính của chương trình bao gồm:
•	Tạo mới tài khoản khi đăng ký: Chương trình cho phép người dùng tự nhập dữ liệu để tạo tài khoản, hoặc có thể có nhân viên quản lý tạo tài khoản hộ người dùng. 
 ![Picture1](https://github.com/user-attachments/assets/35cec559-e47c-49c1-85d2-826110f514b6)
Mật khẩu cả chữ  cả số, ký tự đặc biệt và có ít nhất 1 chữ viết hoa
•	Lưu trữ dữ liệu: Chương trình lưu trữ dữ liệu tài khoản người dùng. 
	

 ![Picture2](https://github.com/user-attachments/assets/d57d7e9e-66f9-4de9-a7a7-7ec92145f6aa)
![Picture3](https://github.com/user-attachments/assets/1f6b88e7-19e0-4292-85f2-8fb5d082c2a4)
![Picture4](https://github.com/user-attachments/assets/8921583a-0177-48b4-828d-fc8353ae7e71)

 
 
•	Quản lý đăng nhập:
o	Thay đổi mật khẩu: Người dùng có thể tự thay đổi mật khẩu đăng nhập. Hệ thống cũng kiểm tra và yêu cầu người dùng thay đổi mật khẩu tự sinh trong lần đăng nhập đầu tiên. 
o	![Picture5](https://github.com/user-attachments/assets/d33e597e-079b-4b58-9b82-beb3959ecfc1)
![Picture6](https://github.com/user-attachments/assets/08b319e8-ffb2-4235-9ca9-ad965506107a)
   
o	OTP (One Time Password): Sử dụng OTP để xác thực các hoạt động thay đổi thông tin quan trọng và giao dịch
o	. 
o	 ![Picture7](https://github.com/user-attachments/assets/8415751e-e604-40f8-9935-37934657f91f)
![Picture8](https://github.com/user-attachments/assets/9ac2d3a4-d77e-479a-86c4-b5931092a4fa)
![Picture9](https://github.com/user-attachments/assets/6c68d091-00ad-4cc4-912a-38f98bcb6fa0)

o	Đăng nhập: Xác thực thông tin đăng nhập của người dùng và cho phép truy cập hệ thống 
o	Nếu đăng nhập hợp lệ 
o	![Picture12](https://github.com/user-attachments/assets/767e4a08-65ce-4299-ace1-3fb31d8310f9)

o	Nếu không hợp lệ
o	
![Picture11](https://github.com/user-attachments/assets/5e9c6351-04f2-4c04-8c19-5746aac1de07)

•	Quản lý hoạt động ví:
o	Quản lý số điểm (ví) và các giao dịch trao đổi, chuyển điểm giữa các ví. 
o	![Picture14](https://github.com/user-attachments/assets/05871379-7269-4940-aa63-d1b1ab3b64b7)

o	Mỗi ví có một mã số định danh duy nhất. 
o	Có ví tổng là nguồn sinh ra điểm cho toàn hệ thống. 
o	Thực hiện giao dịch chuyển điểm giữa các ví một cách an toàn (atomic). 
![Picture13](https://github.com/user-attachments/assets/2e932f55-1734-4327-b1b2-098704228b96)

o	Ghi nhận lịch sử giao dịch. 
•	Báo cáo: Cho phép người dùng theo dõi số dư, lịch sử giao dịch và trạng thái giao dịch. 
![lich su](https://github.com/user-attachments/assets/83e2d4a5-4b20-4cce-a3cd-83fb052af0e8)
Phân chia người dùng và chức năng:
•	Người dùng thông thường: Được phép truy xuất và điều chỉnh thông tin cá nhân của mình (tên, mật khẩu,...). 
•	Người dùng quản lý: Ngoài các chức năng của người dùng thông thường, còn có thể theo dõi danh sách nhóm, tạo thêm tài khoản mới và điều chỉnh thông tin tài khoản của người dùng khác khi có yêu cầu.
![image](https://github.com/user-attachments/assets/b1dae716-0807-453a-b6a1-10e3f2bac17b)





