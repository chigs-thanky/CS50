from PIL import Image, ImageFilter

img = Image.open("friends.jpg")
process = img.filter(ImageFilter.FIND_EDGES)
process.save("friends_sketch.jpg")