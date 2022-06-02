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
- Xây dựng lớp `SinhVien` kế thừa từ lớp `Human` để biểu diễn sinh viên:
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
        - `void xepPhong(Phong* a, SinhVien x)`: thêm có thể thêm sinh viên `x` vào phòng `a`.
        - `Phong* getPhongSo(int soPhong)`: trả về con trỏ chưa phòng có số là `soPhong` nếu phòng đó không tồn tại hoặc không còn chỗ trống thì trả về `NULL`.
        - `void add(int soPhong, int sucChua)`: thêm một phòng với sức chứa của phòng là `sucChua` và số của phòng là `soPhong` nếu chưa phòng nào lấy số đó.
        - `void del(int soPhong)`: tìm trong tòa phòng có số phòng là `soPhong` và xóa nó ra khỏi tòa.
        

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
        - `void del(SinhVien a)`: tìm sinh viên `a` và xóa sinh viên `a` ra khỏi phòng.
        - `void add(SinhVien a)`: thêm sinh viên `a` vào phòng nếu phòng còn chỗ trống.

## 3. Nhận xét về chương trình:
- Chương trình đã qua được bài test cơ bản của nhóm.
- Chương trình chưa sử dụng giao diện đồ họa.
- Hướng phát triển:
    - Sử dụng đồ họa.
    - Thêm các đối tượng để đầy đủ hơn: nhân viên ký túc xá, tình hình kiểm tra các phòng, ...     
