from PIL import Image, ImageFilter

before = Image.open("Talent.jpg")
after = before.filter(ImageFilter.BoxBlur(20))
after.save("Talent_Blur.jpg")