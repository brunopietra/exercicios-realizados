function calcular(){
    
    let numero = document.getElementById("valor").value

    var num = numero

    var resposta


    
    var cem = 0, cinquenta=0, vinte=0, dez=0, cinco=0, 
    dois=0, um=0;

    if(numero > 0 && numero < 10001){
        
        resposta = '<div id="resposta">'

        while(num >= 100){
            num -= 100
            cem++
        }
        if(cem > 0){
            resposta += 
            '<p>Notas de 100: ' + cem + '</p>'
        }

        while(num >= 50){
            num -= 50
            cinquenta++
        }
        if(cinquenta > 0){
            resposta += 
            '<p>Notas de 50: ' + cinquenta + '</p>'
        }

        while(num >= 20){
            num -= 20
            vinte++
        }
        if(vinte > 0){
            resposta += 
            '<p>Notas de 20: ' + vinte + '</p>'
        }

        while(num >= 10){
            num -= 10
            dez++
        }
        if(dez > 0){
            resposta += 
            '<p>Notas de 10: ' + dez + '</p>'
        }

        while(num >= 5){
            num -= 5
            cinco++
        }
        if(cinco > 0){
            resposta += 
            '<p>Notas de 5: ' + cinco + '</p>'
        }

        while(num >= 2){
            num -= 2
            dois++
        }
        if(dois > 0){
            resposta += 
            '<p>Notas de 2: ' + dois + '</p>'
        }

        while(num >= 1){
            num -= 1
            um++
        }
        if(um > 0){
            resposta += 
            '<p>Moeda de 1: ' + um + '</p>'
        }
        

        resposta += '</div>'

        document.getElementById("espResp").innerHTML = resposta
        
    }
    

}