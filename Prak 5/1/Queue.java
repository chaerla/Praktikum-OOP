import java.util.ArrayList;

public class Queue<T> {

  private ArrayList<T> data;

  private int lastElmIdx, size;

  private final static int DEFAULT_QUEUE_SIZE = 500;



//Instantiate dengan size default

  public Queue(){
    this.data = new ArrayList<>();
    this.size = Queue.DEFAULT_QUEUE_SIZE;
    this.lastElmIdx = -1;
  };

//Instantiate dengan size = n

  public Queue(int n){
    this.data = new ArrayList<>();
    this.lastElmIdx = -1;
    this.size = n;
  };

//Copy queue

  public Queue(final Queue<T> q){
    this.data = new ArrayList<>();
    for (T t : q.data){
        this.data.add(t);
    }
    this.size = q.size;
    this.lastElmIdx = q.lastElmIdx;
  };

  public void push(T t){
    if(!this.isFull()){
        this.data.add(t);
        this.lastElmIdx++;
    }
  }

  public T pop(){
    T ret = this.data.get(0);
    if(!this.isEmpty()){
        this.data.remove(0);
        this.lastElmIdx--;
    }
    return ret;
  }

  public boolean isEmpty(){
    return this.lastElmIdx == -1;
  };

  public boolean isFull(){
    return this.size == this.lastElmIdx + 1;
  };
}