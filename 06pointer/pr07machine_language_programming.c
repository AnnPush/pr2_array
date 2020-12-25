//Напишите цикл (прерываемый вводом контрольного значения) для ввода 10 положительных чисел, вычисления суммы этих чисел и ее вывода.
00     +1008    Ввод А
01     +2008    Загрузка А в аккумулятор
02     +4106    Если отрицательное, то перейти в 06
03     +3009    Прибавить 09
04     +2109    Выгрузить в 09
05     +4000    Перейти в 00
06     +1109    Вывод 09
07     +4300    Останов
08     +0000    Переменная А
09     +0000    Переменная В

//Используя, управляемый счетчиком цикл, введите 7 чисел, положительных и отрицательных, а затем вычислите и выведите их среднее значение


00       7       Содержит данные (число 7)  
01       7       Содержит данные (число 7)  
02       7       Содержит данные (число 1)  
03     +1017     Ввод А
04     +2017     Загрузка А в аккумулятор
05     +3018     Прибавить В
06     +2118     Выгрузить в В
07     +2001     Из 01(7) в аккумулятор
08     +3102     Вычесть (01-02) 
09     +2101     Выгрузить в 01
10     +4212     Переход к 12, если в аккумуляторе 0
11     +4003     Переход в 03
12     +2018     Поместить в аккумулятор В
13     +3200     Поделить 18/00 = В/7
14     +2117     Записать в 17
15     +1117     Вывод 17
16     +4300     Останов
17     +0000     Переменная А
18     +0000     Переменная В

//Введите ряд чисел, определите большее среди них и выведите найденное значение. В первом вводимом числе указывается количество чисел, которые должны быть обработаны

00     +1000     Ввод числа n (количество чисел, которые должны быть обработаны)
01       1       Данные(число 1)
02     +2000     Загрузка 00 в аккумулятор  
03     +2117     Выгрузка в 17 С(результат)
04     +2000     Загрузка 00 в аккумулятор
05     +3101     Вычесть (00 - 01) в аккумулятор
06     +2100     Выгрузка в 00
07     +4214     Переход к 14, если в аккумуляторе 0
08     +1018     Ввод А
09     +2018     Загрузка А в аккумулятор
10     +3117     Вычесть(А-17)
11     +4104     Если отрицательное, то перейти в 04
12     +2018     Загрузка А в аккумулятор
13     +4003     Переход в 03
14     +2017     Загрузка 17 в аккумулятор  
15     +1117     Вывод 17 С(результат)
16     +4300     Останов
17     +0000     Переменная C(результат)
18     +0000     Переменная А
