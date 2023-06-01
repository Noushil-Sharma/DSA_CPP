public class Main implements Runnable{
    string str1,str2;
    public void run(){
        for(int i=0;i<10;i++){
            str1="welcome";
            str2="to java";
            System.out.println(str1+" "+str2+" ");
        }
    }
    public static void main(string args[]){
        Main run=new Main();
        Thread obj1 = new Thread(run);
        Thread obj2= new Thread();
        obj1.start();
        obj2.run();
    }
}