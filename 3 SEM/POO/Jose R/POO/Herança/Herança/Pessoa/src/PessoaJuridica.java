public class PessoaJuridica extends Pessoa {
    private String cnpj;

 public String getCnpj() {
 	return this.cnpj;
 }
 public void setCnpj(String cnpj) {
 	this.cnpj = cnpj;
 }
public PessoaJuridica(String nome, String cnpj) {
    super(nome);
    this.cnpj = cnpj;
}

    
}
