


def media(lista):
    """Calcula a média dos números pertencetes a lista

    Args:
        lista (list): Lista contendo números

    Returns:
        float: Média dos números da lista
    """
    soma = 0
    for i in lista:
        soma = soma + i
        
    return soma / len(lista)


def maximo(lista):
    """Retorna o maior número pertencente a lista

    Args:
        lista (list): Lista contendo números

    Returns:
        int/float: Maior número pertencente a lista
    """

    max = -2205654654
    
    for i in lista:
        if i > max:
            max = i
    
    return max