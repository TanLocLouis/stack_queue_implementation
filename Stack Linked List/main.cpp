#include "stack_linked_list.h"

int main() {
	Stack<int> s;
	Stack<int> s1;

	int option = -1;
	do {
		cout << "---------------------STACK ARRAY---------------------" << endl;
		cout << "0. Thoat chuong trinh" << endl;
		cout << "1. Khoi tao Stack" << endl;
		cout << "2. Copy Stack" << endl;
		cout << "3. Giai phong Stack" << endl;
		cout << "4. Kiem tra stack co rong hay khong" << endl;
		cout << "5. Push vao Stack" << endl;
		cout << "6. Pop khoi Stack" << endl;
		cout << "7. Lay gia tri tren cung Stack" << endl;
		cout << "8. In Stack ra man hinh" << endl;
		cout << "Nhap vao lua chon cua ban: ";
		cin >> option;
		
		switch (option) {
			case 0:
				cout << "Ket thuc chuong trinh" << endl;
				break;
			case 1: {
				s.init();
				break;
			}
			case 2: {
				s1.init();
				break;
			}
			case 3: {
				s.release();
				break;
			}
			case 4: {
				if (s.isEmpty()) {
					cout << "Stack rong" << endl;
				}
				else {
					cout << "Stack khong rong" << endl;
				}
				break;
			}
			case 5: {
				int newItem;
				cout << "Nhap vao gia tri can push: ";
				cin >> newItem;
				s.push(newItem);
				break;
			}
			case 6: {
				cout << "Gia tri pop ra khoi Stack: " << s.pop() << endl;
				break;
			}
			case 7: {
				cout << "Gia tri tren cung Stack: " << s.topValue() << endl;
				break;
			}
			case 8: {
				s.print();
				break;
			}
		}
	} while (option != 0);



	return 0;
}