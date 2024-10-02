#include "sim.h"

#define RED    0xFFFF0000
#define BLACK  0x00000000
#define WHITE  0xFFFFFFFF
#define NUM_PARTICLES 100

void app() {

    // Массивы для хранения позиций, размеров и цветов частиц
    int particle_x[NUM_PARTICLES];
    int particle_y[NUM_PARTICLES];
    int particle_size[NUM_PARTICLES];
    int particle_color[NUM_PARTICLES];

    // Инициализация свойств частиц
    for (int i = 0; i < NUM_PARTICLES; i = i + 1) {
        // Установка случайной позиции по оси X в пределах ширины экрана
        particle_x[i] = simRand() % SIM_X_SIZE;
        // Установка случайной позиции по оси Y в пределах высоты экрана
        particle_y[i] = simRand() % SIM_Y_SIZE;
        // Установка случайного размера от 1 до 5
        particle_size[i] = (simRand() % 5) + 1;
        // Установка случайного цвета (ARGB формат, полный альфа-канал)
        particle_color[i] = (simRand() % 0xFFFFFF) + 0xFF000000;
    }

    // Главный цикл
    while (1) {
        
        // Обновление и отрисовка каждой частицы
        for (int i = 0; i < NUM_PARTICLES; i = i + 1) {
            // Перемещение частицы вниз на 1 пиксель
            particle_y[i] = particle_y[i] + 1;

            // Если частица выходит за нижний край экрана, сбросить ее наверх
            if (particle_y[i] > SIM_Y_SIZE) {
                particle_y[i] = 0;
                // Сбросить позицию по оси X для большей случайности
                particle_x[i] = simRand() % SIM_X_SIZE;
                // Сбросить размер и цвет частицы
                particle_size[i] = (simRand() % 5) + 1;
                particle_color[i] = (simRand() % 0xFFFFFF) + 0xFF000000;
            }

            // Отрисовка частицы на экране
            // Рисуем квадрат размером particle_size[i] x particle_size[i]
            for (int j = 0; j < particle_size[i]; j = j + 1) {
                for (int k = 0; k < particle_size[i]; k = k + 1) {
                    int x = particle_x[i] + j;
                    int y = particle_y[i] + k;
                    // Проверка границ экрана
                    if (x >= 0 && x < SIM_X_SIZE && y >= 0 && y < SIM_Y_SIZE) {
                        simPutPixel(x, y, particle_color[i]);
                    }
                }
            }
        }

        // Опциональная задержка для контроля скорости симуляции
        // Если доступна функция задержки, например delay(10);
        simFlush();
        simClear();
    }
}