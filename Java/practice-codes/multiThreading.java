import java.util.concurrent.ArrayBlockingQueue;

class Producer implements Runnable{
    private ArrayBlockingQueue<Integer> queue;
    Producer(ArrayBlockingQueue<Integer> queue){
        this.queue=queue;
    }
    public void run(){
        try{
            for(int i=0;i<5;i++){
                queue.put(i);
                System.out.println("produced:"+i);
                Thread.sleep(100);
            }
        }
        catch(InterruptedException e){
            e.printStackTrace();
        }
    }
}
class Consumer implements Runnable{
    private ArrayBlockingQueue<Integer> queue;
    Consumer(ArrayBlockingQueue<Integer> queue){
        this.queue=queue;
    }
    public void run(){
        try{
            for(int i=0;i<5;i++){
                int value=queue.take();
                System.out.println("consumed:"+value);
                Thread.sleep(100);
            }
        }
        catch(InterruptedException e){
            e.printStackTrace();
        }
    }
}


public class multiThreading {
    public static void main(String[] args){
        ArrayBlockingQueue<Integer> queue=new ArrayBlockingQueue<>(5);
        Thread producer=new Thread(new Producer(queue));
        Thread consumer=new Thread(new Consumer(queue));
        producer.start();
        consumer.start();
    }
}
