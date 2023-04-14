public class Couple<K, V> {
    private K key;
    private V val;

    public Couple (K key_, V value_){
        this.key = key_;
        this.val = value_;
    }

    public K getKey(){
        return this.key;
    }

    public V getVal(){
        return this.val;
    }

    public void setKey(K key_){
        this.key = key_;
    }

    public void setVal(V val_){
        this.val = val_;
    }

    public boolean isEqual(Couple c){
        return this.key == c.key && this.val == c.val;
    }

    public int nearEQ(Couple couple){
        if(this.isEqual(couple)){
            return 3;
        }
        if(this.key==couple.key){
            return 1;
        }
        if(this.val==couple.val){
            return 2;
        }
        return 0;
    }
}