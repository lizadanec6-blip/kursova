
  /*  #include <SFML/Graphics.hpp>

  1.Створення вікна: RenderWindow дозволяє створювати вікно з заданими розмірами та налаштуваннями.
  2.Поділ на кадри: RenderWindow надає можливість відділення малювання від відображення. 
    Кожний кадр може бути малюваний окремо та відображений на вікні з викликом функції display().
  3.Керування курсором миші та фокусом: RenderWindow дозволяє 
    змінювати положення курсору миші на вікні та забирати/надавати фокус вікну.
  4.Закриття вікна: Метод close() дозволяє програмно закрити вікно.
  5.Отримання розмірів вікна: Методи getSize() та getSize().x / getSize().y дозволяють отримувати розмір вікна.

  */

/*
#include <SFML/Graphics.hpp>

int main() {
    // Створення вікна з розміром 800x600 та назвою "Моя програма"
    sf::RenderWindow window(sf::VideoMode(800, 600), "my window");
    
    // Основний цикл програми
    while (window.isOpen()) {
        // Обробка подій
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Очищення вікна (робимо фон чорним)
        window.clear(sf::Color::Black);

        // Малюємо графіку

        // Відображення вікна
        window.display();
    }

    return 0;
}
*/


/*
#include <SFML/Graphics.hpp>

int main() {
    // Створення вікна
    sf::RenderWindow window(sf::VideoMode(800, 600), "Малювання фігур");

    // Основний цикл програми
    while (window.isOpen()) {
        // Обробка подій
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Очищення вікна (фон чорний)
        window.clear(sf::Color::Black);

        // Малювання фігур
        // Створення прямокутника
        sf::RectangleShape rectangle(sf::Vector2f(100, 50));
        rectangle.setFillColor(sf::Color::Red);
        rectangle.setPosition(100, 100);
        window.draw(rectangle);
       

        // Створення кола
        sf::CircleShape circle(50);
        circle.setFillColor(sf::Color::Green);
        circle.setPosition(300, 100);
        window.draw(circle);

        // Малювання лінії
        sf::Vertex line[] = {
            sf::Vertex(sf::Vector2f(500, 100), sf::Color::Blue),
            sf::Vertex(sf::Vector2f(700, 100), sf::Color::Green)
        };
        window.draw(line, 2, sf::Lines);

        // Відображення вікна
        window.display();
    }

    return 0;
}
*/


/*
#include <SFML/Graphics.hpp>

using namespace sf; // підключаємо простір імен sf

int main()
{
    // створ.ємо вікно
    RenderWindow window(VideoMode(500, 200), "SFML Works!");

    // головний цикл, виконується поки відкрите вікно
    while (window.isOpen())
    {
        // опрацьовуємо чергу операцій в циклі
        Event event;
        while (window.pollEvent(event))
        {
            // якщо натиснули хрестик, закрити вікно?
            if (event.type == Event::Closed)
                window.close(); // тоді закриваємо
        }
        // Встановлення кольору фону
        window.clear(Color(250, 220, 250, 0));

        // Створюємо кого радіусом 50
        CircleShape circle(50.f);
        circle.setFillColor(Color(230, 0, 230)); // замальовуємо коло 
        circle.setOutlineThickness(15.f); // встановлення товщини кола
        circle.setOutlineColor(Color(80, 220, 50)); // встановлення кольору контуру
        circle.move(15, 15); // змінюємор позицюю кола
        window.draw(circle); // промальовуємо коло

        // Створюємо трикутник
        CircleShape triangle(65.f, 3);
        triangle.setPosition(125, 0); // всттновити позицію з початку
        triangle.setFillColor(Color::Blue); // встановелння кольору
        window.draw(triangle); // промальовуємо 

        // Створити квадрал
        CircleShape square(60.f,4);
        square.setPosition(250, 0); // встановлюємо позицію від трикутника
        square.setFillColor(Color::Red); // колір
        window.draw(square); // промальовуємо

        // створюємо октагон
        CircleShape octagon(60.f, 8);
        octagon.setPosition(380, 0); // встановлюємо позицію від квадрату
        octagon.setFillColor(Color::Cyan); // колір "бірюза"
        window.draw(octagon); // промальовуємо

        // промальовуємо вікно
        window.display();
    }

    return 0;
}*/
/*
#include <SFML/Graphics.hpp>
 
using namespace sf;
 
int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(750, 300), "SFML Works!");
 
	// Главный цикл приложения: выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем события в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		// Установка цвета фона - белый
		window.clear(Color::White);
 
		// Создаем переменную текстуры
		Texture texture;
 
		// Подгружаем нашу текстуру из файла texture.png
		texture.loadFromFile("C:\\Users\\Zver\\source\\repos\\graphics\\Debug\\texture.png");
        //texture.loadFromFile("C:\\Program Files (x86)\\Microsoft Visual Studio\\SFML-2.5.1\\include\\123123123213123123.png");
                             
 
		// Создаем 7 спрайтов для примера
		Sprite sprite1(texture);
		Sprite sprite2(texture);
		Sprite sprite3(texture);
		Sprite sprite4(texture);
		Sprite sprite5(texture);
		Sprite sprite6(texture);
		Sprite sprite7(texture);
		
		// Первый спрайт остается на месте в качестве образца
 
		// Сдвигаем второй спрайт вправо на 105 пикселей
		sprite2.move(105, 0);
		// Устанавливаем ему цвет - зеленый
		sprite2.setColor(Color::Green);
		
		// Сдвигаем третий спрайт вправо на 210 пикселей
		sprite3.move(210, 0);
		// Устанавливаем ему цвет - красный
		sprite3.setColor(Color::Red);
 
		// Сдвигаем четвертый спрайт вправо на 315 пикселей
		sprite4.move(315, 0);
		// Устанавливаем ему цвет - желтый
		sprite4.setColor(Color::Yellow);
 
		// Сдвигаем пятый спрайт вправо на 420 пикселей
		sprite5.move(420, 0);
		// Устанавливаем ему цвет – белый + прозрачность 128
		sprite5.setColor(Color(255, 255, 255, 128));
 
		// Сдвигаем шестой спрайт вправо на 525 пикселей
		sprite6.move(525, 0);
		// Устанавливаем ему цвет – белый + прозрачность 64
		sprite6.setColor(Color(255, 255, 255, 64));
 
		// Сдвигаем седьмой спрайт вправо на 630 пикселей
		sprite7.move(630, 0);
		// Устанавливаем ему цвет – белый + прозрачность 32
		sprite7.setColor(Color(255, 255, 255, 32));
		
        // Отрисовка всех спрайтов	
		window.draw(sprite1);
		window.draw(sprite2);
		window.draw(sprite3);
		window.draw(sprite4);
		window.draw(sprite5);
		window.draw(sprite6);
		window.draw(sprite7);
		
        // Отрисовка окна
		window.display();
	}
 
	return 0;
}
*/

//анімація
/*
#include <SFML/Graphics.hpp>

int main() {
    // Створення вікна
    sf::RenderWindow window(sf::VideoMode(800, 600), "Анімація руху фігури");

    // Координати фігури
    float x = 100;
    float y = 100;

    // Основний цикл програми
    while (window.isOpen()) {
        // Обробка подій
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Зміна позиції фігури
        x += 0.1f; // Змінюємо позицію по осі X на 0.1 пікселя на кадр
        y += 0.1f; // Змінюємо позицію по осі Y на 0.1 пікселя на кадр

        // Очищення вікна (фон білий)
        window.clear(sf::Color::White);

        // Малювання фігури (коло)
        sf::CircleShape shape(50);
        shape.setFillColor(sf::Color::Red);
        shape.setPosition(x, y);
        window.draw(shape);

        // Відображення вікна
        window.display();
    }

    return 0;
}*/
// зміна кольору при анімації
/*
#include <SFML/Graphics.hpp>

int main() {
    // Створення вікна
    sf::RenderWindow window(sf::VideoMode(800, 600), "Анімація руху та зміна кольору фігури");

    // Координати та швидкість руху фігури
    float x = 100;
    float y = 100;
    float speed = 0.1f;

    // Змінні для збереження кольору фігури
    int red = 255;
    int green = 0;
    int blue = 0;

    // Основний цикл програми
    while (window.isOpen()) {
        // Обробка подій
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Зміна позиції фігури
        x += speed;
        y += speed;

        // Зміна кольору фігури
        red -= 1;
        green += 1;
        blue += 2;

        if (red < 0) red = 255;
        if (green > 255) green = 0;
        if (blue > 255) blue = 0;

        // Очищення вікна (фон білий)
        window.clear(sf::Color::White);

        // Малювання фігури (кола)
        sf::CircleShape shape(50);
        shape.setFillColor(sf::Color(red, green, blue)); // Змінюємо колір фігури
        shape.setPosition(x, y);
        window.draw(shape);

        // Відображення вікна
        window.display();
    }

    return 0;
}
*/
//малюємо шахову дошку
/*
#include <SFML/Graphics.hpp>

int main() {
    // Розмір клітини
    const int cellSize = 70;

    // Створення вікна
    sf::RenderWindow window(sf::VideoMode(cellSize * 8, cellSize * 8), "Шахова дошка");

    // Очищення вікна (фон білий)
    window.clear(sf::Color::White);

    // Малювання шахової дошки
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            sf::RectangleShape cell(sf::Vector2f(cellSize, cellSize));
            cell.setPosition(col * cellSize, row * cellSize);

            // Чергуємо кольори клітин
            if ((row + col) % 2 == 0)
                cell.setFillColor(sf::Color::White);
            else
                cell.setFillColor(sf::Color::Black);

            window.draw(cell);
        }
    }

    // Відображення вікна
    window.display();

    // Очікування закриття вікна
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return 0;
}
*/
// рух фігури при натисканні на клавішу
/*
#include <SFML/Graphics.hpp>

int main() {
    // Розміри вікна
    const int windowWidth = 800;
    const int windowHeight = 600;

    // Розміри та положення фігури
    const float rectWidth = 100;
    const float rectHeight = 50;
    float rectX = windowWidth / 2.0f;
    float rectY = windowHeight / 2.0f;

    // Швидкість переміщення фігури
    const float moveSpeed = 50.0f;

    // Створення вікна
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Рух фігури за допомогою клавіш");

    // Фігура
    sf::RectangleShape rectangle(sf::Vector2f(rectWidth, rectHeight));
    rectangle.setFillColor(sf::Color::Red);

    // Головний цикл програми
    while (window.isOpen()) {
        // Обробка подій
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            // Переміщення фігури за допомогою стрілок
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Left)
                    rectX -= moveSpeed;
                else if (event.key.code == sf::Keyboard::Right)
                    rectX += moveSpeed;
                else if (event.key.code == sf::Keyboard::Up)
                    rectY -= moveSpeed;
                else if (event.key.code == sf::Keyboard::Down)
                    rectY += moveSpeed;
            }
        }

        // Обмеження фігури в межах вікна
        if (rectX < 0) rectX = 0;
        if (rectX + rectWidth > windowWidth) rectX = windowWidth - rectWidth;
        if (rectY < 0) rectY = 0;
        if (rectY + rectHeight > windowHeight) rectY = windowHeight - rectHeight;

        // Очищення вікна (фон білий)
        window.clear(sf::Color::White);

        // Встановлення нового положення фігури
        rectangle.setPosition(rectX, rectY);

        // Малювання фігури
        window.draw(rectangle);

        // Відображення вікна
        window.display();
    }

    return 0;
}*/

//рух за допомогою миші
/*
#include <SFML/Graphics.hpp>

int main() {
    // Розміри вікна
    const int windowWidth = 800;
    const int windowHeight = 600;

    // Розміри та положення фігури
    const float rectWidth = 100;
    const float rectHeight = 50;
    float rectX = windowWidth / 2.0f;
    float rectY = windowHeight / 2.0f;

    // Створення вікна
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Рух фігури за допомогою миші");

    // Фігура (прямокутник)
    sf::RectangleShape rectangle(sf::Vector2f(rectWidth, rectHeight));
    rectangle.setFillColor(sf::Color::Red);
    rectangle.setPosition(rectX, rectY);

    // Змінна для визначення, чи відбувається переміщення фігури
    bool isDragging = false;

    // Головний цикл програми
    while (window.isOpen()) {
        // Обробка подій
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            else if (event.type == sf::Event::MouseButtonPressed) {
                // Перевірка, чи користувач натиснув на фігуру
                if (event.mouseButton.button == sf::Mouse::Left &&
                    rectangle.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y)) {
                    isDragging = true;
                }
            }
            else if (event.type == sf::Event::MouseButtonReleased) {
                // Зупинка переміщення фігури, коли користувач відпускає ліву кнопку миші
                if (event.mouseButton.button == sf::Mouse::Left) {
                    isDragging = false;
                }
            }
        }

        // Переміщення фігури за допомогою миші, якщо кнопка натиснута
        if (isDragging) {
            sf::Vector2i mousePos = sf::Mouse::getPosition(window);
            rectX = mousePos.x - rectWidth / 2;
            rectY = mousePos.y - rectHeight / 2;
            rectangle.setPosition(rectX, rectY);
        }

        // Очищення вікна (фон білий)
        window.clear(sf::Color::White);

        // Малювання фігури
        window.draw(rectangle);

        // Відображення вікна
        window.display();
    }

    return 0;
}


//зміна кольору при натискані на фігуру
/*
#include <SFML/Graphics.hpp>

int main() {
    // Розміри вікна
    const int windowWidth = 800;
    const int windowHeight = 600;

    // Розміри та положення фігури
    const float rectWidth = 100;
    const float rectHeight = 50;
    float rectX = windowWidth / 2.0f;
    float rectY = windowHeight / 2.0f;

    // Створення вікна
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Зміна коліру фігури за допомогою миші");

    // Фігура (прямокутник)
    sf::RectangleShape rectangle(sf::Vector2f(rectWidth, rectHeight));
    rectangle.setFillColor(sf::Color::Red);
    rectangle.setPosition(rectX, rectY);

    // Головний цикл програми
    while (window.isOpen()) {
        // Обробка подій
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            else if (event.type == sf::Event::MouseButtonPressed) {
                // Перевірка, чи користувач натиснув на фігуру
                if (event.mouseButton.button == sf::Mouse::Left &&
                    rectangle.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y)) {
                    // Зміна коліру фігури
                    if (rectangle.getFillColor() == sf::Color::Red)
                        rectangle.setFillColor(sf::Color::Blue);
                    else
                        rectangle.setFillColor(sf::Color::Red);
                }
            }
        }

        // Очищення вікна (фон білий)
        window.clear(sf::Color::White);

        // Малювання фігури
        window.draw(rectangle);

        // Відображення вікна
        window.display();
    }

    return 0;
}
*/

















/*
#include <SFML/Graphics.hpp>

int main() {
    // Розміри вікна
    const int windowWidth = 800;
    const int windowHeight = 600;

    // Розміри та положення фігури
    const float rectWidth = 100;
    const float rectHeight = 50;
    float rectX = windowWidth / 2.0f;
    float rectY = windowHeight / 2.0f;

    // Створення вікна
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Рух фігури за допомогою миші");

    // Фігура (прямокутник)
    sf::RectangleShape rectangle(sf::Vector2f(rectWidth, rectHeight));
    rectangle.setFillColor(sf::Color::Red);
    rectangle.setPosition(rectX, rectY);

    // Змінна для визначення, чи відбувається переміщення фігури
    bool isDragging = false;

    // Головний цикл програми
    while (window.isOpen()) {
        // Обробка подій
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            else if (event.type == sf::Event::MouseButtonPressed) {
                // Перевірка, чи користувач натиснув на фігуру
                if (event.mouseButton.button == sf::Mouse::Left &&
                    rectangle.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y)) {
                    isDragging = true;
                }
            }
            else if (event.type == sf::Event::MouseButtonReleased) {
                // Зупинка переміщення фігури, коли користувач відпускає ліву кнопку миші
                if (event.mouseButton.button == sf::Mouse::Left) {
                    isDragging = false;
                }
            }
        }

        // Переміщення фігури за допомогою миші, якщо кнопка натиснута
        if (isDragging) {
            sf::Vector2i mousePos = sf::Mouse::getPosition(window);
            rectX = mousePos.x - rectWidth / 2;
            rectY = mousePos.y - rectHeight / 2;
            rectangle.setPosition(rectX, rectY);
        }

        // Очищення вікна (фон білий)
        window.clear(sf::Color::White);

        // Малювання фігури
        window.draw(rectangle);

        // Відображення вікна
        window.display();
    }

    return 0;
}
*/











//   ПРАКТИЧНА РОБОТА ІЗ ГРАФІКОЮ????????



/*

#include <SFML/Graphics.hpp>
#include <vector>
#include <cstdlib>
#include <ctime>

sf::Color randomColor() {
    return sf::Color(rand() % 256, rand() % 256, rand() % 256);
}

int main() {
    srand(time(nullptr));

    const int windowWidth = 800;
    const int windowHeight = 600;

    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Chitire figuri");

    //4f
    std::vector<sf::RectangleShape> shapes;

    sf::RectangleShape r1({ 120, 60 });
    r1.setPosition(100, 100);
    r1.setFillColor(sf::Color::Red);

    sf::RectangleShape r2({ 150, 90 });
    r2.setPosition(300, 150);
    r2.setFillColor(sf::Color::Green);

    sf::RectangleShape r3({ 80, 120 });
    r3.setPosition(200, 350);
    r3.setFillColor(sf::Color::Blue);

    sf::RectangleShape r4({ 100, 100 });
    r4.setPosition(500, 250);
    r4.setFillColor(sf::Color::Yellow);

    shapes.push_back(r1);
    shapes.push_back(r2);
    shapes.push_back(r3);
    shapes.push_back(r4);

    // 0
    int draggingIndex = -1;
    sf::Vector2f dragOffset;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed)
                window.close();

            
            else if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {

                    sf::Vector2f mouse(event.mouseButton.x, event.mouseButton.y);

                    for (int i = 0; i < shapes.size(); i++) {
                        if (shapes[i].getGlobalBounds().contains(mouse)) {
 
                            shapes[i].setFillColor(randomColor());

                            shapes[i].setScale(
                                shapes[i].getScale().x * 1.1f,
                                shapes[i].getScale().y * 1.1f
                            );

                            draggingIndex = i;
                            dragOffset = mouse - shapes[i].getPosition();
                            break;
                        }
                    }
                }
            }

            else if (event.type == sf::Event::MouseButtonReleased) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    draggingIndex = -1;
                }
            }
        }

        if (draggingIndex != -1) {
            sf::Vector2f mouse(sf::Mouse::getPosition(window));
            shapes[draggingIndex].setPosition(mouse - dragOffset);
        }

        window.clear(sf::Color::White);

        // figuri
        for (auto& s : shapes)
            window.draw(s);

        window.display();
    }

    return 0;
}
*/





//ПРАКТИЧНА РОБОТА МАШИНКА


#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>

float length(const sf::Vector2f& v) {
    return std::sqrt(v.x * v.x + v.y * v.y);
}

sf::Vector2f normalize(const sf::Vector2f& v) {
    float len = length(v);
    if (len == 0) return { 0.f, 0.f };
    return { v.x / len, v.y / len };
}

int main()
{
    const unsigned WINDOW_W = 1000;
    const unsigned WINDOW_H = 700;
    sf::RenderWindow window(sf::VideoMode(WINDOW_W, WINDOW_H), "SUPER MEGA ELECTRO MAXIMUM ULTRA CAR");
    window.setFramerateLimit(60);

    sf::Vector2f carPos(150.f, 500.f);  
    const float carSpeed = 20.f;       
    sf::Vector2f velocity{ 0.f, 0.f };

    sf::CircleShape startPoint(18.f);
    startPoint.setFillColor(sf::Color(150, 150, 255));
    startPoint.setOrigin(startPoint.getRadius(), startPoint.getRadius());
    startPoint.setPosition(150.f, 500.f); 

    sf::CircleShape finishPoint(28.f);
    finishPoint.setFillColor(sf::Color(255, 180, 180));
    finishPoint.setOrigin(finishPoint.getRadius(), finishPoint.getRadius());
    finishPoint.setPosition(850.f, 150.f);

    sf::RectangleShape body({ 120.f, 40.f });
    body.setOrigin(body.getSize().x / 2.f, body.getSize().y / 2.f);
    sf::RectangleShape roof({ 60.f, 28.f });
    roof.setOrigin(roof.getSize().x / 2.f, roof.getSize().y / 2.f);
    sf::CircleShape wheel(14.f);
    wheel.setOrigin(wheel.getRadius(), wheel.getRadius());

    sf::Color carColor = sf::Color(222, 36, 0);
    sf::Color wheelColor = sf::Color(30, 30, 30);

    body.setFillColor(carColor);
    roof.setFillColor(sf::Color(200, 230, 255));
    wheel.setFillColor(wheelColor);

    const sf::Vector2f bodyOffset{ 0.f, 0.f };
    const sf::Vector2f roofOffset{ -5.f, -26.f };
    const sf::Vector2f wheel1Offset{ -35.f, 26.f };
    const sf::Vector2f wheel2Offset{ 35.f, 26.f };

    bool moveToMouse = false;
    sf::Vector2f mouseTarget{ 0.f, 0.f };

    bool reachedFinish = false;

    sf::Clock clock;

    while (window.isOpen()) {
        sf::Time dt = clock.restart();
        float delta = dt.asSeconds();

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    mouseTarget = window.mapPixelToCoords({ event.mouseButton.x, event.mouseButton.y });
                    moveToMouse = true;
                }
                if (event.mouseButton.button == sf::Mouse::Right) {
                    carPos = window.mapPixelToCoords({ event.mouseButton.x, event.mouseButton.y });
                    velocity = { 0.f, 0.f };
                    moveToMouse = false;
                }
            }
        }

        sf::Vector2f inputDir{ 0.f, 0.f };
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A))
            inputDir.x -= 1.f;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            inputDir.x += 1.f;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            inputDir.y -= 1.f;
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            inputDir.y += 1.f;

        if (inputDir.x != 0.f || inputDir.y != 0.f) {
            sf::Vector2f dir = normalize(inputDir);
            velocity = dir * carSpeed;
            moveToMouse = false;
        }
        else {
            if (moveToMouse) {
                sf::Vector2f toTarget = mouseTarget - carPos;
                float dist = length(toTarget);
                if (dist < 4.f) {
                    velocity = { 0.f, 0.f };
                    moveToMouse = false;
                }
                else {
                    sf::Vector2f dir = normalize(toTarget);
                    velocity = dir * carSpeed;
                }
            }
            else {
                velocity = { 0.f, 0.f };
            }
        }

        carPos += velocity * delta;

        if (carPos.x < 0.f) carPos.x = 0.f;
        if (carPos.x > (float)WINDOW_W) carPos.x = (float)WINDOW_W;
        if (carPos.y < 0.f) carPos.y = 0.f;
        if (carPos.y > (float)WINDOW_H) carPos.y = (float)WINDOW_H;
        sf::Vector2f finishCenter = finishPoint.getPosition();
        float distToFinish = length(carPos - finishCenter);
        float finishRadius = finishPoint.getRadius();

        float carRadius = 60.f;
        if (distToFinish <= finishRadius + carRadius) {
            if (!reachedFinish) {
                reachedFinish = true;
                carColor = sf::Color(0, 186, 4);
                body.setFillColor(carColor);
                wheel.setFillColor(sf::Color(20, 60, 20));
            }
        }
        else {
            if (reachedFinish) {
                reachedFinish = false;
                carColor = sf::Color(20, 60, 20);
                body.setFillColor(carColor);
                wheel.setFillColor(wheelColor);
            }
        }

        window.clear(sf::Color(245, 245, 240)); 

        sf::CircleShape finishRing(finishPoint.getRadius() + 6.f);
        finishRing.setOrigin(finishRing.getRadius(), finishRing.getRadius());
        finishRing.setPosition(finishPoint.getPosition());
        finishRing.setFillColor(sf::Color::Transparent);
        finishRing.setOutlineColor(sf::Color(200, 100, 100));
        finishRing.setOutlineThickness(3.f);

        window.draw(startPoint);
        window.draw(finishRing);
        window.draw(finishPoint);

        body.setPosition(carPos + bodyOffset);
        roof.setPosition(carPos + roofOffset);
        wheel.setPosition(carPos + wheel1Offset);
        window.draw(body);
        window.draw(roof);
        window.draw(wheel);
        sf::CircleShape wheel2 = wheel;
        wheel2.setPosition(carPos + wheel2Offset);
        window.draw(wheel2);

        static sf::Font font;
        static bool fontLoaded = false;
        if (!fontLoaded) {
            if (font.loadFromFile("C:\\Windows\\Fonts\\arial.ttf")) {
                fontLoaded = true;
            }
            else {
                fontLoaded = true;
            }
        }
        if (font.getInfo().family != "") {
            sf::Text sLabel("START", font, 20);
            sLabel.setFillColor(sf::Color::Black);
            sLabel.setPosition(startPoint.getPosition() + sf::Vector2f(-35.f, -70.f));
            window.draw(sLabel);

            sf::Text fLabel("FINISH", font, 20);
            fLabel.setFillColor(sf::Color::Black);
            fLabel.setPosition(finishPoint.getPosition() + sf::Vector2f(-30.f, -65.f));
            window.draw(fLabel);
        }

        window.display();
    }

    return 0;
}