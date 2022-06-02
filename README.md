# Xây dựng chương trình quản lý sinh viên ký túc xá đơn giản

## 0. Thông tin:
- Thành viên:
    - Nguyễn Duy Huy - 21520042 - ATTN 2021
    - Đinh Thành Phát - 21520083 - ATTN 2021
    - Lê Mậu Anh Phong - 21520087 - ATTN 2021
- Giáo viên hướng dẫn: Lương Văn Song
- Môn IT002.M21.ANTN (thực hành)

## 1. Giới thiệu:
- Chương trình quản lý sinh viên ký túc xá đơn giản với các tính năng sau:
    - In ra thông tin ký túc xá.
    - Sua thong tin ký túc xá.
    - In ra thông tin của tòa nhà.
    - In ra thông tin của phòng.
    - Đăng kí cho sinh viên mới.
    - Hủy đăng kí cho sinh viên chuyển đi.
- Sử dụng ngôn ngữ lập trình C++, các kết quả được xử lý và viết ra console.

## 2. Ý tưởng thực hiện:
- Cần có một lớp biểu diễn ký túc xá, ký túc xá tương tác trực tiếp với tòa nhà, tòa nhà tương tác trực tiếp với phòng ở, phòng ở sẽ tương tác trực tiếp với sinh viên.
- Xây dựng lớp `KTX` để biểu diễn ký túc xá: Ngoài những constructor, destructor, getter và setter, lớp `KTX` có một số phương thức sau:
    - Thuộc tính:
        - `string ten`: Tên của ký túc xá.
        - `string diaChi`: Địa chỉ của ký túc xá.
        - `string SDT`: Số điện thoại của ký túc xá.
        - `string email`: Email của ký túc xá.
        - `vector <Toa> toa`: Danh sách các tòa nhà của ký túc xá,
    - Phương thức:
        - `void inThongTinKTX()`: In thông tin về ký túc xá.
        - `void huyDangKySinhVien()`: Hủy đăng ký sử dụng ký túc xá cho sinh viên.
        - `void dangKySinhVien()`: Đăng ký sử dụng ký túc xá cho sinh viên.
        - `void inThongTinToa()`: In ra thông tin tòa nhà nào đó.
        - `void suaThongTinKTX()`: Sửa thông tin của ký túc xá.
        - `void inThongTinPhong()`: In ra thông tin một phòng nào đó.
- Xây dựng lớp `SinhVien` kế thừa từ lớp `Human` dể biểu diễn sinh viên:
    -   Lớp `Human`:
        -   Thuộc tính:
            -   `ten` : tên của đối tượng
            -   `id` : là số cccd hoặc cmnd
            -   `sdt` : số điện thoại liên lạc của đối tượng
        -   Phương thức: Ngoài `constructor` và `destructor` thì lớp `Human` còn có 1 số phương thức khác như:
            -   `getTen` : getter `ten` trả về tên của đối tượng
            -   `setTen` : setter `ten` thay đổi tên của của đối tượng
            -   `getId` : getter `id` trả về id của đối tượng
            -   `setId` : setter `id` thay đổi id của dối tượng
            -   `getSdt` : getter `sdt` trả về sdt của đối tượng
            -   `setSdt` : setter `sdt` thay đổi sdt của đối tượng
    - Lớp `SinhVien`: kế thừa từ lớp `Human`
        -   Thuộc tính: ngoài những thuộc tính được kế thừa từ lớp `Human` thì `SinhVien` còn có những thuộc tính khác như:
            -   `mssv` : mã số sinh viên
            -   `truong` : trường học hiện tại mà sinh viên đang theo học
            -   `khoa` : khoa hiện tại mà sinh viên đang học
            -   `toa` : tòa nhà kí túc xá mà sinh viên đang ở
            -   `soPhong` : phòng ở của sinh viên trong tòa nhà đó
        -   Phương thức: ngoài những phương thức được kế thừa từ lớp `Human`, các `constructor` và `destructor` thì `SinhVien` còn có những phương thức khác như:
            -   `thongTin` : đưa ra những thông tin hiện có của sinh viên như tên, mssv, sdt, ...
            -   `nhapThongTin` : nhập thông tin cá nhân của sinh viên bao gồm tên, mssv, sdt, ...
            -   `getMssv` : getter `mssv` trả về mssv của lớp `SinhVien`
            -   `setMssv` : setter `mssv` thay đổi mssv của lớp `SinhVien`
            -   `getSoPhong` : getter `soPhong` trả về mã số phòng của lớp `SinhVien`
            -   `setSoPhong` : setter `soPhong` thay đổi mã số phòng của lớp `SinhVien`
            -   `getTruong` : getter `truong` trả về tên trường của lớp `SinhVien`
            -   `setTruong` : setter `truong` thay đổi tên trường của lớp `SinhVien`
            -   `getToa` : getter `toa` trả về tên tòa ở của lớp `SinhVien`
            -   `setToa` : setter `toa` thay đổi tên tòa ở của lớp `SinhVien`
            -   `getKhoa` : getter `khoa` trả về khoa của của lớp `SinhVien`
            -   `setKhoa` : setter `khoa` thay đổi khoa của lớp `SinhVien`
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
        - `void inThongTinPhong()`: In ra thông tin của các phòng có trong tòa.
        - `bool isEmpty()`: Kiểm tra xem trong tòa có sinh viên nào đang ở không. Trả về `true` nếu tòa không có sinh viên nào đang ở, `false` nếu ngược lại.
        - `bool isFull()`: Kiểm tra xem tòa đã hết chỗ chưa. Trả về `true` nếu tòa đã hết chỗ, ngược lại trả về `false`.
        

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
        - `bool isEmpty()`: Kiểm tra xem trong phòng có sinh viên nào đang ở không. Trả về `true` thì phòng hiện đang không có sinh viên nào ở, `false` nếu ngược lại.
        - `bool isFull()`: Kiểm tra xem phòng đã hết chỗ chưa. Trả về  `true` nếu phòng đã hết chỗ, `false` nêu ngược lại.

## 3. Nhận xét về chương trình:
- Chương trình vẫn đang trong quá trình hoàn thiện.
- Chương trình chưa sử dụng giao diện đồ họa.
- Hướng phát triển:
    - Sử dụng đồ họa.
    - Thêm các đối tượng để đầy đủ hơn: nhân viên ký túc xá, tình hình kiểm tra các phòng, ...     
