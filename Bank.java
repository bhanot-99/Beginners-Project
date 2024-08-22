package bank;

class Account{

    public String name;
    protected String email;
    private String password;

    // getter and setter;
    public String getpassword(){
        return this.password;
    }
    public void setPassword(String pass){
        this.password = pass;
    }
}

public class Bank {
    public static void main(String[] args) {
        Account account = new Account();
        account.name = "Jatin Bhanot";
        account.email = "bhanot1054@gmail.com";
        //account.password = "heelefw";

        account.setPassword("this is password");
        System.out.println(account.getpassword());
    }
}
