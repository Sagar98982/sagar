import java.io.*;

class M32

{

    public static void main(String[] args) throws IOException,ClassNotFoundException

    {                                                                                // file read k lie 2nd example throws keyword using

                                                                                    
    
            File f1 = new File("gg.txt");
            FileReader f = new FileReader(f1);

        

               // f.write("hello how r you");
                
                int i;

            while((i=f.read())!=-1)

            {
                System.out.println((char)i);                      //  ye typecating h

            }
            

            }
            
        
        }

        





