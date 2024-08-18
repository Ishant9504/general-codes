import java.io.*;
class Stack{
    private int size;
    private int[] array;
    private int top;

    Stack(int size){
        this.size=size;
        array=new int[size];
        top=-1;
    }
    public void push(int num){
        if(top==size-1){
            System.out.println("can't add item Overflow");
            return;
        }
        else{
            array[++top]=num;
        }
    }
    public int pop(){
        if(top==-1){
            System.out.println("Stack empty can't pop");
            return -1;
        }
        else{
            return array[top--];
        }
    }

}