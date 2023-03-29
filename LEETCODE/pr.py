f = open('data.txt')

def create_word_dict():
    word_dict = dict()
    for line in f:
        word = line.strip()
        word_dict[word] = word
    return word_dict