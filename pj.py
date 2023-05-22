# import requests
# from bs4 import BeautifulSoup

# r = requests.get('https://chat.openai.com/chat')
# print(r.url)
# print(r.status_code)

# soup = BeautifulSoup(r.content, 'html.parser')
# print(soup.prettify())


import phonenumbers
from phonenumbers import geocoder

phone_number1 = phonenumbers.parse("+917389837625")

print("\n Phone number location \n")
print(geocoder.description_for_number(phone_number1,"en"))