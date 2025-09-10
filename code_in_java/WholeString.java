public class WholeString {
    public static void main(String args[])
    {
        //passing char array to the constructer
        char chars[] = {'p','r','a','d','e','e','p'};     // character array
        String s = new String(chars);
        System.out.println(s);
        // passing char array with start index and number of character
        char chars1[] = {'p','r','a','d','e','e','p','t','i','w','r','i'}; 
        String s1 = new String(chars1,2,7);     // start index and last index
        System.out.println(s1);
        // construct one string from another string means passing object reference to the constructor
        String s2 = new String(s1);
        System.out.println(s1);
        System.out.println(s2);
        // passing ascci value to the constructor
        byte ascii[] = {65,66,67};
        String s3 = new String(ascii);
        System.out.println(s3);
        // create string by using literals
        String s4 = "PRADEEP Kumar Tiwari";
        System.out.println(s4);

        // String concatenation
        String age = "9";
        String s5 = "I am  "+age+" years old";
        System.out.println(s5);
        //String concatenation with other data type 
        int age2 = 10;
        String s6 = "You are "+age2+" years old.";
        System.out.println(s6);
        String s7 = "Four = "+(2+2);
        System.out.println(s7);

        // String fucntion
        

        //length()
        System.out.println(s.length());
        //toUpperCas()
        System.out.println(s.toUpperCase());
        System.out.println(s4.toLowerCase());
        String s8 = "My name is pradep kumar tiwari ."+
                    "Your name is Sukki Bhai.";
        System.out.println(s8+"\nThe lengthof string is ="+s8.length());            
        System.out.println("indexof(e) = "+s8.indexOf('B'));
        // here lastIndexOf() is not print the index from last .
        System.out.println("index of last character = "+s8.lastIndexOf('i')); 
        System.out.println("indexof(pradep)"+s8.indexOf("pradep"));           
        System.out.println("lastindexof(pradep)"+s8.lastIndexOf("pradep"));  
        System.out.println("indexof(y)"+s8.indexOf('y'));
        System.out.println("indexof(y) from 6 :"+s8.indexOf('y',6));
        System.out.println("lastindexof(y) from 50 :"+s8.lastIndexOf('y',50));
        System.out.println("lastindexof(pradep)"+s8.lastIndexOf("pradep")); 
        
        // Comparing Strings

        String s9 = "rohit";
        String s10 = "Rohit";
        if(s9.equals("rohit"))  // this will print but is not printing
        {
            System.out.println("both string is same.");
        }
        else{
            System.out.println("Strings are not same.");
        }
        if(s9.equals(s10))
        {
            System.out.println("s9 and s10 are same .");
        }
        else{
            System.out.println("s9 and s10 is not same");
        }
        if(s9.equalsIgnoreCase(s10))
        {
            System.out.println("s9 and s10 are same ignoring the case.");
        }
        if(s9.equalsIgnoreCase("RoHiT"))
        {
            System.out.println("s9 and RoHiT are same ignoring the case.");
        } 
        System.out.println("difference of unicode = "+s9.compareTo(s10));
        if("rohit".equalsIgnoreCase(s10))
        {
            System.out.println("s9 and s10 are same ignoring the case. with using string literalas");
        }

        // character Extraction
        //charAt(int index)
        char b = "pradeep".charAt(2);
        System.out.println(" in pradeep char =  "+b+"  is at 2");
        // getchars(int start_source_index,int source_end_index,char target[],int target_start);
        String s12 = "my name is";
        int start = 2;
        int end = 6;
        char char_arr[] = new char[end - start];
        s12.getChars(start,end,char_arr,0);
        System.out.println(char_arr);
        char arr_char2[] = s12.toCharArray();
        System.out.println(arr_char2);
        byte bytes[] = s12.getBytes();
        System.out.println("String after byte conversion");
        for(int i=0;i<s12.length();i++)
        {
            System.out.print(""+bytes[i]);
        }



        
        
    }

    
}
