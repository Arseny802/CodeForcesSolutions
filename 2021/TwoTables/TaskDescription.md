B. Два стола<br>
ограничение по времени на тест2 секунды<br>
ограничение по памяти на тест256 мегабайт<br>

Рассмотрим прямоугольную комнату, стороны которой параллельны осям координат, с шириной W и высотой H, левым нижним углом в точке (0,0) и правым верхним углом в точке (W, H).

В этой комнате стоит прямоугольный стол. Стороны стола параллельны сторонам комнаты, левый нижний угол стола находится в точке (x1,y1), а правый верхний — в точке (x2,y2).

Вы хотите поставить в эту комнату еще один прямоугольный стол с шириной w и высотой h так, чтобы сторона, соответствующая ширине стола, была параллельна стороне комнаты, соответствующей ее ширине.

К сожалению, иногда невозможно поставить новый стол так, чтобы он не имел общую площадь с уже стоящим в комнате столом (столы могут касаться, но не должны иметь общей площади).

Вы не можете поворачивать столы, но вы можете перемещать первый стол внутри комнаты.

Пример перемещения первого стола в комнате.
На какое минимальное расстояние нужно сдвинуть первый стол так, чтобы в комнату можно было поставить второй стол?

Входные данные
В первой строке задано одно целое число t (1≤t≤5000) — количество наборов входных данных.

В первой строке набора входных данных заданы два целых числа W и H (1≤W,H≤108) — ширина и высота комнаты.

Во второй строке набора входных данных заданы четыре целых числа x1, y1, x2 и y2 (0≤x1<x2≤W; 0≤y1<y2≤H) — координаты углов первого стола.

В третьей строке набора входных данных заданы два целых числа w и h (1≤w≤W; 1≤h≤H) — ширина и высота второго стола.

Выходные данные
Для каждого набора входных данных выведите минимальное расстояние, на которое нужно передвинуть первый стол, или −1, если в любом случае не получится поставить в комнату второй стол.

Ваш ответ будет засчитан как правильный, если его абсолютная или относительная ошибка относительно правильного ответа не превосходит 10−6.

Пример<br>
входные данные<br>
5 <br>
8 5<br>
2 1 7 4<br>
4 2<br>
5 4<br>
2 2 5 4<br>
3 3<br>
1 8<br>
0 3 1 6<br>
1 5<br>
8 1<br>
3 0 6 1<br>
5 1<br>
8 10<br>
4 5 7 8<br>
8 5<br>

выходные данные<br>
1.000000000<br>
-1<br>
2.000000000<br>
2.000000000<br>
0.000000000<br>


Примечание

Стартовая конфигурация первого набора входных данных примера показана на картинке, но перемещение не является оптимальным. Оптимально будет, например, сместить первый стол на вектор (0,−1), чтобы левый нижний угол сместился с (2,1) на (2,0). Тогда второй стол можно поставить по координатам (0,3)−(4,5).

Во втором наборе входных данных невозможно поставить второй стол в комнату, как бы мы ни перемещали первый.

В третьем наборе входных данных можно сместить стол на вектор (0,2), чтобы левый нижний угол переместился из (0,3) в (0,5).