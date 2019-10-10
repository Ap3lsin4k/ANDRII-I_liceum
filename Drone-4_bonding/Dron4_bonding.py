from PIL import Image
width, length = 1008, 1344
result=Image.new('RGB', (3*length, 3*width))

bonding_coordinates_path = input("Введiть шлях до файлу з координатами або help: ")
    
if 'help' in bonding_coordinates_path:
    print("Приклад файлу")
    print("""
img01.JPG 0 0
img02.JPG 0 1
img03.JPG 0 2
img04.JPG 1 0
img05.JPG 1 2
img06.JPG 1 3
img07.JPG 2 0
img08.JPG 2 1
img09.JPG 2 2
""")
    print("Назва файлу, його позиція у рядку, позиція у стовпчику\n")
    bonding_coordinates_path = input("Введiть шлях до файлу з координатами")

if bonding_coordinates_path is '':
    bonding_coordinates_path = 'c.txt'
    print(bonding_coordinates_path)

with open(bonding_coordinates_path) as f:
    for string in f.readlines():
        array = string.split()
        name = array[0]
        lat = int(array[1])
        long = int(array[2])
        try:
            image = Image.open(name)
            width, length = image.size
            result.paste(im=image, box=(long*width,lat*length))
        except FileNotFoundError: # if file can not be opened show message
            print("FileNotFoundError: [№2] No such file: '%s'" % name)
            print("Не знайдено файл з таким iменем: '%s'" % name)

result.save("result.JPG")
