function clicarBotao(x)
{
    document.getElementById('resultado').innerText += x
    
}

function zerar()
{
    document.getElementById('resultado').innerText = ''
}

function apagar()
{
    let resultado = document.getElementById('resultado').innerHTML
    document.getElementById('resultado').innerHTML = resultado.substring(0, resultado.length - 1)
}

function clicarBotaoOperador(y){
    //Essa funcao foi criada, especificamente, para q variaveis diferentes de numero nao ficassem uma do lado da outra
    let resultado = document.getElementById('resultado').innerHTML

    if(resultado.substr(- 1, 1) == '/' || resultado.substr(- 1, 1) == '*' || resultado.substr(- 1, 1) == '-'
    || resultado.substr(- 1, 1) == '+' || resultado.substr(- 1, 1) == '.'){
        document.getElementById('resultado').innerHTML = resultado.substring(0, resultado.length - 1) + y

    }
    else{
        document.getElementById('resultado').innerHTML = resultado + y

    }
}

function calcular()
{
    let resultado = document.getElementById('resultado').innerHTML
    
    if(resultado){
        document.getElementById('resultado').innerHTML = eval(resultado)
    }
    else{
        document.getElementById('resultado').innerHTML = ''
    }
}