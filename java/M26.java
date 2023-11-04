import java .io.*;

class M26

{

public static void main(String[] args)

{

    File f = new File("ic.txt");

try

{

    if(f.createNewFile())

    {

    System.out.println("file successfully created");                           // file handling 1st example

    }

    else

    {

    System.out.println("File already exist");

    }
}

catch(IOException i)
{

    System.out.println("Exception Handled");

}
}
}