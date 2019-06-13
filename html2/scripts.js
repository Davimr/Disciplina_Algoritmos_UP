//Máscara do número de telefone
$(document).ready(function(){
  $('#numeroTelefone').mask('(99) 99999-9999');
});


var senha1 = null, senha2 = null;

var aoSair = function(){
  senha1 = document.getElementById("primeiraSenha").value;
  console.log(senha1);
  if(senha1 != senha2){
    document.getElementById('primeiraSenha').style.border = "1px solid rgba(188, 51, 51, 0.83)";
    document.getElementById('segundaSenha').style.border = "1px solid rgba(188, 51, 51, 0.83)";
  } else if (senha1 === senha2) {
    document.getElementById('primeiraSenha').style.border = "1px solid #C0C0C0";
    document.getElementById('segundaSenha').style.border = "1px solid #C0C0C0";
  }
}

var aoSair2 = function(){
  senha2 = document.getElementById("segundaSenha").value;
  console.log(senha2);
  if(senha1 != senha2){
    document.getElementById('primeiraSenha').style.border = "1px solid rgba(188, 51, 51, 0.83)";
    document.getElementById('segundaSenha').style.border = "1px solid rgba(188, 51, 51, 0.83)";
  } else if (senha1 === senha2) {
    document.getElementById('primeiraSenha').style.border = "1px solid #C0C0C0";
    document.getElementById('segundaSenha').style.border = "1px solid #C0C0C0";
  }
}

$('#formulario').submit(function() {
    if (senha1 != senha2 || senha1 === null || senha2 === null){
      document.getElementById('primeiraSenha').style.border = "1px solid rgba(188, 51, 51, 0.83)";
      document.getElementById('segundaSenha').style.border = "1px solid rgba(188, 51, 51, 0.83)";
      return false;
    }
});


var drop = function(){
  var dropinho = document.querySelector(".dropdown:hover .dropdown-content");
  console.log(dropinho);
  dropinho.style.display = "block";

}
