from PIL import Image

r = 70
def name(color):
    a, b, c = color
    max=a
    if(b>max):
        max =b
    if(c>max):
        max =c
    if(c-a>=50 or c-b>=50):
        return "woter"
    elif (a>=135 and a<=165 and b>=105 and b<=130 and c<95):
        return "woter"
    elif(max>209 and max-b<=r and max-c<=r):
        return "woter"
    elif(max<=100 and max-b<=r and max-c<=r):
        return "wet"
    elif(max<=209 and max-b<=r and max-c<=r):
        return "woter"
    else:
        return "isn't"
def imposition(img1,img2):
    im1 = img1
    im2 = img2
    im1.paste(im2, (j,i), im2) # Последний параметр — альфаканал, используемый для наложения

def get_main_color(img):
    colors = img.getcolors(25600) #put a higher value if there are many colors in your image
    max_occurence, most_present = 0, 0
    try:
        for c in colors:
            if c[0] > max_occurence:
                (max_occurence, most_present) = c
        return most_present
    except TypeError:
        raise Exception("Too many colors in the image")
print("Програма визначає які ділянки потрібно полити")

name_of_picture = input("Введіть шлях до картинки: ")
if name_of_picture is '':
    name_of_picture = "image.jpg"
    print(name_of_picture)

try:
    img=Image.open(name_of_picture)
except FileNotFoundError:
    img=Image.open("image.jpg")

#todo if too big resize
img = img.resize((1000,500), Image.ANTIALIAS)
imgwidth, imgheight = img.size

amount = 1;
width, length = 100, 50
img2 = Image.open("kapli.png")
img2 = img2.resize((width,length), Image.ANTIALIAS)
img2.save("kapli_save.png")

for i in range(0,imgheight,length):
    for j in range(0,imgwidth,width):
        if j+width > imgwidth:
            w = imgwidth
        else:
            w = j+width
        if i+length > imgheight:
            h = imgheight
        else:
            h = i+length
        
        #img.crop((j, i, w, h)).save("images/file"+str(amount)+".png")
        cropimages=img.crop((j, i, w, h))
        color = get_main_color(cropimages)
        imagename=name(color)
        if(imagename=="woter"):
            imposition(img,img2)
        #cropimages.save("images/"+str(amount)+str(imagename)+str(color)+".png")
        amount=amount+1
#print(amount)
img.save("Save.jpg")

