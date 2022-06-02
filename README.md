# Xây dựng chương trình quản lý sinh viên ký túc xá đơn giản

## 0. Thông tin:
- Thành viên:
    - Nguyễn Duy Huy - 21520042 - ATTN 2021
    - Đinh Thành Phát - 21520083 - ATTN 2021
    - Lê Mậu Anh Phong - 21520087 - ATTN 2021
- Giáo viên hướng dẫn: Lương Văn Song
- Môn IT002.M21.ANTN (thực hành)

## 1. Giới thiệu:
- Chương trình quản lý sinh viên ký túc xá đơn giản với các tính năng thêm sinh viên, sửa thông tin sinh viên, xóa thông tin của sinh viên.
- Sử dụng ngôn ngữ lập trình C++, các kết quả được xử lý và viết ra console.

## 2. Ý tưởng thực hiện:
- Xây dựng lớp `KTX` để biểu diễn ký túc xá:
-   Xây dựng lớp `SinhVien` kế thừa từ lớp `Human` dể biểu diễn sinh viên:
    -   Lớp `Human`:
        -   Thuộc tính:
            -   `ten` : tên của đối tượng
            -   `id` : là số cccd hoặc cmnd
            -   `sdt` : số điện thoại liên lạc của đối tượng
        -   Phương thức: Ngoài `constructor` và `destructor` thì lớp `Human` còn có 1 số phương thức khác như:
            -   `getTen` : getter `ten` của đối tượng
            -   `setTen` : setter `ten` của đối tượng
            -   `getId` : getter `id` của đối tượng
            -   `setId` : setter `id` của dối tượng
            -   `getSdt` : getter `sdt` của đối tượng
            -   `setSdt` : setter `sdt` của đối tượng
    - Lớp `SinhVien`: kế thừa từ lớp `Human`
        -   Thuộc tính: ngoài những thuộc tính được kế thừa từ lớp `Human` thì `SinhVien` còn có những thuộc tính khác như:
            -   `mssv` : mã số sinh viên
            -   `truong` : trường học hiện tại mà sinh viên đang theo học
            -   `khoa` : khoa hiện tại mà sinh viên đang học
            -   `toa` : tòa nhà kí túc xá mà sinh viên đang ở
            -   `soPhong` : phòng ở của sinh viên trong tòa nhà đó
        -   Phương thức: ngoài những phương thức được kế thừa từ lớp `Human`, các `constructor` và `destructor` thì `SinhVien` còn có những phương thức khác như:
            -   `thongTin` : đưa ra những thông tin hiện có của sinh viên như tên, mssv, sdt, ...
            -   `getMssv` : getter `mssv` của lớp `SinhVien`
            -   `setMssv` : setter `mssv` của lớp `SinhVien`
            -   `getSoPhong` : getter `soPhong` của lớp `SinhVien`
            -   `setSoPhong` : setter `soPhong` của lớp `SinhVien`
            -   `getTruong` : getter `truong` của lớp `SinhVien`
            -   `setTruong` : setter `truong` của lớp `SinhVien`
            -   `getToa` : getter `toa` của lớp `SinhVien`
            -   `setToa` : setter `toa` của lớp `SinhVien`
            -   `getKhoa` : getter `khoa` của lớp `SinhVien`
            -   `setKhoa` : setter `khoa` của lớp `SinhVien`
- Xây dựng lớp `Toa` để biểu diễn tòa nhà bên trong ký túc xá:
    - Thuộc tính:
        - `string toa`: tên tòa nhà.
        - `vector <Phong> phong`: danh sách các phòng có trong tòa.
        - `int sucChua`: số phòng tối đa của một tòa.
    - Phương thức: Ngoài constructor và destructor ra thì lớp `Toa` có các phương thức sau:
        - `string getToa()`: getter lấy tên của tòa nhà.
        - `void setToa(string toa = "AH1")`: setter tên của tòa nhà.
        - `int getSoLuongPhong()`: trả về số lượng phòng đang được sử dụng.
        - `int getSucChua()`: getter của `sucChua`.
        - `vector <Phong>* getPhong()`: trả về con trỏ trỏ tới danh sách các phòng.
        - `void setSucChua(int sucChua)`: setter của `sucChua`.
        - `vector <Phong*> getPhongTrong()`: lấy danh sách các phòng trống, dùng để xếp phòng cho sinh viên.
        - `void xepPhong(Phong* a, SinhVien x)`: thêm sinh viên `x` vào phòng `a`.
        - `Phong* getPhongSo(int soPhong)`: trả về con trỏ trỏ tới phòng có số là `soPhong` nếu phòng đó không tồn tại hoặc không còn chỗ trống thì trả về `NULL`.
        - `bool add(int soPhong, int sucChua)`: thêm một phòng với sức chứa của phòng là `sucChua` và số của phòng là `soPhong` nếu chưa phòng nào lấy số đó. Hàm trả về `true` nếu thêm thành công và `false` nếu ngược lại.
        - `bool del(int soPhong)`: tìm trong tòa phòng có số phòng là `soPhong` và xóa nó ra khỏi tòa. Hàm trả về `true` nếu xóa thành công và `false` nếu ngược lại.
        

- Xây dựng lớp `Phong` để biểu diễn phòng ở của sinh viên:
    - Thuộc tính:
        - `int soPhong`: biểu thị số hiện của phòng.
        - `string toa`: tên tòa nhà mà phòng thuộc về.
        - `int sucChua`: số lượng sinh viên tối đa có thể ở trong phòng.
        - `vector <SinhVien> sinhVien`: danh sách sinh viên ở trong phòng.

    - Phương thức: Ngoài constructor và destructor ra lớp `Phong` còn có các phương thức sau:
        - `int getSoPhong()`: getter trả về số phòng.
        - `void setSoPhong(int soPhong = 1)`:: setter số phòng.
        - `string getToa()`: getter tên của tòa mà phòng thuộc về.
        - `void setToa(string tenToa = "lmao")`: setter gán tên của tòa mà phòng thuộc về.
        - `int getSucChua()`: getter trả về sức chứa của phòng.
        - `void setSucChua(int sucChua = 4)`: setter sức chứa của phòng.
        - `vector <SinhVien>* getSinhVien()`: trả về con trỏ trỏ tới danh sách sinh viên đang ở trong phòng.
        - `int getSoLuongSinhVien()`: trả về số lượng sinh viên đang sử dụng phòng.
        - `void del(SinhVien a)`: tìm sinh viên `a` và xóa sinh viên `a` ra khỏi phòng. Hàm trả về `true` nếu xóa thành công và `false` nếu ngược lại.
        - `void add(SinhVien a)`: thêm sinh viên `a` vào phòng nếu phòng còn chỗ trống. Hàm trả về `true` nếu thêm thành công và `false` nếu ngược lại.

## 3. Nhận xét về chương trình:
- Chương trình đã qua được bài test cơ bản của nhóm.
- Chương trình chưa sử dụng giao diện đồ họa.
- Hướng phát triển:
    - Sử dụng đồ họa.
    - Thêm các đối tượng để đầy đủ hơn: nhân viên ký túc xá, tình hình kiểm tra các phòng, ...     
