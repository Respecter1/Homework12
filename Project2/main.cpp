		/*
				2. Жучки: що неправильно у наступному програмному коді ?	
		*/

class Shape {};//базовий

class Rectangle : public Shape {};//наслідник

void SomeFunction(Shape& shape) {}//добавив аперсант (&)

int main() {
    Shape* pRect = new Rectangle; // тут я створюю об’єкт класу Rectangle та ініціалізую вказівник pRect цим об’єктом.Все правильно 
    SomeFunction(*pRect); // передача об'єкта за посиланням

   
    delete pRect; // Видалення створеного об'єкта для уникнення витоку пам'яті
    return 0;
}
