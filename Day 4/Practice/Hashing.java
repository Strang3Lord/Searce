import java.io.*;
import java.util.*;

public class Hashing
{
	public static void main(String[] args)
    {
  
        Hashtable<Integer, String> h = new Hashtable<Integer, String>();
  
        h.put(1, "!!!");
        h.put(2, "HashTable");
        h.put(3, "is");
        h.put(4, "This");
        
        //printing the hashtable
        System.out.println("Data stored in Hashtable -> " + h);

        // Retriving the value at key 3
        System.out.println("The Value at key 3 is -> " + h.get(2));
              
        // Updating the value at key 2
        h.put(2, "Hashing");

        System.out.println("After updating value at key 3. Hashtable becomes -> " + h);
      
        // Removing the value at key 1
        h.remove(1);
      
        //printing the updaed hashtable
        System.out.println("After deleting value at key 1. Hashtable becomes -> " + h);

    }
}
