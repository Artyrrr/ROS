# ROS

В папке dev_ws содержатся пакеты/программы написанные на Windows 10, скомпилированные с помощью colcon, поэтому некоторые компоненты для систем Linux могут отличаться.

Краткая инструкция по компиляции и запуску пакетов на Windows 10.
Python:
1. Зайти в корень: cd \dev_ws
2. "Компиляция": colcon build --merge-install
ИЛИ конкретного пакета, а не всех: colcon build --packages-select имя_пакета --merge-install
3. Открыть новую командную строку и ввести call install/local_setup.bat
4. Запустить пакет: ros2 run имя_пакета my_node
*при смене имени пакета, нужно поменять имя в package.xml, setup.py, setup.cfg, в файле в папке resource в папке пакета и поменять название всех остальных папок (если требуется)

C++:
1. Зайти в корень: cd \dev_ws
2. "Компиляция" colcon build --merge-install
ИЛИ конкретного пакета, а не всех: colcon build --packages-select имя_пакета --merge-install
3. Открыть новую командную строку и ввести: call install/local_setup.bat
4. Запустить пакет: ros2 run имя_пакета my_node
*при смене имени пакета, нужно поменять имя в package.xml и CMakeLists.txt
