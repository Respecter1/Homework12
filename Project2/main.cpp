		/*
				2. �����: �� ����������� � ���������� ����������� ��� ?	
		*/

class Shape {};//�������

class Rectangle : public Shape {};//��������

void SomeFunction(Shape& shape) {}//������� �������� (&)

int main() {
    Shape* pRect = new Rectangle; // ��� � ������� �ᒺ�� ����� Rectangle �� ��������� �������� pRect ��� �ᒺ����.��� ��������� 
    SomeFunction(*pRect); // �������� ��'���� �� ����������

   
    delete pRect; // ��������� ���������� ��'���� ��� ��������� ������ ���'��
    return 0;
}
