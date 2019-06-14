/*Máscara do número de telefone*/
$(document).ready(function(){
  $('#numeroTelefone').mask('(99) 99999-9999');
});

/*Faz a validação dos campos de senha*/
var senha1 = null, senha2 = null;

var aoSair = function(){
  senha1 = document.getElementById("primeiraSenha").value;
  matchTest(senha1,senha2);
}

var aoSair2 = function(){
  senha2 = document.getElementById("segundaSenha").value;
  matchTest(senha1,senha2);
}

$('#formulario').submit(function() {
    if (senha1 != senha2 || senha1 === null || senha2 === null){
      document.getElementById('primeiraSenha').style.border = "1px solid rgba(188, 51, 51, 0.83)";
      document.getElementById('segundaSenha').style.border = "1px solid rgba(188, 51, 51, 0.83)";
      return false;
    }
});

var matchTest = function(senha1, senha2){
  if(senha1 != senha2){
    document.getElementById('primeiraSenha').style.border = "1px solid rgba(188, 51, 51, 0.83)";
    document.getElementById('segundaSenha').style.border = "1px solid rgba(188, 51, 51, 0.83)";
  } else if (senha1 === senha2) {
    document.getElementById('primeiraSenha').style.border = "1px solid #C0C0C0";
    document.getElementById('segundaSenha').style.border = "1px solid #C0C0C0";
  }
}
