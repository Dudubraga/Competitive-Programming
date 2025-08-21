# Problem statement: https://www.beecrowd.com.br/judge/en/problems/view/1049
filo = input()
classe = input()
ordem = input()

if filo == 'vertebrado' and classe == 'ave':
    if ordem == 'carnivoro':
        print('aguia')
    if ordem == 'onivoro':
        print('pomba')
if filo == 'vertebrado' and classe == 'mamifero':
    if ordem == 'herbivoro':
        print('vaca')
    if ordem == 'onivoro':
        print('homem')
if filo == 'invertebrado' and classe == 'inseto':
    if ordem == 'hematofago':
        print('pulga')
    if ordem == 'herbivoro':
        print('lagarta')
if filo == 'invertebrado' and classe == 'anelideo':
    if ordem == 'hematofago':
        print('sanguessuga')
    if ordem == 'onivoro':
        print('minhoca')

