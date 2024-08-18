#WAP to use functions to greet in different languages
def greeting(language):
    if language.lower() == 'english':
        print("Hello")
    elif language.lower() == 'spanish':
        print("Hola")
    elif language.lower() == 'french':
        print("Bonjour")
    else:
        print("Don't know how to greet in that language yet")

language = str(input("Enter the language you want to be greeted in:"))
greeting(language)   