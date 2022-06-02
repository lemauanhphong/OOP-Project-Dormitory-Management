# Xây dựng chương trình quản lý sinh viên ký túc xá đơn giản

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
        - `void setSucChua(int sucChua)`: setter của `sucChua`.
        - `vector <Phong*> getPhongTrong()`: lấy danh sách các phòng trống, dùng để xếp phòng cho sinh viên.
        - `void xepPhong(Phong* a, SinhVien x)`: Thêm có thể thêm sinh viên `x` vào phòng `a`.
        

- Xây dựng lớp `Phong` để biểu diễn phòng ở của sinh viên:

## 3. Nhận xét về chương trình:
- Chương trình đã qua được bài test cơ bản của nhóm.
- Chương trình chưa sử dụng giao diện đồ họa.
- Hướng phát triển:
    - Sử dụng đồ họa.
    - Thêm các đối tượng để đầy đủ hơn: nhân viên ký túc xá, tình hình kiểm tra các phòng, ...     
