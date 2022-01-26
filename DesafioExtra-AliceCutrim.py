#Desafio Extra Alice Cutrim

def PriceChecker(comprados, precoPago):
    '''Funcao responsavel por verificar se os precos cobrados em uma compra de componentes eletronicos estao de acordo com o preco da 
    prateleira, retornando a quantidade de erros encontrados na compra.
List, list -> Int'''
    prateleira = ['arduino', 'servoMotor', 'potenciometro', 'LEDverm', 'LEDverd', 'resistor1', 'resistor100k']
    precoPrat = [74, 5, 1.9 , 1, 1, 0.1, 0.5]
    Erros = 0 #acumulador, guarda a quantidade de erros encontrados
    Index = 0 #contador, mantem a conta dos indices ja acessados 
    
    try:
        for item in comprados:
            IndexItem = prateleira.index(item) #acessa o indice do item da vez na prateira para em seguida verificar o preco
            if precoPago[Index] != precoPrat[IndexItem]:
                Erros += 1
                Index += 1
            else:
                Index += 1
        return Erros
    
    except ValueError: #Tratando o erro de o item nao estar na prateleira
        print(f'O item {Index+1} na lista de comprados nao corresponde a nenhum item na prateleira.')

def main():
    comprados = ['resistor100k','resistor100k', 'servoMotor', 'arduino', 'arduino', 'potenciometro', 'resistor1', 'LEDverm','LEDverm','LEDverm', 'LEDverd','LEDverd']
    precoPago = [0.7,1, 5, 100,74,2.5,0.1, 1,1,2,2,1]
    print(PriceChecker(comprados,precoPago))

if __name__=='__main__':
    main()

#OBS: Nao tratei erro de tipo (passa a funcao com um parametro, por exemplo) porque o programa apresenta uma unica instancia, entao nao faz sentido
#querer manter ele rodando visto que nao ha nenhuma acao posterior a PriceChecker
        
#Testes
#comprados = ['resistor100k','resistor100k', 'servoMotor', 'arduino','Sabonete' 'arduino', 'potenciometro', 'resistor1', 'LEDverm','LEDverm','LEDverm', 'LEDverd','LEDverd']
#precoPago = [0.7,1, 5, 100,74,2.5,0.1, 1,1,2,2,1]
# [In]: PriceChecker(comprados,precoPago)
# [Out]: O item 5 na lista de comprados nao corresponde a nenhum item na prateleira.