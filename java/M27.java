import java .io.*;

class M26
{

public static void main(String[] args) throws IOException
{

File f = new File("ic.txt");



    if(f.createNewFile())
    {

    System.out.println("file successfully created");                           // file handling 2nd example  with throws

    }

    else
    {

    System.out.println("File already exist");

    }
}

}
    

