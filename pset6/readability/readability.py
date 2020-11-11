from cs50 import get_string

text = get_string("Text: ")

letters = words = sents = 0

for c in text:
    if c.isalpha():
        letters += 1
    if c.isspace():
        words += 1
    if c in ['?', '!', '.']:
        sents += 1

#e.g "Hello World!" is 2 words but there is only 1 space
#Thus, added 1 extra to words
words += 1

L = (letters / words) * 100
S = (sents / words) * 100


index = int(round(0.0588 * L - 0.296 * S - 15.8))

if index < 1:
    print("Before grade 1")
elif index >= 16:
    print("Grade 16+")
else:
    print(f"Grade {index}")